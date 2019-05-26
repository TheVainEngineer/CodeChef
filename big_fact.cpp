#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define ipair pair<ll,ll>
#define MAX 1e10
#define fastread ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<ll> vec(500);
set<ll> s;
ll number(ll ,ll );
void fact(ll n)
{
    vec[0]=1;
    ll vec_size=1;
    for(ll i=2;i<=n;i++)
        vec_size=number(i,vec_size);
    for(ll i=vec_size-1;i>=0;i--)
        cout<<vec[i];
}
ll number(ll x,ll vec_size)
{
    ll carry=0;
    for(ll i=0;i<vec_size;i++)
    {
        ll prod=vec[i]*x+carry;
        vec[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        vec[vec_size]=carry%10;
        carry/=10;
        vec_size++;
    }
    return vec_size;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    fact(n);
	    cout<<"\n";
	}
	return 0;
}
