#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node*createNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void displayLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertElementToTheBegginingOfTheLL(int val, Node* head){
    Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

Node* insertElementToTheEndOfTheLL(int val, Node* head){
    if (head == NULL){
        return createNode(val);
    }
    Node* temp=head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = createNode(val);
    return head;
}

Node* deleteElementFromBegginingOfTheLL(Node* head){
    Node* temp = head->next;
    free(head);
    return temp;
}

Node* deleteElementFromTheEndOfTheLL(Node* head){
    if (head->next == NULL) return deleteElementFromBegginingOfTheLL(head);
    Node* trav = head;
    while (trav->next->next != NULL){
        trav = trav->next;
    }
    free(trav->next);
    trav->next = NULL;
    return head;
}

Node* inserElementToLLInNthPosition (int val, Node* head, int pos){
    if (pos==1){
        return insertElementToTheBegginingOfTheLL(val, head);
    }
    Node* trav = head;
    Node* newNode = createNode(val);
    for(int i=0; i<pos-2; pos++){
        trav = trav->next;
    }
    newNode->next = trav->next;
    trav->next = newNode;
    return head;
}

int main(){

    Node* ll1 = NULL;
    ll1 = insertElementToTheEndOfTheLL(1, ll1);
    ll1 = insertElementToTheEndOfTheLL(3, ll1);
    ll1 = insertElementToTheEndOfTheLL(5, ll1);
    ll1 = insertElementToTheEndOfTheLL(7, ll1);
    ll1 = insertElementToTheEndOfTheLL(2, ll1);
    ll1 = insertElementToTheBegginingOfTheLL(10, ll1);
    ll1 = deleteElementFromBegginingOfTheLL(ll1);
    ll1 = deleteElementFromTheEndOfTheLL(ll1);
    ll1 = inserElementToLLInNthPosition(9, ll1, 2);
    displayLL(ll1);
    return 0;
}