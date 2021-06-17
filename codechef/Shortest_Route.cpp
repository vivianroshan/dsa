#include<bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define vi vector<long long>
#define vli vector<long>
#define vll vector<long long>
#define pb push_back
#define endl '\n'
#define um unordered_map
#define FOR(i, a, b) for(long long i = a; i < b; i++)
#define FORd(i, a, b) for(long long i = a-1; i >= b; i--)

using namespace std;

typedef long long ll;

bool sortbysec(const pair<long long,long long> &a, const pair<long long,long long> &b){ return (a.second < b.second); }

void displayF(vector<pair<long long,long long>> x){
    for(auto y: x){
        cout << y.F << "\t";
    }
    cout << endl;
}

void displayS(vector<pair<long long,long long>> x){
    for(auto y: x){
        cout << y.S << "\t";
    }
    cout << endl;
}

void shortestRoute(long long n, long long m){
    vector<pair<long long,long long>> stations(n,{0, -1});
/*
    #define F first
    #define S second
    stations.F ---- train availability
    stations.S ---- shortest time
*/
/*
    for loop below is for forward trains
*/
    long long ip;
    vector<pair<long long,long long>>::iterator x = stations.begin();
    for(auto it = stations.begin(); it != stations.end(); it++){
        cin >> ip;
        it->F = ip;
        if (it->F ==1){
            it->S = 0;
            x = it;
        }
        if (it->F ==0){
            if (x->F == 1){
                it->S = it-x;
            }
        }
    }
    // displayF(stations);
    // displayS(stations);

/*
    for loop below is for reverse trains
*/
    long long dist;
    vector<pair<long long,long long>>::reverse_iterator y = stations.rbegin();
    for(auto it = stations.rbegin(); it != stations.rend(); it++){

        if (it->F ==2){
            it->S = 0;
            y = it;
        }
        if (it->F ==0){
            if (y->F == 2){
                if(it->S != -1){
                    dist = it-y;
                    // cout << dist;
                    it->S = min(dist,it->S);
                }
                else it->S = it-y;
            }
        }
    }
    stations.begin()->S=0;
    // displayF(stations);
    // displayS(stations);
    // cout << endl;

/*
    for loop below is for answering the m queries
*/
    FOR(i, 0, m){
        cin >> ip;
        ip--;
        cout << stations[ip].S << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    long long n, m;

    cin >> T;
    FOR(i, 0, T){
        cin >> n >> m;
        shortestRoute(n,m);
    }

    return 0;
}