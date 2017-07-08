#include <iostream>

using namespace std;

int main()
{
    string res="";
    string mN="Malvika";
    string aN="Akshat";
    int n=0, m=0,score=0;
    int stickes=0,intersection=0,counter=0;
    cin >> n >>m;
    stickes=n+m;
    intersection=n*m;


    for(int i=0;i<intersection;i++)
    {
        if(intersection > 0){
            intersection = intersection -2;
            m--;
            n--;
            if(m<1 || n<1)
            {counter++;
                break;
            }
            else{
            counter++;}


    }}
    if(counter %2 == 0)
    {
        res=mN;
    }
    else
    {
        res=aN;
    }
    cout << res <<endl;

    return 0;
}

          //  cout << counter << endl;
    //cout << stickes << endl;
   // cout << intersection << endl;

   /**
   cout << " STICKES : " << stickes<<endl;
            cout <<"COUNTER : " <<counter << endl;
            cout << "INTERSECTION : "<<intersection << endl;
            cout << "I : "<<i << endl;

   */

