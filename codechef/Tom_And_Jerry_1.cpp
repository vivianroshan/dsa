#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vli vector<long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORd(i, a, b) for(int i = a-1; i >= b; i--)

using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

bool tomAndJerry(pair<ll,ll> &tom, pair<ll,ll> &jerry, ll k){
    bool flag = 0;
    ll x,y,minMoves;
    x = abs(tom.F - jerry.F);
    y = abs(tom.S - jerry.S);
    minMoves = x + y;
    if (minMoves <= k && (minMoves-k)%2 == 0){
        flag = 1;
    }
    return flag;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, a, b, c, d, k;
    cin >> T;
    pair<ll,ll> tom;
    pair<ll,ll> jerry;
    FOR(i, 0, T){
        cin >> a >> b >> c >> d >> k;
        tom = mp(a, b);
        jerry = mp(c, d); 
        cout << (tomAndJerry(tom,jerry,k)?"YES":"NO") << endl; 
    }

    return 0;
}