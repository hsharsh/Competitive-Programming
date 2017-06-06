/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vl 			vector<ll>
#define vii 		vector<vector<int> >
#define vll 		vector<vector<ll> >
#define vs 			vector<string>
#define vb			vector<bool>
#define si 			set<int>
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I,T){
		int G;
		cin >> G;
		REP(II, G){
			int n, i, q;
			cin >> i >> n >> q;
			if(i == 1){
				if(!(n & 1)){
					if(q == 1)
						cout << (n + 1) / 2 << endl;
					else
						cout << (n) / 2 << endl;
				}
				else{
					if(q == 1)
						cout << (n) / 2 << endl;
					else
						cout << (n + 1) / 2 << endl;					
				}
			}
			else{
				if((n & 1)){
					if(q == 1)
						cout << (n + 1) / 2 << endl;
					else
						cout << (n) / 2 << endl;
				}
				else{
					if(q == 1)
						cout << (n) / 2 << endl;
					else
						cout << (n + 1) / 2 << endl;					
				}		
			}
		}
	}	
}
