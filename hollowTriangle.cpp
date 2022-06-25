//Hollow triangular shape pattern
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    system("clear");
    int i,j,sp=35, n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
         for(j=1;j<=n;j++)
        {
      if(j<=i)
        cout<<setw(2)<<j;
        else
        cout<<setw(2)<<" ";
            }
        for(j=n;j>=1;j--)
        {
            if(j<=i)
           cout<<setw(2)<<j;
            else
            cout<<setw(2)<<" ";
        }
            cout<<endl;
    }
 }