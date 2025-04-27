#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, d, m;
    char sai = 'Y';
    cin >> t >> d >> m;
    vector<int> ref(m);
    for(int i=0; i<m; i++){
        cin >> ref[i];

    }
    if(t <= d and d > m){
        for(int i=0; i<m-1; i++){
            if(ref[i+1]-ref[i] >= t or ref[0] >= t or d - ref[m-1] >= t){
            sai = 'Y';
           
            }
            else if(ref[i+1]-ref[i] < t){
                sai = 'N';

            }
            else{
            sai = 'N';
            }
        }
    }
    else if(m > d){
        sai = 'N';
    }
    else{
        sai = 'N';
    }
    cout << sai;
}