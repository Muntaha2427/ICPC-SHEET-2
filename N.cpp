#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S;
    long long N,num;
    cin>>S>>N;
    if(S=='+' || S=='-' || S=='*' || S=='/')
    {
        for(int i=0; i<N; i++)
        {
            cin>>num;
            for(int j=0; j<num; j++)
            {
                cout<<S;
            }
            cout<<endl;
        }
    }
    return 0;
}

