#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin>>T;
    while(T--)
    {
    long long num1,num2;
        cin>>num1>>num2;
        long long mx=max(num1,num2);
        long long mn=min(num1,num2);
        long long sum=0;
        long long i=mn+1;
        while(i<mx)
        {
            if(i%2!=0)
            sum=sum+i;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

