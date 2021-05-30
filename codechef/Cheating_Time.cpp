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

void ctime(int N, int K, int f){
    vector<pair<int,int>> proc(K);
    int x, y;
    FOR(i, 0, N){
        cin >> x >> y;
        proc[i]=(make_pair(x,y));
        // cout<<(proc[i]).first<<" "<<(proc[i]).second<<" ";
    }
    int time = 0;
    sort(proc.begin(),proc.end());
    FOR(j, 1, N+1){
        int start=proc[j-1].first;
        cout<<start<<" ";
        while(j!=N && proc[j-1].S>=proc[j].F){
            j++;
            // cout << j << " " << proc[j-1].S << " " <<proc[j].F;
        }
        int finish=proc[j-1].S;
        time+=(finish-start);
        cout<<finish<<endl;
    }
    cout << time << " " << f-time << " " << K << " ";
    cout << ((f-time>K)?"YES":"NO") << endl;   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, N, K, f;
    cin>>T;
    FOR(i,0,T){
        cin>>N>>K>>f;
        ctime(N,K,f);
    }
    return 0;
}