#include <iostream>

using namespace std;

int main()
{
    int n =0,counter=0,floor=0;
    cin >> n;
    for(int i =1 ; i <= n;i++)
    {
        floor +=i;
        n -= floor;
        if(n >= 0)
        {
        counter ++ ;
        }

    }
    cout << counter << endl;
    return 0;
}
