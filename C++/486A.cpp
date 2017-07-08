#include <iostream>

using namespace std;

int main()
{
    long long n=0,res=0,odd=0,even=0;
    cin >>n;



    even=n/2;
    odd=n-even;
    res=(even*(even+1))-(odd*odd);



    cout <<res<<endl;

    return 0;
}
