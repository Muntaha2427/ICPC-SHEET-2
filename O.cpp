#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int row=1;row<=i;row++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
