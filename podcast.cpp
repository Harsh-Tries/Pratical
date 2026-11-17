#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    string title;
    int duration;
    Node* next;
    Node(string t, int d){
        title = t;
        duration = d;
        next = nullptr;
    }
};
class circularplaylist{
Node* head;
Node* tail;
Node* current;
circularplaylist(){
   current= head= tail = nullptr;
}
void addPodcast(string title, int duration){
    Node* newnode = new Node(title, duration);
    
}
}