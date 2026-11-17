#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data =val;
        next = NULL;
    }
};
class Circularlist{
    Node*head ;
    Node*tail;
    public:
    Circularlist(){
        head = tail = nullptr;
    }
    void insertHead(int val){
        Node* newnode= new Node(val);
        if(head==nullptr){
            head=tail=newnode;
            tail->next= head;
        }
        else{
            newnode->next = head ;
            head = newnode;
            tail->next=head;
        }

    }
    void insertTail(int val){
         Node* newnode= new Node(val);
        if(head==nullptr){
            head=tail=newnode;
            tail->next= head;
        }
        else{
            newnode->next = head ;
            tail->next= newnode;
            tail = newnode;
            tail->next=head;
        }
    }
    void deletehead(){
        if(head==nullptr){
            return ;
        }
        else if(head==tail){
            head = tail = nullptr;
            delete head;
        }
        else{
            Node* temp =head;
            head = head->next;
            tail->next = head;
            temp->next = nullptr;
            delete temp;
        }
    }
    void deleteTail(){
          if(head==nullptr){
            return ;
        }
        else if(head==tail){
            Node* temp = head;
            head = tail = nullptr;
            delete temp;
        }
        else{
            Node* temp =tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = nullptr;
            delete temp;
        }
    }
    void print(){
        if(head == nullptr) return;
        cout << head->data<<"->";
        Node*temp = head->next;
        while(temp != head){
            cout << temp ->data<<"->";
            temp = temp ->next;
        }
        cout<<temp->data<<endl;
    }
};

int main(){
    Circularlist cll;
    cll.insertHead(1);
    cll.insertHead(2);
    cll.insertHead(3);
    cll.deletehead();
    cll.print();
    cll.deleteTail();
    cll.print();
    return 0;

};