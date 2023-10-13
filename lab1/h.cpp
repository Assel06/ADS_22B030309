#include<iostream>

using namespace std;

 int main(){
    int n;
    cin >> n;
    int cnt = 0;
if(n == 1){
    cout << "NO";
}
else{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
           cnt++;
        }
    }
    if(cnt == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
    return 0;
 }

