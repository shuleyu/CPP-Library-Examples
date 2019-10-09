#include<iostream>

#include<Float2String.hpp>

using namespace std;

int main(){

    double A=3.456700;

    cout << Float2String(A) << endl;
    cout << Float2String(A,3) << endl;

    return 0;
}
