#include<iostream>
using namespace std;
class Node{    // user define data type
public:
      int val;
      Node*next;
      Node(int val){
        this->val=val;
        this->next=NULL;
      }
};
class LinkedList{
    public:
           Node*head;
           Node*tail;
           int size;
           LinkedList(){
                 head=tail=NULL;
                 size=0;
        }
        void insertAtEnd(int val){
            Node*temp=new Node(val);
            if(size==0){
                head=tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            size++;
        }
        void display(){
            Node*temp=head;
            while(temp!=NULL)
            {
                cout<<temp->val<<" ";
                temp=temp->next;

            }
            cout<<endl;
        }

void deleteAtHead(){
    if(size==0){
        cout<<"list is empty";
    }
    else{
        head=head->next;
    }
}
void deleteAtIndex(int idx){
    if(size<0 || idx >=size){
        cout<<"invalid index";
    }
else if(idx==0) return deleteAtHead();
else{
     Node*temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                temp->next=temp->next->next;
}

    
}

};
int main(){
    LinkedList list; 
    list.insertAtEnd(20);
    list.display();
    list.insertAtEnd(10);
    list.insertAtEnd(30);
    list.insertAtEnd(30);
    list.display();
    cout<<list.size<<endl;
    list.deleteAtHead();
    list.display();
    cout<<list.size;

}