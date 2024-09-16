#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;


    }
};
// sys unique memory allocation varies 2^32 to 2^64;
// in 32 bit sys int take 4byte and ptr takes 4
// in 64 bit sys int = 4, ptr=8;
int main(){
    vector<int>arr={2,5,8,7};
    Node* y=new Node(arr[0],nullptr);
    cout<<y->data;
}