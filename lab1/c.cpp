#include<iostream>

using namespace std;

string toNormal(string s){
    for(int i = 0; i < s.size(); i++){
    if(s[i] == '#'){
        for(int j = i - 1; j >= 0; j--){
            if(s[j] >= 'a' and s[j] <= 'z' ){
                s[j] = ' ';
                break;
            }
        }
        s[i] = ' ';
    }
}
return s;
}

string Without_space(string s){
    string t;
for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' and s[i] <= 'z'){
        t += s[i];
    }
}
return t;

}
int main(){

string s, t;

cin >> s >> t;


string s1 = Without_space( toNormal(s));
string t1 = Without_space( toNormal(t));
if ( s1 == t1 ){
    cout << "Yes";
}
else{
    cout << "No";
}
return 0;
}