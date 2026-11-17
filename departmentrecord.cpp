#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    m["computer"]=320;
    m["electronics"]=320;
    m["information technology"]=220;
    m["aids"]=80;
    m["electronics and computer"]=80;

    m["mechanical"]=100;

    m["computer"] = 200;

    m.erase("electronics");

    for(auto val :m){
        cout<<"department name :" << val.first << "  no of students : " << val.second << endl;
    }
    return 0;

   
}