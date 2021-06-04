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

ll kadane(vector<long long>::iterator b, vector<long long>:: iterator e){
    ll maxSum=-1e15, sum= 0;
    while(b!=e){
        if(sum<=0)sum = (*b);
        else sum=sum+ (*b);
        b++;
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}

void sigma(ll n, ll k){
    ll input;
    vll ips;

    FOR(i, 0, n){
        cin >> input;
        ips.pb(input);
    }
    k=min(ll(100),k);
    if (k==1){
        cout<<kadane(ips.begin(),ips.end())<<endl;
        return;
    }
    if (k==2){
        if (n==2){
            cout<<ips[0]+2*ips[1]<<endl;
            return;
        }
        vll k1;
        vll k2;
        FOR(i,0,n-1){
            k1.pb(kadane(ips.begin(),ips.begin()+i+1));
            cout << k1.back()<<"\t";
        }
        cout<<endl;
        FOR(i,1,n){
            k2.pb(kadane(ips.begin()+i,ips.end()));
            cout << k2.back()<<"\t";
        }
        cout<<endl;
        ll big=-1e15;
        FOR(i,0,k1.size()){
            ll kk=k1[i]+2*k2[i];
            cout << kk <<"\t";            
            big=max(big,kk);
        }
        cout<<endl;
        cout<<big<<endl;
        return;
    }
    vll ex(n+1,-1e15);
    ex[n]=0;
    vector<vll> dp(n-k+2,ex);
    FOR(i, 0, n){
        FOR(j,i,n){
            dp[i][j]=kadane(ips.begin()+i,ips.begin()+j+1);
        }
    }
    ll maxed=-1e15;
    FOR(i, 0, n-k+1){
        maxed=max(maxed,dp[0][i]+2*dp[i+1][n-k+1]);
    }
    cout << maxed << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, n, k;
    cin >> T;
    while(T--){
        cin >> n >> k;
        sigma(n, k);
    }

    return 0;
}