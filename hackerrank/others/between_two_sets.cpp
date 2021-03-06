/*****************************************************************************************
								Author: Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	ll n,m,count=0;
	cin>>n>>m;
	vi a(n),b(m);
	REP(i,n)
		cin>>a[i];
	REP(i,m)
		cin>>b[i];

	FOR(i,1,101){
		bool flag=true;
		REP(j,n){
			if(i%a[j]!=0)
				flag=false;
		}
		REP(j,m){
			if(b[j]%i!=0)
				flag=false;
		}
		if(flag){
			count++;
		}
	}
	cout<<count<<endl;
}
