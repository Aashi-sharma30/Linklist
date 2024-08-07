#include<iostream>
using namespace std;
class Node{    // user define data type
public:
      int val;
      Node*next;
      Node*prev;
      Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
      }
};
class DLL{
    public:
           Node*head;
           Node*tail;
           int size;
            DLL(){
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
                temp->prev=tail;//extra
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
        void insertAtHead(int val){
            Node*temp=new Node( val);
            if(size==0){
                head=tail=temp;
            }
            else{
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
            size++;
        }
        void insertAtIndex(int idx, int val){
            if(idx<0 || idx>size) cout<<"invalid index" <<endl;
            else if(idx=0)insertAtHead(val);
            else if(idx==size)insertAtEnd(val);
            else{
                Node*t=new Node(val);
                Node*temp=head;
                for(int i=1;i<=idx-1;i++){
                    temp=temp->next;
                }
                t->next=temp->next;
                temp->next=t;
                t->prev=temp;
                t->next->prev=t;
                size++;
            }
        }
    void deleteAtHead(){
    if(size==0){
        cout<<"list is empty";
    }
    else{
        head=head->next; 
    if(head!=NULL) head->prev=NULL;
    if(head==NULL) tail=NULL;
    size--;
    }
}
void deleteAtTail(){
    if(size==0){
        cout<<"list is empty";
    }
    else if(size==1){
        void deleteAtHead();
        return;
    }
    else{
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;

    size--;
    }
}
void deleteAtIndex(int idx){
    if(size<0 || idx >=size){
        cout<<"invalid index";
    }
else if(idx==0) {
deleteAtHead();
return;
}
else{
     Node*temp=head;
    for(int i=1;i<=idx-1;i++){
    temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;//extra
    size--;
}

    
}
        void getAtIndex(int idx){
            if(idx<0 || idx >=size){
                cout<<"invalid index";
            }
            else if(idx==0){
                cout<<head->val;
            }
            else if(idx==size-1){
                cout<<tail->val;
            }
            else{
                Node*temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                cout<<temp->val;
            }
         }
         
        
};
int main(){
    DLL list; 
    list.insertAtEnd(20);
    list.display();
    list.insertAtEnd(10);
    list.insertAtEnd(30);
    list.insertAtEnd(30);
    list.display();
    cout<<list.size<<endl;
    list.insertAtHead(80);
    list.display();
    list.insertAtIndex(3,70);
    list.display();
   // cout<<list.size<<endl;
   // cout<<list.getAtIndex(2);
   list.deleteAtIndex(2);
   list.display();
    

}
        


