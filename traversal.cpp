#include<bits\stdc++.h>
using namespace std;
// can use struct or class here 
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int LenghtofLL(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=nullptr){
        // cout<<temp->data<<" ";/// dont need to print the data;
        temp=temp->next;
        count++;
    }
    return count;
}
int checkIfPresent(Node* &head, int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int>arr={28,5,8,7};
    Node* head=convertArr2LL(arr);
    cout<<head->data<<endl;
    Node* temp=head;
    // while temp is valid also mean while temp!=nullptr
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<" ";
    cout<<LenghtofLL(head);
}