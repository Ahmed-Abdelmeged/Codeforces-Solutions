#include <iostream>

using namespace std;

int main()
{
    int n =0,p=0,q=0 ,res=0,con=0;
    cin >> n;
    for (int i = 0 ; i < n;i++)
    {
        cin >> p;
        cin >> q;
    con = q-p;
        if(p <q && con >=2)
        {
            res++;
        }

    }
    cout << res;
    return 0;
}
