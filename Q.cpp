#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin>>T;
    while(T--)
    {
        long long num,rem;
        cin>>num;
        if(num==0)
            cout<< 0;
        while(num!=0)
        {
            rem=num%10;
            cout<<rem<<" ";
            num = num/10;
        }
        cout<<endl;
    }
    return 0;
}
