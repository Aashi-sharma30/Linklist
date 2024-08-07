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
        void insertAtHead(int val){
            Node*temp=new Node( val);
            if(size==0){
                head=tail=temp;
            }
            else{
                temp->next=head;
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
                size++;
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
    LinkedList list; 
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
    cout<<list.size<<endl;
    cout<<list.getAtIndex(2);
    

}
        


