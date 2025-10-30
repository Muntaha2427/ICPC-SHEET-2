#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num1,num2;
    while(true)
    {
        cin>>num1>>num2;
        if(num1<=0 || num2<=0)
            break;
        long long mx=max(num1,num2);
        long long mn=min(num1,num2);
        long long sum=0;
        long long i=mn;
        while(i<=mx)
        {
            cout<<i<<" ";
            sum=sum+i;
            i++;
        }
        cout<< "sum ="<<sum<<endl;
    }
    return 0;
}
