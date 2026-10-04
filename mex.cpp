#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second

void solve() {
    // mex of an array is minimal smallest non negative integer that is not in the array 

    vector<int>arr = {0,1,2,3,4,5};
    map<int,int>mpp;
    for(auto it:arr){
        mpp[it]++;
    }
    // [1:1,4:1,23:1,66:1]

    for(int i = 0; i <=(int)arr.size() ; i++){
        if(mpp[i] == 0){
            cout<<i;
            break;
        }
    }



}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
