#include <iostream>

using namespace std;

const int MAX = 10;

bool eh_simetrica(int m[][MAX], int n){
    int p, q, r;
    int verdadeiro = 0, falso = 0;
    for(p = 0; p < n; p++){
        for(q = 0; q < n; q++){
            if(m[p][q] == m[q][p]){
                verdadeiro = 1;
            }
            else{
                falso = 1;
                break;
            }
        }
    }
    if(verdadeiro == 1 && falso == 0){
        return true;
    }
    else if(verdadeiro == 0 && falso == 1){
        return false;
    }
    else{
        return false;
    }
    
}


int main()
{
    int mat[MAX][MAX];
    int nlc, i, j, cont = 0;
    
    cin >> nlc;
    
    for(i = 0; i < nlc; i++){
        for(j = 0; j < nlc; j++){
            cin >> mat[i][j];
        }
    }
    
    if(eh_simetrica(mat, nlc) == true){
        cout << "A matriz e simetrica" << endl;
    }
    
    else{
        cout << "A matriz nao e simetrica" << endl;
    }
    
    return 0;
}