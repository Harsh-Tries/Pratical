#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int duration;
    string title;
    Node* next;
    Node(string t , int d){
        duration = d;
        title = t;
        next = nullptr;
    }
};
class circularplaylist{
    
    Node* head;
    Node* tail;
    public:
    circularplaylist(){
        head = nullptr;
        tail = nullptr;
    }
    void addsong(string title , int duration){
        Node* newnode = new Node(title, duration);
        if(head==nullptr){
            head = tail = newnode;
            tail->next = head;
        }
        else{
            tail->next = newnode;
            tail = newnode;
            tail->next =head;
        }
        cout << "song added succesfully\n";
    };
void insertAfter(string target , string title, int duration){
        if(head == nullptr){
            cout<<"empty playlist";
            return;
        }
            Node* temp = head;
    while(true){
        if(temp->title == target){
            Node* newnode = new Node(title,duration);
            newnode -> next = temp->next;
            temp->next = newnode;
            if(temp == tail){
                tail = newnode;
            }
            cout<<"song inserted succesfully\n";
            return;
        }
        temp = temp ->next;
        if(temp == head){
            break;
        }
    }
    cout<<"song not found";
}

void search(string title){

    if(head == nullptr){
        cout << "Playlist is empty\n";
        return;
    }

    Node* temp = head;

    while(true){

        if(temp->title == title){
            cout << "Song found\n";
            cout << "Title: " << temp->title << endl;
            cout << "Duration: " << temp->duration << endl;
            return;
        }

        temp = temp->next;

        if(temp == head){
            break;
        }
    }

    cout << "Song not found\n";
}
void display(){
    if(head==nullptr){
        cout << " playlist is empty";
        return;
    }
    Node* temp = head;
    while(true){
        cout<<temp->title<<" "
            <<temp->duration << "seconds\n";
            temp = temp->next;
            if(temp==head){
                break;
            }
    }
};

    
};
int main(){
    circularplaylist cll;
    cll.addsong("abc",204);
    cll.addsong("bcd",150);
    cll.addsong("xyz",70);
    cout << "playlist\n";
    cll.display();
    cout<<"Inserting a new song\n";
    cll.insertAfter("abc","pqr",190);
    cll.display();
    cll.search("abc");
    
}