// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:

//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// Node* reverseLinkedlist(Node* head){
//     Node* temp = head;

//     stack<int>st;

//     while(temp){
//         st.push(temp->data);
//         temp = temp->next;
//     }

//     temp = head;

//     while(temp){
//         temp->data = st.top();
//         st.pop();
//         temp = temp->next;
//     }
//     return head;
// }

// void printLinkedlist(Node* head){
//     Node* temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;

// }

// int main(){
//     Node* head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);

//     cout<<"original linked list:"<<endl;;
//     printLinkedlist(head);

//     head = reverseLinkedlist(head);

//     cout<<"reversed linked list:"<<endl;
//     printLinkedlist(head);
// }

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverseLinkedlist(Node* head){
    Node* temp = head;
    Node* prev = NULL;

    while(temp){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    
    return prev;
}

void printLinkedlist(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<"original linked list:"<<endl;;
    printLinkedlist(head);

    head = reverseLinkedlist(head);

    cout<<"reversed linked list:"<<endl;
    printLinkedlist(head);
}