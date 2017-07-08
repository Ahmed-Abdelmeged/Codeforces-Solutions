#include <iostream>

using namespace std;

int main()
{
    string p="";
    string res="";
    cin >> p;
    for(int i =0; i<p.length(); i++)
    {
        if (p.find('H') != string::npos || p.find('Q') != string::npos ||
            p.find('9') != string::npos  )
        {
            res ="YES";
        }
        else
        {
            res = "NO";
        }
    }
    cout << res;
    return 0;
}
//&& p[i] == 'Q' && p[i] == '9' && p[i] == '+'
