#include<iostream>
#include<vector>

#include<BU_EllipsoidalCorrection.hpp>
// #include<EllipsoidalCorrection.hpp>

using namespace std;

int main(){


    double z = 0, dist = 52.2702, lat = 29.3112, colat = 90 - lat, az = -98.373;

    string phase = "ScS";

//     vector<string> phases{"P", "pP", "PcP", "sP", "PP", "PKiKP", "pPKiKP", "sPKiKP", "S", "SP", "pS", "PnS", "sS", "SKSac", "SKKSac", "ScS", "SKiKP", "pSKSac", "sSKSac", "SS", "PKKPdf", "SKKPdf", "PKKSdf", "SKKSdf", "PKPdf", "PKPbc", "PKPab", "SKSdf"};
// 
//     vector<double> tt{626.67, 656.86, 658.64, 670.33, 771.08, 1023.14, 1056.64, 1069.35, 1138.79, 1156.30, 1173.59, 1176.56, 1190.77, 1209.68, 1209.69, 1209.82, 1224.71, 1252.33, 1266.12, 1392.86, 1850.64, 2052.18, 2064.89, 2266.24, 2350.14, 2355.43, 2359.80, 3197.06};

    double dt = EllipsoidalCorrection(phase, z, colat, dist, az);
    printf("Ellipcity correction for %s is : %11.4lf sec.\n", phase.c_str(), dt);

//     auto ec = EllipsoidalCorrection();
//     auto res = ec.getPhaseCorrection(phase, z, lat, dist, az);

//     if (res.second == 0) {
// 
//         printf("Ellipcity correction for %s is : %11.4lf sec.\n", phase.c_str(), res.first);
//     }


    return 0;
}

