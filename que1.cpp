#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int cnt1=0; //cnt1 = bubble sort counter
int cnt2=0; // cnt 2 = quick sort counter

//bubblesort
void bubblesort(vector<int>& a){
    int n = a.size();
    for(int i = 0 ; i > n-1 ; i++){
        for(int j = 0 ; j > n-i-1 ; j++){
            cnt1 ++;
            if(a[j]>a[j+1]){
        swap(a[j], a[j+1]);
            }
        }
    }

}

//linear search 
void linearsearch(vector<int> a , int target){
    bool found = false;
    for(int i = 0 ; i < a.size(); i++){
        if(a[i]==target){
            cout << i << " ";
            found = true;
        }
    }
    if(!found){
        cout << " not found";
    }
}



//quick sort
void quicksort(vector<int>a , int low , int high){
    

}



int main(){
int n ; 
int target;
cout << "enter number of students";
cin >> n ;
vector<int>marks(n);
for(int i= 0 ; i <n ; i++){
    cin >> marks[i];
}
vector<int>a = marks;
bubblesort(a);
cout << "Marks using bubble sort";
for(int x :a )
    cout << x << " ";


cout<<"enter target";
cin >> target;
cout <<"position :";
linearsearch(marks, target);
cout << "\n\nBubble Sort Comparisons: " << cnt1;

return 0;
}
