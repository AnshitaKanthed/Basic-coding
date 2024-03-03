// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

#include <bits/stdc++.h>
using namespace std;

void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
}
int main(){
    int N = 5;
    pattern6(N);
    return 0;
}