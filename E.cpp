#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long Max=-1;
    for(int i=1;i<=N;i++)
    {
        long long number;
        cin>>number;
        if(number>Max)
        {
            Max = number;
        }
    }
    cout<<Max<<endl;
    return 0;
}
