#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define Fl(i,a,b) for(ll i=a;i<b;i++)
#define Fll(i,a,b) for(ll i=a;i<=b;i++)
#define Fr(i,a,b) for(ll i=a;i>=0;i--)
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
//-----------------------------------------------------------------------------
int main()
{
	ll t,n;
	ld pr,qu,dis,incre,decre,loss;
	cin>>t;
	while(t--){
        loss=0.0;
        cin>>n;
        Fl(i,0,n){
            cin>>pr>>qu>>dis;
            incre=(dis/100.0)*pr;
            decre=(dis/100.0)*(pr+incre);
            loss+=(decre-incre)*qu;
            //cout<<"\n"<<incre<<" "<<decre<<" "<<loss<<" ";
        }
        cout<<fixed<<setprecision(10)<<loss<<"\n";
	}
	return 0;
}
