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

int lazyChef(int x, int m, int d){
        return (x*m-x<d)?(x*m):(x+d);
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, x, m ,d;
    cin >> T;
    FOR(i, 0, T){
        cin >> x >> m >> d;
        cout << lazyChef(x, m, d) << endl;
    }
    return 0;
}