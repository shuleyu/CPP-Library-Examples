#include<iostream>

#include<Lon2180.hpp>

using namespace std;

int main(){


    // Use function 1.

    for (double lon=-181; lon<181; lon+=0.5)
        cout << lon << " -> " << Lon2180(lon) << endl;
    
    // Use function 2.

    double Lon=-180;
    cout << Lon << " " << Lon2180(Lon) << endl;

    return 0;
}
