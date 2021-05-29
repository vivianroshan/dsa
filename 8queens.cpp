#include<iostream>
#include<vector>

#define vi vector<int>
#define pb vector::push_back
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORd(i, a, b) for(int i = a; i >= b; i--)
#define pb vector::push_back
#define PB vector::pop_back

using namespace std;
/*
  ------------------  
  |     |  0 1 2 3
  +-----+-----------
  |  0  | 0 1 0 0
  |  1  | 0 0 0 1
  |  2  | 1 0 0 0
  |  3  | 0 0 1 0
*/
bool isValid(vi &board, int size){
    if (size == 0 || size == 1){
        // cout << "01"<< endl;
        return true;
    }
    FOR(i, 0, size-2){
        if (board.back() == board[i]){
            // cout << "=="  << endl;
            return false;
        }
        if (board.back() == board[i] - (size - i - 1)){
            // cout << "<<" << endl;
            return false;
        }
        if (board.back() == board[i] + size - i - 1){
            // cout << ">>" << endl;
            return false;
        }
    }
    // cout << "--" << endl;
    return true;
}

void eightQueens(vector<vi> &queens, int boardSize){
    vi qns;                 //{}
    qns.pb(0);              //{0}
    if (boardSize == 1){
        queens.pb(qns);
        return;
    }
    if (boardSize == 0){
        return;
    }

    while(1){
        while(!isValid(qns, qns.size())){
            qns.back()++;
            while(qns.back()>=boardSize){
                qns.PB();
                qns.back()++;
                if(qns.size()==1 && qns[0]==boardSize)return;
            }
            // for(int a : qns){
            //     cout << a << " ";
            // }
            // cout << endl;
        }
        if(qns.size() == boardSize){
            if(qns.back()<boardSize)queens.pb(qns);
            qns.back()++;
            continue;
        }
        qns.pb(0);
    }
}

int main(){
    vector<vi> posOfQueens; 
    int boardSize=8;

    cin >> boardSize;

    eightQueens(posOfQueens, boardSize);

    for(vi x : posOfQueens){        
        for(int y:x){
            printf("%d ",y+1);
        }
        printf("\n");
    }
    printf("%d",posOfQueens.size());
    return 0;
}

