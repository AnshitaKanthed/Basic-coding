// * * * * * *
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
#include <bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int N = 5;
    pattern5(N);
    return 0;
}