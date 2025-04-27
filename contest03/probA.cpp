#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, cont=0;
    cin >> n >> h;
    vector<int> brin(n);
    for(int i=0; i<n; i++){
        cin >> brin[i];

    }
    for(int i=0; i<n; i++){
        if(brin[i] <= h){
            cont++;

        }
    }
    cout << cont;
}