#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define ipair pair<ll,ll>
#define MAX 1e10
#define fastread ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<ll> vec;
set<ll> s;
int main()
{
    ll n;
	do
    {
        cin>>n;
        if(n==0)
            break;
        vector<ll> arr(n+1);
        for(ll i=1;i<=n;i++)
            cin>>arr[i];
        ll flag=true;
        for(ll i=1;i<=n;i++)
        {
            ll pos=arr[i];
            if(arr[pos]!=i)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"ambiguous"<<"\n";
        else
            cout<<"not ambiguous"<<"\n";
    }while(n>0);
	return 0;
}
