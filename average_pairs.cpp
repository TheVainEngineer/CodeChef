#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define Fl(i,a,b) for(ll i=a;i<b;i++)
#define Fll(i,a,b) for(ll i=a;i<=b;i++)
#define Fr(i,a,b) for(ll i=a;i>=b;i--)
//-------------------------------------------------------
#define ipair pair<ll,ll>
#define vll vector<ll>
#define vstr vector<string>
#define vchar vector<char>
#define sll set<ll>
#define mll map<ll,ll>
//---------------------------------------------------------
#define MIN -1
#define MAX 1e10
#define VER 101
#define fastread ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vll adj[VER];
//----------------------------------------------------------------------------
void make_edge(ll a,ll b)
{
	adj[a].pb(b);
	adj[b].pb(a);
}
ll sum_of(ll n)
{
    if(n==0)
        return 0;
    return (n*(n+1))/2;
}
//-----------------------------------------------------------------------------
int main()
{
	ll t,n,val,pos,ans;
	cin>>t;
	while(t--){
        ans=0;
        cin>>n;
        sll s;
        vll v(n);
        vll check(1e5+1,0);
        Fl(i,0,n){
            cin>>v[i];
            s.insert(2*v[i]);
            check[v[i]]++;
        }
        sort(all(v));
        for(sll :: iterator it=s.begin();it!=s.end();it++){
            val=(*it);
            pos=lower_bound(all(v),val)-v.begin();
            if(pos==n)
                pos=lower_bound(all(v),v[pos-1])-v.begin();
            //cout<<val<<" "<<pos<<"\n";
            while(pos>=0){
                if(v[pos]<(val/2))
                    break;
                if(v[pos]==(val/2))
                    ans+=(sum_of(check[v[pos]]-1));
                else{
                    if(check[v[pos]] && check[val-v[pos]])
                        ans+=(check[v[pos]]*check[val-v[pos]]);
                }
                pos--;
            }
            //cout<<ans<<" ";
        }
        cout<<ans<<"\n";
	}
	return 0;
}
