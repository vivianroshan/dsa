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

// 1 1 3 3 5

ll bellaCiao(ll D, ll d, ll P, ll Q){
    ll q = ll(D/d);
    ll R = D-q*d;
    ll money = (q*d*(2*P+(q-1)*Q))/2;
    // ll money = ( q/2*(2*P + (q-1) * Q) ) * d;
   
    money += (P+q*Q)*R;
    return money;
}

 // FOR(i, 0, q){
    //     money += P*d;
    //     P = P+Q;
    // }
    // cout << q << "\t";
    // cout << R << "\t";
    // cout << money << "\t";
    // cout << (P+q*Q)*R << "\t";
    // a + (n – 1) × d

// ll bellaCiao2(int D, int d, int P, int Q){
//     ll money=0;
//     ll Q = D/d;
//     ll R = D-Q*d;
//     ll sum_mton = D*P;
//     // 1 2 3 4
//     // 3 5 7 9
//     return money;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    ll D, d, P, Q;
    FOR(i, 0, T){
        cin >> D >> d >> P >> Q;
        cout << bellaCiao(D, d, P, Q) << endl;
    }

    return 0;
}