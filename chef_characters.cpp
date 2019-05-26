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
    fastread
    bool flag=false;
	ll n,i,ans;
	string s;
	list<char> lovely;
	cin>>n;
	while(n--)
    {
        i=-1;
        lovely.clear();
        ans=0;
        cin>>s;
        while(s[++i]!='\0')
        {
            flag=false;
            if(s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f')
            {
                if(lovely.size()<4)
                {
                    for(list<char> :: iterator it=lovely.begin();it!=lovely.end();it++)
                    {
                        if((*it)==s[i])
                            flag=true;
                    }
                    if(flag)
                    {
                        while(lovely.size()>0)
                        {
                            if(lovely.front()==s[i])
                            {
                                lovely.pop_front();
                                break;
                            }
                            lovely.pop_front();
                        }
                    }
                    lovely.pb(s[i]);
                }
                else
                {
                    while(lovely.size()>0)
                    {
                        if(s[i]==lovely.front())
                        {
                            lovely.pop_front();
                            break;
                        }
                        lovely.pop_front();
                    }
                    lovely.pb(s[i]);
                }
            }
            else
                lovely.clear();
            if(lovely.size()==4)
                ans++;
        }
        if(ans==0)
            cout<<"normal";
        else
            cout<<"lovely"<<" "<<ans;
        cout<<"\n";
    }
	return 0;
}
