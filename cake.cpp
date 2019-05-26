#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define fastread ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<ll> vec;
set<ll> s;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    string matrix[m];
	    for(int i=0;i<m;i++)
            cin>>matrix[i];
        ll cost=0;
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(matrix[i][j]=='R' && matrix[i][j+1]=='R')
                {
                    if(matrix[i+1][j]=='R')
                    {
                        matrix[i][j]='G';
                        cost+=5;
                    }
                    else
                    {
                        matrix[i][j+1]='G';
                        cost+=3;
                        j++;
                    }
                }
                else if(matrix[i][j]=='G' && matrix[i][j+1]=='G')
                {
                    if(matrix[i+1][j]=='R')
                    {
                        matrix[i][j+1]='R';
                        cost+=3;
                        j++;
                    }
                    else
                    {
                        matrix[i][j]='R';
                        cost+=5;
                    }

                }
                else
                    continue;
            }
            cout<<matrix[i]<<" ";
        }
        cout<<cost<<"\n";
	}
	return 0;
}
