#include<iostream>

#include<SQLite.hpp>

using namespace std;

int main(){

    string dbFile="./data/sqlite3Example.db";

    SQLite::Query(dbFile,"drop table if exists Records");
    SQLite::Query(dbFile,"create table if not exists Records (Flag integer, PairName text, Lon numeric, Lat numeric)");
    vector<string> pairnames{"2015_R32A","2014_R32A","2013_R32A","2012_R32A","2012_R34A"};
    vector<string> lats{"11.5","NULL","31","41","41"},lons{"322","333","333","333","333"};
    vector<string> F{"0","1","0","1","0"};
//     auto types=SQLite::IsString(dbFile,"Records",vector<string> {"PairName","Lat","Lon","Flag"});
//     for (auto item:types) cout << (item?"y":"n") << endl;
    SQLite::LoadData(dbFile,"Records",vector<string> {"PairName","Lat","Lon","Flag"},vector<vector<string>> {pairnames,lats,lons,F});

    SQLite::Query(dbFile,"drop table if exists Records2");
    SQLite::CopyTableStructure(dbFile,"Records","Records2");
    SQLite::Query(dbFile,"insert into Records2 select * from Records");


    auto res=SQLite::Select(dbFile,"PairName as pn,Lat from Records where Lat is not null order by Lat ");
    for (size_t i=0;i<res.NRow();++i)
        cout << res.GetString("pn")[i] << " " << res.GetDouble("Lat")[i] << endl;
// 
//     SQLite::UpdateTable("playground.T1","playground.T2","pairname");
// 
//     cout << "T1 Updated: " << endl;
//     res=SQLite::Select("pairname as pn,lat,flag,lon,netwk,gcarc from playground.T1");
//     cout << "pairname lat flag lon netwk gcarc" << endl;
//     for (size_t i=0;i<res.NRow();++i)
//         cout << res.GetString("pn")[i] << " " << res.GetDouble("lat")[i] << " " << res.GetInt("flag")[i] << " " << res.GetDouble("lon")[i]  << " " << res.GetString("netwk")[i] << " " << res.GetDouble("gcarc")[i] << endl;
// 
    return 0;
}

