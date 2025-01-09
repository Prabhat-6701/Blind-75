//brute

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

// bool hasCycle(Node* head){
//     Node* temp = head;

//     unordered_map<Node*, int>mpp;

//     while(temp){
//         if(mpp.find(temp) != mpp.end()){
//             return true;
//         }
//         mpp[temp] = 1;
//         temp = temp->next;
//     }
//     return false;
// }

// int main(){
//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//      // Create a loop
//     fifth->next = third; 

//     if(hasCycle(head)){
//         cout<<"cycle is present"<<endl;
//     }
//     else{
//         cout<<"cycle is not present"<<endl;
//     }
//     delete head;
//     delete second;
//     delete third;
//     delete fourth;
//     delete fifth;

    
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

bool hasCycle(Node* head){
    Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    if(hasCycle(head)){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    
}