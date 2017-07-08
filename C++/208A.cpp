#include <iostream>

using namespace std;

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

int main()
{
    string s= "";
    string rem="WUB";
    cin >>s;

   replaceAll(s , rem," ");

    cout << s;

    return 0;
}


/**

    for(int j = 0 ;j<s.length();j++ )
    {

    string::size_type i=s.find(rem);

    if(i!= string::npos)
    {
        s.erase(i,rem.length());
    }
    }

*/


/**




bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

std::string string("hello $name");
replace(string, "$name", "Somename");
*/
