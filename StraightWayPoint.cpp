#include<iostream>

#include<StraightWayPoint.hpp>

using namespace std;

int main(){

    // Use function.
    auto res=StraightWayPoint(0, 90, 0, 0, 0, 0, 6371 * sqrt(2) / 2);
    cout << res[0] << " " << res[1] << " " << res[2] << endl;
    return 0;
}
