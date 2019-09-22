#include<bits/stdc++.h>

#define int long long
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define vi vector<int>
#define pr pair<int,int>
#define endl "\n"
#define sz(x) (int)(x).size()
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
#define all(c) (c).begin(), (c).end()

const int MOD = 1e9 + 7;

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    //freopen("addin.txt","r",stdin); 
    //freopen("addout.txt","w",stdout);
    int t;
    cin >> t;
    for (int i = 1; i <=t ; ++i) {
        cout<<setprecision(0)<<fixed<<(i-1)*(i+4)*(i*i - 3*i +4)/2<<endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE 
// DEBUG 
// AC