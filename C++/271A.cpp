#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set<int> setx;


bool check(int year)
{
    int counter=0;
    int temp =0;
    setx.clear();
    while(year !=0)
    {
         temp=year%10;
        setx.insert(temp);
        year = year /10;
        counter++;
    }

      if(counter == setx.size())
    {
        return true;
    }
    else{
            return false;

    }
}

int main()
{
    int y=0;
    cin >> y;
    y=y+1;
    while(true)
    {
        if(check(y)){
            cout << y <<endl;
            break;}
            else {
            y++;
            }
        }


    return 0;
}





