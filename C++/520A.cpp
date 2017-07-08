#include <iostream>
#include<set>

using namespace std;

int main()
{
    string res = "";
    set<char> x;
    int n=0;
    cin >> n ;
    string pan="";
    cin >> pan;
     for(int i =0; i <pan.length();i++)
    {
        pan[i]=tolower(pan[i]);
    }
    for(int i =0; i <pan.length();i++)
    {
        x.insert(pan[i]);
    }
    if(x.size() >= 26)
    {
        res= "YES";
    }
    else
    {
        res= "NO";
    }
    cout << res <<endl;
      return 0;
}
