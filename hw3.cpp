//Decreasing and increasing pattern
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void nest(int);
int main()
{   
    system("clear");
    int n;
    cout<<endl<<"Enter no of line for the pattern. ";
    cin>>n;

    nest(n);
}
void nest(int n)
{
    int i,j, sp=35, k, l;

    for(i=1;i<=n;i++)
    {
                for(j=1;j<=sp;j++)
                cout<<" ";
                for(k=i;k>=1;k--)
                cout<<setw(2)<<k;
                for(l=2;l<=i;l++)
                cout<<setw(2)<<l;
                cout<<endl;
            
                sp = sp - 2;
           
    }
}