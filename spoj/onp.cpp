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
	int t,length;
	char s[401];
	stack <char> st;
	cin>>t;
	while(t--){
		cin>>s;
		length=strlen(s);
		REP(i,length){
			if(isalpha(s[i])){
				cout<<s[i];
			}
			else if(s[i]==')'){
				cout<<st.top();
				st.pop();
			}
			else if(s[i]!='('){
				st.push(s[i]);
			}
		}
		cout<<endl;
	}
}
