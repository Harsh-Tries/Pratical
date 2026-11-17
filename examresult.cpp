#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m ;
    set<int> s;

    m[100]=80;
    m[101]=81;
    m[102]=82;
    m[103]=83;
    m[104]=84;
    m[105]=85;

    for(auto val :m){
        s.insert(val.second);
    }

    cout << "Distinct marks are : \n";
    for(auto val :s){
        cout << val << " ";
    }

    //update marks
    m[103]=85;

    //remoce marks
    m.erase(104);
    
    //display student record
    cout<<"final exam record\n";
    for (auto val : m){
        cout<<"roll no " << val.first << "marks "<<val.second <<endl;
    }
return 0;
    
}