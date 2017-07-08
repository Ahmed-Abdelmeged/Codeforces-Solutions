#include <iostream>


using namespace std;

int main()
{
    string input = "";
    string wordAfter="";
    string check="";
    bool isUpper=false;
    cin >> input;

    for(int i=0; i<input.length() ; i++)
    {
        if(isupper(input[i]))
        {
            check += input[i];
        }
    }

    if(check.length() == input.length())
    {
        for(int i =0;i<input.length();i++)
        {
            input[i] = tolower(input[i]);
            wordAfter +=input[i];
        }
    }

    else if(islower(input[0]) && (check.length() == (input.length()-1)))
    {
        input[0] = toupper(input[0]);
        wordAfter +=input[0];
        for(int i =1;i<input.length();i++)
        {
            input[i] = tolower(input[i]);
            wordAfter +=input[i];
        }

    }
    else
    {
        wordAfter = input;
    }


        cout << wordAfter;
    return 0;
}
