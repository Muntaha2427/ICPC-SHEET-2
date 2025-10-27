#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,num,i;
    cin>>N;
    for(num=1;num<=N;num++)
    {
        int count=0;
        if(num<=1)
        {
            count++;
        }
        else
        {
            for(i=2;i<=sqrt(num);i++)
            {
                if(num%i==0)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
        {
            cout<<num<<" ";

        }
    }
    return 0;
}
