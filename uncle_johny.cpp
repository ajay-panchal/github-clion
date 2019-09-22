 
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
    while(t--){
        int n;cin>>n;
        int a[n];
        for (int i = 0; i <n ; ++i) {
            cin>>a[i];
        }
        int x;cin>>x;
        int search=a[x-1];
        sort(a,a+n);
        for (int j = 0; j <n ; ++j) {
            if(a[j]==search)
            {
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE 
// DEBUG 
// AC
