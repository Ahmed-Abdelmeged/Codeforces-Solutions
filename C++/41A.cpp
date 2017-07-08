#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s="";
    string t="";
    string res="";
    cin >> s >>t;
    std::reverse(t.begin(),t.end());
    if(s == t)
    {
        res= "YES";
    }
    else{
        res= "NO";
    }
    cout << res;

    return 0;
}

/*
   for(int i = 0 ; i<s.length();i++)
    {
        for (int j=i;j<t.length();j++)
        {
            if(s[i] == t[t.length()-1-j] && counter<s.length())
               {
                  counter++;
                    cout << counter <<endl;

               }
               else
               {
                   break;
               }

        }
    }


    if(counter == s.length())
    {
        res= "YES";
    }
    else
    {
        res = "NO";
    }

    cout << res;
*/
