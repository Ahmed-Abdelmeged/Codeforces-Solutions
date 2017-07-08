#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n =0,b=0,a=0,remain=0,x=0;
    string res="";
    string Antisimon = "1";
    string Simon = "0";
    cin >> a >> b >> n;
    x=n;
    for(int i =0;i<n;i++)
    {
        remain=gcd(abs(a),abs(x));
        x -=remain;

        if(remain > x)
        {
            res=Simon;
            break;
        }
        remain=gcd(abs(b),abs(x));
        x -= remain;

        if(remain > x)
        {
            res=Antisimon;
            break;
        }
    }

    cout << res << endl;

    return 0;
}
