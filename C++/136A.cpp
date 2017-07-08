#include <iostream>

using namespace std;

int main()
{
    int n= 0 ,x=0;
    cin >> n ;
    int p [n];
    for(int i=1; i <n+1 ; i++)
    {
        cin >> p[i];

    }


    for(int i=1; i <n+1 ; i++)
    {
        for(int j =1 ; j<n+1;j++)
        {
           if(p[j]==i)
           {
               cout << j << " ";
               break;
           }
        }
    }



    return 0;
}
