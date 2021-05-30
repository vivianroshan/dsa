#include<bits/stdc++.h>
#include<math.h>

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
#define TIME 9.58

float wr_time = TIME;

using namespace std;

void worldRecord(float v){
    float time=int(10000/v+0.5);
    time/=100;
    // cout << wr_time << " " << time <<endl;
    cout << ((time<wr_time)?"YES":"NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    float k1, k2, k3, v;
    cin >> n;
    FOR(i, 0, n){
        cin >> k1 >> k2 >> k3 >> v;
        worldRecord(k1 * k2 * k3 * v);
    }

    return 0;
}