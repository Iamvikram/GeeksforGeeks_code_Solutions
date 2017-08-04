#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mk make_pair
#define ff first
#define ss second
#define ll long long
#define FOR(i,a,b) for(i=a;i<b;i++)
//#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
typedef vector< int  > V;
const int len = 1e5 + 1;
const int mod = 1e9 + 7;
int main() {
	 int t;
	cin >> t;
	while (t--) {
		ll a,b,c;
		cin>>a>>b>>c;
		cout << ((a%c)*(b%c))%c << endl;
	}

	
}
