// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteSecondLastNode(Node** head) {
    //Type your code here
    
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        insertNode(&head, value);
    }

    cout << "Original Linked List: ";
    displayLinkedList(head);

    deleteSecondLastNode(&head);

    cout << "Updated Linked List: ";
    displayLinkedList(head);

    deleteLinkedList(head);

    return 0;
}

// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& header, int newData) {
    Node* newNode=new Node();
    newNode->data=newData;
    newNode->next=header;
    header=newNode;
    //Type your code here
    
}

void displayList(const Node* header) {
    //Type your code here
    const Node* temp=header;
    while(temp->next!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main() {
    Node* header = new Node;
    header->next = nullptr;

    int newData;

    while (true) {
        std::cin >> newData;

        if (newData == -1) {
            break;
        }

        insertAtBeginning(header, newData);
    }

    displayList(header);

    return 0;
}