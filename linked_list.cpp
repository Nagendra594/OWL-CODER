#include <bits/stdc++.h>
using namespace std;
class linked_list{
public:
    struct Node{
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=NULL;
        }
    };
    Node *head=NULL;
    Node *tail=NULL;
    void insert(int val){
        Node *newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=tail->next;
    }
    void print(){
        Node *temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insert_at_begin(int val){
        Node *newnode=new Node(val);
        newnode->next=head;
        head=newnode;
    }
    void insert_at_end(int val){
        Node *newnode=new Node(val);
        tail->next=newnode;
        tail=tail->next;
    }
    void insert_at_position(int pos,int val){
        Node *newnode=new Node(val);
        Node *temp=head;
        while (pos){
            temp=temp->next;
            pos--;
        }
        Node *parent=temp->next;
        temp->next=newnode;
        newnode->next=parent;

    }
    void del_at_pos(int pos){
        Node *temp=head;
        while(pos>1){
            temp=temp->next;
            pos--;
        }
        Node *temp1=temp->next;
        temp->next=temp1->next;

    }
    
        
};
int main(){
    linked_list l;
    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);
    l.insert_at_begin(0);
    l.insert_at_end(100);
    l.insert_at_end(60);
    l.insert_at_position(4,50);
    l.del_at_pos(1);
    l.print();
}
