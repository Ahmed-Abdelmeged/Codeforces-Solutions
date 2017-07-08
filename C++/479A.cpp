#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    int s1,s2,s3,s4,s5,s6;
    int r1=0,r2=0,r3=0,res=0,fRes=0;;
    cin >>a>>b>>c;

    s1=a+b*c;
    s2=a*(b+c);
    s3=a*b*c;
    s4=(a+b)*c;
    s5=a+b+c;
    s6=a*b+c;

    r1=max(s1,s2);
    r2=max(s3,s4);
    r3=max(s5,s6);
    res=max(r1,r2);
    fRes=max(res,r3);
    cout << fRes  <<endl;

    return 0;
}
