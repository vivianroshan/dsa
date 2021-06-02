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
#define FOR(i, a, b) for(ll i = a; i < b; i++)
#define FORd(i, a, b) for(ll i = a-1; i >= b; i--)

using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

vll primeCount(ll n){
    vll v(n+1,1);
    vll countArray(2,0);
    ll count=0;
    FOR(i, 2, n+1) {
        if(v[i]==1){
            count++;
            for(ll j=i*i; j<=n; j+=i) {
                v[j]=0;
            }
        }
        countArray.push_back(count);
    }
    return countArray;
}

ll totalComponents(ll x, vll &pr){
    if (x==1 || x==2)return 1;
    if (x==3)return 2;
    return pr[x]-pr[x/2]+1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vll inputs;
    ll T, tillN;
    cin >> T;
    int maxim=0;
    FOR(i, 0, T){
        cin >> tillN;
        inputs.pb(tillN);
        maxim=(tillN>maxim)?tillN:maxim;
    }
    
    vll pr=primeCount(maxim);

    for(auto x:inputs){
        cout << totalComponents(x,pr) << endl;
    }
    

    return 0;
}
