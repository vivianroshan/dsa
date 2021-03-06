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

void ctime(int n, int k, int f){
    vector<pair<int,int>> proc;
    int x, y;
    FOR(i, 0, n){
        cin >> x >> y;
        proc.pb(mp(x,y));
    }
    int start=0, finish=0, time = 0;
    sort(proc.begin(),proc.end());
    FOR(j, 0, n){
        if(proc[j].F>=finish){
            start=proc[j].F;
            finish=proc[j].S;
            time+=max(finish-start,0);
        }
        else if(proc[j].F<finish && proc[j].S<finish)continue;
        else if(proc[j].F<finish && proc[j].S>finish){
            start=finish;
            finish=proc[j].S;
            time+=max(finish-start,0);
        }
    }
    // cout << f-time << "\t" << k << "\t" << f-time-k<< "\t";
    cout << ((f-time-k>=0)?"YES":"NO") << endl;   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, n, k, f; 
    /*  T - No of test cases
        n - No of of invigilators 
        k - Time needed to cheat 
        f - Total time
    */
    cin>>T;
    FOR(i,0,T){
        cin>>n>>k>>f; 
        ctime(n,k,f);
    }
    return 0;
}