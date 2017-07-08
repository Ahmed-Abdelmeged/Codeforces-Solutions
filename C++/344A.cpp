#include <iostream>

using namespace std;

int main()
{
    int n=0,res=0,counter=0;

    cin >> n;
    string mag[n];

    for (int i =0; i <n; i++)
    {
        cin >> mag[i];
    }

    for (int i =0; i <n; i++)
    {
        if(mag[i] != mag[i+1])
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
