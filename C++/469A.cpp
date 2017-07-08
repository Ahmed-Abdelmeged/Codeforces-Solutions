#include <iostream>
#include<set>

using namespace std;

int main()
{

    std::set<int> num;
    int n=0;
    int p =0,q=0;
    cin >>n;
    string win = "I become the guy.";
    string lose = "Oh, my keyboard!";
    string res= "";
    cin >> p;
    int x[p];
    for(int i =0;i<p;i++)
    {
        cin >> x[i];
        num.insert(x[i]);
    }

    cin >> q;
    int y[q];
    for(int i =0;i<q;i++)
    {
        cin >> y[i];
        num.insert(y[i]);
    }

    if(num.size() == n)
    {
        res=win;
    }
    else
    {
        res= lose;
    }

    cout << res<<endl;


    return 0;
}




/**
 for(int i =0;i<p;i++)
    {
        if(x[i] > tempX)
        {
            tempX=x[i];
        }
    }


    for(int i =0;i<q;i++)
    {
        if(y[i] > tempY)
        {
            tempY=y[i];
        }
    }

    cout << tempX <<endl;
    cout << tempY<<endl;
*/
