
#include <iostream>
using namespace std;

int main()
{
 int n=0,counter =1,m=1;
     cin >> n;

 int p[n];
    for(int i =0;i<n;i++)
    {
        cin >> p[i];
        if(i > 0)
        {
            if(p[i] >= p[i-1])
            {
                counter++;
                m=max(m,counter);
            }
            else{
                counter=1;
            }
        }
    }
    cout << m <<endl;

    return 0;
}



