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

int summerHeat(int xa, int xb, int Xa, int Xb){
    return Xa/xa + Xb/xb;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    int xa, xb, Xa, Xb;
    FOR(i, 0, T){
        cin >> xa >> xb >> Xa >> Xb;
        cout << summerHeat(xa, xb, Xa, Xb) << endl;
    }

    return 0;
}