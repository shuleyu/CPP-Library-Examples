#include<iostream>

#include<FindAz.hpp>

using namespace std;

int main(){

    double lo1,la1,lo2,la2;

//     lo1=47.3841;
//     la1=62.9961;

    lo1=0.54743;
    la1=45.4728;

    lo2=0;
    la2=45;

    // Use function.
    cout << FindAz(lo1,la1,lo2,la2) << endl;
    return 0;
}
