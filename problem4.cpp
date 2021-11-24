#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cout<<"Enter how many numbers you want in the number list"<<endl;
    cin>>arr_size;
    int numList[arr_size];

    cout<<"Enter numbers in number list :";

    for(int i=0;i<arr_size;i++)
    {
        cin>>numList[i];
    }

    for(int i=1;i<10;i++)
    {
        int counter=0;
        for(int j=0;j<arr_size;j++)
        {
            if(numList[j] % i == 0)
            {
                counter=counter+1;
            }
        }
        if(i==1)
            cout<<"{";
        if(i==9)
            cout<<i<<":"<<counter<<"}";
        else
            cout<<i<<":"<<counter<<",";
    }
    return 0;
}
