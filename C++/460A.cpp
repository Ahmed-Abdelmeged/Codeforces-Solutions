#include <iostream>

using namespace std;

int main()
{
     int n=0,m=0,number=0,counter=0,res=0;
     cin >>n>>m;
     number =number +n;
     for(int i =1;i<n;i++)
     {
      res=m*i;
      if(res>n)
      {
          break;
      }
        counter++;
        n++;

     }
     number = number+counter;
     cout << number<<endl;

    return 0;
}
