#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<pair<string , int>> q;
    int price= 400;
    q.push({"Rahul",2});
    q.push({"Harsh",1});
    q.push({"Rohan",3});
    q.push({"Amit",4});

    cout << "serving customers : \n";
    if(!q.empty()){
        string name = q.front().first;
        int tickets = q.front().second;

        cout<<"name: "<<name << endl;
        cout <<"tickets : "<< tickets <<endl;
        cout<<"total amount is Rs :" <<tickets * price <<endl;

        q.pop();
    }
cout << " Waiting customers : \n";
queue<pair<string , int>> temp = q;
while(!temp.empty()){
    cout<<temp.front().first<<" "<< temp.front().second<<" "<<endl;
    temp.pop();
}
cout << " queue size : " << q.size()<<endl;
return 0;
}
