#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,rem,rev_num=0,f_num;
    cin>>num;
    f_num=num;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10 + rem;
        num = num/10;
    }
    if(f_num==rev_num)
        {
            cout<<rev_num<<endl<<"YES"<<endl;
        }
    else
      cout<<rev_num<<endl<<"NO"<<endl;

    return 0;
}
