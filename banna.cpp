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
	ll t,n,h,hour,top,bottom,mid,ans=MAX;
	cin>>t;
	while(t--){
        ans=-1;
        cin>>n>>h;
        vll pile(n);
        Fl(i,0,n)
            cin>>pile[i];
        sort(all(pile));
        top=pile[n-1];
        bottom=1;
        while(bottom<=top){
            mid=(top+bottom)/2;
            hour=0;
            Fl(i,0,n){
                if(mid<pile[i])
                    hour+=(pile[i]/mid+(pile[i]%mid!=0));
                else
                    hour++;
            }
            //cout<<hour<<" ";
            if(hour>h)
                bottom=mid+1;
            else{
                ans=mid;
                top=mid-1;
            }
        }
        cout<<ans<<"\n";
	}
	return 0;
}
