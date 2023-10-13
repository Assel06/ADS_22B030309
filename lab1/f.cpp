#include <iostream>
#include <vector>
using namespace std;

int main(){

int n;

cin >> n;

vector<int> prime;
prime.push_back(2);
int cnt = 0;
for(int i = 3; i < 8000; i++){
    for(int j = 2; j < i; j++){
        if(i % j == 0){
           cnt++;
        }
    }
    if(cnt == 0){
        prime.push_back(i);
    }
    cnt = 0;
}



cout << prime[n-1];


    return 0;
}