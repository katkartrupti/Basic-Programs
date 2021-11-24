#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cout<<"Enter a single integer :";
    cin>>x;
    if(x%2==0)
    {
        x=x-1;
    }
    for(i=1;i<=x;i++)
    {
        if(i==x)
            cout<<2*i-1;
        else
            cout<<2*i-1<<",";
    }
    return 0;
}
