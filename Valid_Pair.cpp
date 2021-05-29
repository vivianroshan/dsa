#include<bits\stdc++.h>

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

int validPair(int x, int y, int z){
    cout << ((x == y || y == z || z == x)?"YES":"NO"); 
    cout << endl;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;
    validPair(x, y, z);

    return 0;
}