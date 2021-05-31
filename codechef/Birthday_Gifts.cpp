#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vli vector<long long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORd(i, a, b) for(int i = a-1; i >= b; i--)

typedef long long ll;

using namespace std;

bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

ll Birthday_Gifts(ll n, ll k){
    vli gifts;
    ll ips;
    FOR(i, 0, n){
        cin >> ips;
        gifts.pb(ips);
    }
    sort(gifts.begin(),gifts.end());
    pair<ll,ll> twins=mp(0,0);
    while(k!=0){
        twins.F += gifts.back();
        gifts.pop_back();
        twins.S += gifts.back();
        gifts.pop_back();
        k--;
    }
    twins.S+=gifts.back();
    gifts.pop_back();
    return max(twins.F, twins.S);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, n, k;
    cin >> T;

    FOR(i, 0, T){
        cin >> n >> k;
        cout << Birthday_Gifts(n,k) << endl; 
    }
    return 0;
}