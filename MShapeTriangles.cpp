///M shape pattern
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
system("clear");
int n, space;
cout<<"Enter number of lines: "<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<setw(2)<<j;
    }
    space = 2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<setw(2)<<" ";
    }
    for(int j=i;j>=1;j--){
            cout<<setw(2)<<j;
    }
    cout<<endl;
}
    return 0;
}