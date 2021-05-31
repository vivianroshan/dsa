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

using namespace std;

typedef long long ll;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

vector<ll> prime(long long L, long long R){
    ll sr=sqrt(R);
    vector<ll> v(sr+3,1);
    vector<ll> primes;
    for(ll i=2;i<=sr;i++) {
        if(v[i]==1){
            primes.push_back(i);
            for(ll j=i*i;j<=sr;j+=i) {
                v[j]=0;
            }
        }
    }
    vector<ll> ans(R-L+1,1);
    for(auto c:primes) {
        ll b=(L/c) *c;
        if(b<L){
            b+=c;
        }
        if(b==c){
            b+=c;
        }
        for(ll j=b;j<=R;j+=c) {
            ans[j-L]=0;
        }
    }
    vector<ll> res;
    for(ll i=L;i<=R;i++) {
        if(ans[i-L]==1  && i!=1) {
            res.push_back(i);
        }
    }
    return res;        
}

void totalComponents(ll eh, vll &pr){
    ll gr=1;
    if (eh==1){
        cout << 1 << endl;
        return;
    }
    if (eh==2){
        cout << 1 << endl;
        return;
    }
    if (eh==3){
        cout << 2 << endl;
        return;
    }
    for(auto x:pr){
        // cout<<p<<"\t";
        if (x>eh)break;
        if(x*2<=eh)gr++;
    }
    // cout<<endl;
    cout << gr << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vll inputs;
    ll T,asd;
    cin >> T;
    int maxe=0;
    FOR(i, 0, T){
        cin >> asd;
        inputs.pb(asd);
        maxe=(asd>maxe)?asd:maxe;
    }
    vll pr=prime(1,maxe);
    for (auto y : pr){
        cout << y << " ";
    }
    cout << endl;
    for(auto x:inputs){
        totalComponents(x,pr);
    }
    

    return 0;
}