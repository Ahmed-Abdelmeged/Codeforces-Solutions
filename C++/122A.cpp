#include <iostream>

using namespace std;

bool isLucky(int n)
{
    while (n!=0)
    {
        if(n%10 != 7 && n%10 != 4)
        {
            return false;
        }
        n /=10;
    }
    return true;
}

bool isDividedByLucky(int n)
{
    if(isLucky(n))
    {
        return true;
    }

    for(int i =1;i<n;i++)
    {
         if(n%i == 0 && isLucky(i))
        {
            return true;
        }
    }
        return false;

}

int main()
{
    int number = 0;
    string res="";
    cin >> number;
    if(isDividedByLucky(number))
    {
        res ="YES";
    }
    else
    {
        res="NO";
    }

    cout << res;
    return 0;
}
