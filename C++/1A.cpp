#include <iostream>
#include<cmath>
#include<stdio.h>


using namespace std;

int main(){

    long long a=0.0,x=0.0;
    double s=0,r=0,m=0,n=0;

    cin >> n >> m >>a;
    s=ceil(m/a);
    r=ceil(n/a);
    x=s*r;
    cout << x;

    return 0;
}
