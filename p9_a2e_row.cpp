#include<iostream>
using namespace std;
int main()
{
    for(int i = 1;i<=5;i++)
    {
        for(char ch = 'a';ch<='e';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    //Second Approach 
    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=5;j++)
        {
            char ch = 'a'+ j -1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}