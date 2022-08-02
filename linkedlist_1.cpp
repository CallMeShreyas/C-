#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void traverse(Node* node){
    while(true){
        if(node->next==NULL){
            cout << node->data<<endl;
            break;
        }
        else{
            cout << node->data << endl;
            node = node->next;
        }
    }
}

void append(Node* node, Node* new_node){
    while(true){
        if(node->next == NULL){
            node->next = new_node;
            break;
        }
        else{
            node = node->next;
        }
    }
}

void removenode(Node* head, Node* node){
    Node *temp2 = node->next;
    while(true){
        if(head->next==node){
            head->next = temp2;
            delete node;
            break;
        }
        else if(head->next==NULL){
            cout << "Node Not Found" << endl;
            break;
        }
        else{
            head = head->next;
        }
    }
}

void remove_when_Previous_node_is_given(Node* prev){
    Node *temp = prev->next;
    if (temp == NULL){
        cout << "Last Node" << endl;
    }
    else{
        Node *temp2 = temp->next;
        prev->next = temp2;
        delete temp;
    }
}

void remove_when_Position_is_given(Node* head, int pos){
    int temp = 0;
    Node *temp_node = head;
    while(true){
        if (temp == pos){
            // removenode(head, temp_node);
            Node *t = head->next;
            delete head;
            break;
        }
        else if(temp+1 == pos){
            Node *temp_2 = temp_node->next;
            Node *temp_3 = temp_2->next;
            temp_node->next = temp_3;
            delete temp_2;
            break;
        }
        else{
            temp++;
            temp_node = temp_node->next;
        }
    }
}

int findLength(Node* node){
    int temp = 0;
    while(true){
        if (node->next == NULL){
            temp++;
            break;
        }
        else{
            node = node->next;
            temp++;
        }
    }
    return temp;
}

bool searchElementisPresentOrNot(Node* node, int key){
    while(true){
        if (node->next == NULL){
            if(node->data == key){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(node->data == key){
                return true;
            }
            else{
                node = node->next;
            }
        }
    }
}

int returnNthElement(Node* node, int pos){
    int index = 0;
    while(true){
        if (index == pos){
            return node->data;
        }
        else if (node->next == NULL && index!=pos){
            return -1;
        }
        else{
            index++;
            node = node->next;
        }
    }
}

void convertSinglyLinkedListToCircularLinkedList(Node* node){
    Node *temp = node;
    while(true){
        if (node->next == NULL){
            node->next = temp;
            break;
        }
        else{
            node = node->next;
        }
    }
}

Node* returnMiddle_BruteForce(Node *head){
    Node *temp = head;
    int n = 0;
    while(true){
        if(temp->next==NULL){
            n++;
            break;
        }
        else{
            temp = temp->next;
            n++;
        }
    }
    int half = n / 2;
    temp = head;
    while(true){
        if(half==0){
            break;
        }
        else{
            temp = temp->next;
            half--;
        }
    }
    return temp;
}

Node* returnMiddleNodeOptimized_SlowFastPointers(Node* head){
    Node *fast = head;
    Node *slow = head;
    while(true){
        if( fast->next==NULL || fast==NULL ){
            break;
        }
        else{
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverseLL(Node* head){
    Node *p = NULL, *c = head, *n = head->next;
    while(true){
        if(n==NULL){
            c->next = p;
            return c;
        }
        else{
            c->next = p;
            p = c;
            c = n;
            n = n->next;
        }
    }
}

int main(){
    Node *head = new Node();
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    Node *new_node = new Node();
    Node *n6 = new Node();

    head->data = 10;
    head->next = node1;
    node1->data = 20;
    node1->next = node2;
    node2->data = 30;
    node2->next = node3;
    node3->data = 40;
    node3->next = NULL;
    new_node->data = 50;
    new_node->next = NULL;
    n6->data = 60;
    n6->next = NULL;
    Node *n7 = new Node();
    n7->data = 70;
    n7->next = NULL;

    append(head, new_node);
    append(head, n6);
    append(head, n7);

    traverse(head);
    cout << "--------------" << endl;
    // removenode(head,n6);
    // remove_when_Previous_node_is_given(n6);
    // remove_when_Position_is_given(head, 4);
    // cout << endl << "Updated :" << endl;
    // traverse(head);
    // cout << endl<<"Length of Linked List : " << findLength(head);
    // cout << searchElementisPresentOrNot(head, 4);
    // cout << returnNthElement(head, 3);
    // convertSinglyLinkedListToCircularLinkedList(head);
    // Node* mid = returnMiddle_BruteForce(head);
    // Node *mid = returnMiddleNodeOptimized_SlowFastPointers(head);
    // cout << mid->data;

    Node *last = reverseLL(head);
    traverse(last);

    delete head, node1, node2, node3, new_node, n6;
}