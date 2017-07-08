#include <iostream>

using namespace std;

int main()
{
    long long n=0,k=0,res=0;
    cin >> n >>k;

    if (k <= (n + 1) / 2)
    {
        res= k * 2 - 1 ;
        cout <<res << endl;
    }
    else
    {
        res=(k - (n + 1) / 2) * 2 ;
        cout << res << endl;
    }

    return 0;
}
