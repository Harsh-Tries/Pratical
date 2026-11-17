#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> cart ={"rice","oil","wheat","biscuit","tea","coffe"};

    //displaying the first element
    cout<<"first item : "<<cart.front()<<endl;
    
    //displaying the back element
    cout<<"last item : " << cart.back()<<endl;

    //displaying item at index 2
    cout << "item at index 2 :"<<cart.at(2)<<endl;

    //insertion of item
    cart.insert(cart.begin() + 2 , "butter");

    //modify an existing item
    cart.at(1)="bread";

    //delete item by position
    cart.erase(cart.begin()+3);

    //displaying cart
    cout<<"shopping cart is : "<< endl;

    for(int i = 0 ; i < cart.size();i++){
        cout<<cart[i]<<endl;

    }



return 0 ;
}


