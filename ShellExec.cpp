#include<iostream>

#include<ShellExec.hpp>

using namespace std;

int main(){

    auto a = ShellExec("mkdir /Users/shuleyu/Documents/Research/CPP-Library-Examples/jlsdf");
    cout << a.size() << endl;

    return 0;
}
