#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int q, i;
 
    cin >> q;
 
    for(i = 0; i < q; i++){
 
        long long n, j, k, l = 0;
 
        cin >> n >> k;
 
        string v;
 
        vector<int>zero(n, 0);
 
        cin >> v;
 
        for(j = 0; j < n; j++){
 
            if(v[j] == '0'){
 
                zero[j - min(k, j - l)] = 1;
 
                k = k - min(k, j - l);
 
                l++;
            }
        }
        for(j = 0; j < n; j++){
 
            if(zero[j] == 1){
 
                cout << '0';
            }
            else{
 
                cout << '1';
            }
        }
        cout << '\n';
    }
    return 0;
}