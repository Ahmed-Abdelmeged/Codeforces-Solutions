#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> x;
    string input = "";
    getline(cin , input);
    for(int i = 0; i <input.length();i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z' ){
        x.insert(input[i]);
    }
    }
    cout << x.size()<<endl;
    return 0;
}
