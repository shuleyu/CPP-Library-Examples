#include<iostream>

#include<GcpDistance.hpp>

using namespace std;

int main(){

    pair<double,double> p1{-179, -17}, p2{-150, -5};
    
    // Use function.
    cout << GcpDistance(p1.first,p1.second,p2.first,p2.second) << endl;
    return 0;
}
// matlab benchmark:
// lo1=0.019999;
// la1=-10;
// lo2=23.5;
// la2=38;
// distance(la1,lo1,la2,lo2)
