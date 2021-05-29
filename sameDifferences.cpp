//sameDifferences

//sameDifferences

#include<iostream>
#include<vector>

#define vi vector<int>
#define pb vector::push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORd(i, a, b) for(int i = a; i >= b; i--)
#define pb vector::push_back
#define PB vector::pop_back

typedef long long ll;

using namespace std;

int sameDifferences(vi vec){
    int count=0;
    FOR(i, 0, vec.size() - 1){
        FOR(j, i + 1, vec.size() - 1){
            if(vec[j] - vec[i] == j - i) count++;
        }
    }
    // cout << "\t";
    cout << count << "\n";
    return count;
}

int main(){
  int n, x, y;
  
  cin >> n;
  FOR(i ,0 ,n-1){
    cin  >> x;
    vi vec;
    FOR(i, 0, x-1){
        cin>>y;
        vec.pb(y);
    }
    sameDifferences(vec);
  }
  return 0;
}