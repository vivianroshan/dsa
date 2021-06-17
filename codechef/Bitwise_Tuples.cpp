#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vli vector<long>
#define vll vector<long long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORd(i, a, b) for(int i = a-1; i >= b; i--)
#define MOD 1000000007

using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

ll POW(ll base, ll n){
    ll result=1;
    while(n!=0){
        if(n%2 == 0){
            n = (n/2);
            base = (base*base) % MOD;
        }
        else{
            result = (result*base) % MOD;
            n = n-1;
        }
    }
    return result;
}

ll bitwiseTuples(ll n, ll m){
    ll ans;
    ans = POW(2,n);
    ans = ans - 1;
    ans = ans % MOD;
    ans = POW(ans,m);
    ans = ans % MOD;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, n, m, ans;

    cin >> T;
    FOR(i, 0, T){
        cin >> n >> m;
        cout << bitwiseTuples(n,m) << endl;
    }

    return 0;
}