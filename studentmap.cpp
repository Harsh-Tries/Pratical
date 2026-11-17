#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int , int> m;
    
    //roll no as key and marks as their value
    m[100]=80;
    m[101]=81;
    m[102]=83;
    m[104]=84;
    m[105]=85;

    //insert a new record
    //object creation is important over here
    m.insert({103,86});
    
    //update a record;
    m[105]=88;

    //searching for roll no;
    int roll = 103;

    if(m.find(roll)!=m.end()){
        cout<<"student marks found :"<<m[roll]<<endl;
    }
    else{
        cout << "students marks not found" << endl;
    }
    
    //erasing a roll no with marks
    m.erase(104);

    //displaying all with help of iterator 
    for(auto val : m){
        cout <<"roll no "<<val.first<<" marks "<<val.second<<endl;
    }
    return 0;
}

