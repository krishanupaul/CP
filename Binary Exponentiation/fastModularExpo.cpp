#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(x) x.begin(),x.end()
#define watch(x) cout<<#x<<" = "<<x<<endl;
#define V(x) vector<x>
#define P(x,y) pair<x,y>
#define UMP(x,y) unordered_map<x,y>
#define MP(x,y) map<x,y>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define coutd(n) cout << fixed << setprecision(n)
typedef long long ll;
typedef double db;
typedef long double ld;
const ll mod = 1e9+7;

using namespace std;

//for fast modular exponentiation with modulus = 1e9+7
ll power(ll a,ll b){
	ll result = 1;
	a%=mod;
	
	while(b > 0){
		if(b & 1){
			result = (result * a)% mod;
		}
		a = (a * a)% mod;
		b>>=1;
	}
	return result;
}

int main(){
	fast
	
	int t;
	cin>>t;
	rep(_,0,t){
		ll a,b;
		cin>>a>>b;
		cout<<power(a,b)<<endl;		
	}
	
	return 0;
}
