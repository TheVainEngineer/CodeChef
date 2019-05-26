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
	ll t,c,d,s,n;
	ld speed,car_one,car_two,delay;
	cin>>t,n;
	while(t--)
    {
        car_one=car_two=0;
        delay=0.0;
        cin>>n;
        vll v(n);
        Fl(i,0,n)
            cin>>v[i];
        cin>>c>>d>>s;
        speed=(long double)(d/s);
        car_two=v[0];
        Fl(i,0,n-1)
        {
            car_one+=(ld)(v[i]);
            car_one+=speed;
            car_two+=(ld)(v[i]);
            car_two+=speed;
            if((car_two-car_one)>=v[i+1])
                delay=0.0;
            else
                delay=v[i+1]-(car_two-car_one);
            car_two+=delay;
        }
        car_one+=v[n-1];
        car_two+=v[n-1];
        cout<<setprecision(10)<<fixed<<(ld)((c-1)*(car_two-car_one));
        cout<<"\n";
    }
	return 0;
}
