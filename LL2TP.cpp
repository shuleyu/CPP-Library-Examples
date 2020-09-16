#include<iostream>

#include<LL2TP.hpp>

using namespace std;

int main(){

    double lon = -0.4,lat = -0.1;


    // Use function.

    auto res = LL2TP(lon, lat);
    cout << lon << " " << res.second * 180 / M_PI << " " << lat << " " << res.first * 180 / M_PI << "\n";


//     lat = 40;
//     for (int i=0;i<7222;++i){
//         lon=-361+i*722.0/7220;
//         auto res=LL2TP(lon,lat);
//         cout << lon << " " << res.second*180/M_PI << " " << lat << " " << res.first*180/M_PI << "\n";
//     }

    return 0;
}
