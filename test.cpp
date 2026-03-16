#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <queue>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second

template<class T>
void read(vector<T>& a){
    for(auto &x : a) cin >> x;
}

template<class T>
void printarr(const vector<T>& a){
    for(const auto &x : a) cout << x << " ";
    cout << '\n';
}

template<class T>
void printset(const set<T>& s){
    for(const auto &x : s) cout << x << " ";
    cout << '\n';
}

template<class T,class U>
void printmap(const map<T,U>& m){
    for(const auto &p : m) cout << p.first << ":" << p.second << " ";
    cout << '\n';
}

template<class T,class U>
void printpair(const pair<T,U>& p){
    cout << p.first << " " << p.second << '\n';
}

void solve(){

}

int main(){
    fastio

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    cout << "Execution Completed" << endl;

    return 0;
}