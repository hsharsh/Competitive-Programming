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

int d;

void dfs(int s, vi adj[], vb visited, vi degree){
	visited[s] = true;
	
	REP(i,adj[s].size()){
		if(visited[adj[s][i]] == false && degree[i] > d)
			dfs(adj[s][i], adj, visited, degree);
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I,T){
		int n, m;
		cin >> n >> m;
		vi adjacency[n+1],degree(n+1, 0);
		REP(i, m){
			int x,y;
			cin >> x >> y;
			adjacency[x].pb(y);
			adjacency[y].pb(x);
			degree[x]++;
			degree[y]++;
		}
		d = 0;
		bool removed = false;
		while(d < n){
			if(removed){
				cout << n - 1 << " ";
				d++;
				continue;
			}
			vb visited(n+1,false);
			int count = 0;
			FOR(i,1,n+1){
				if(visited[i] == false && degree[i] > d){
		        	count++;
		        	dfs(i, adjacency, visited, degree);
		        }
	    	}
	    	if(count == 0){
	    		cout << n - 1 << " ";
	    		d++;
	    		removed = true;
	    		continue;
	    	}
	    	else
	    		cout << n - count << " ";
	    	d++;
    	}
    	cout << endl;
	}
}
