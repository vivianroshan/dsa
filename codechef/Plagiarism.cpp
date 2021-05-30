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

int plagiarism(int n, int m, int k){
    vi num(n,0);
    vi out;
    int x;
    FOR(j, 1, k+1){
        cin >> x;
        if (x<=n){
            num[x-1]++;
        }
    }
    FOR(i, 0, num.size()){
        if(num[i]>1){
            out.pb(i+1);
        }
    }
    cout << out.size();
    for(auto k:out){
        cout << " " << k;
    }
    cout << endl;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, M, K;
    cin >> T;
    FOR(i,0,T){
        cin >> N >> M >> K;
        plagiarism(N, M, K);
    }

    return 0;
}