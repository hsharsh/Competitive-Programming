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
	ll n,m=0,mc=0,curr;
	cin>>n;
	vi a(n);
	REP(i,n)
		cin>>a[i];
	sort(all(a));

	ll i=0;
	while(i<n){
		mc=0;
		curr=a[i];
		if(abs(curr-a[i])<=1){
			while(abs(curr-a[i])<=1){
				i++;
				mc++;
			}
		}
		else
			i++;
		m=max(m,mc);
	}
	cout<<m<<endl;
}
