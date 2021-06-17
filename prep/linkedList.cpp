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
    for(int i=1; i<pos-1; i++){
        trav = trav->next;
    }
    newNode->next = trav->next;
    trav->next = newNode;
    return head;
}

Node* deleteNthElementFromTheBegginigOfTheLL (int n, Node* head){
    if(n == 1) return deleteElementFromBegginingOfTheLL(head);
    Node* trav = head;
    for(int i = 1; i < n-1; i++) trav = trav->next;
    Node* temp = trav->next->next;
    free (trav->next);
    trav->next = temp;
    return head;     
}

int count (Node* head){
    int count =0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    // cout << count << endl;
    return count;
}

Node* deleteKthElementFromTheEndOfTheLL (int k, Node* head){
    int  n = count(head);
    deleteNthElementFromTheBegginigOfTheLL(n-k+1, head);
    return head;     
}

Node* deleteKthElementFromTheEndOfTheLL2 (int k, Node* head){
    Node* trav = head;
    Node* trav2 = head;
    for(int i=1; i<=k; i++) trav = trav->next;
    cout << trav->data;
    if (trav->next == NULL) return deleteElementFromBegginingOfTheLL(head);
    while(trav != NULL){
        trav = trav->next;
        trav2 = trav2->next;
    }
    cout<<trav2->data;
    Node* temp = trav2->next->next;
    free (trav2->next);
    trav2->next = temp;
    // cout << trav2->data << endl;
    return head;
}

// if (head == NULL || head->next == NULL) return head;
//hopsticks

int main(){
    Node* ll1 = NULL;
    ll1 = insertElementToTheEndOfTheLL(1, ll1);
    displayLL(ll1);
    ll1 = insertElementToTheEndOfTheLL(3, ll1);
    displayLL(ll1);
    ll1 = insertElementToTheEndOfTheLL(5, ll1);
    displayLL(ll1);
    ll1 = insertElementToTheEndOfTheLL(7, ll1);
    displayLL(ll1);
    ll1 = insertElementToTheEndOfTheLL(2, ll1);
    displayLL(ll1);
    ll1 = insertElementToTheBegginingOfTheLL(10, ll1);
    displayLL(ll1);
    ll1 = deleteElementFromBegginingOfTheLL(ll1);
    displayLL(ll1);
    ll1 = deleteElementFromTheEndOfTheLL(ll1);
    displayLL(ll1);
    // cout << count(ll1)<<endl;
    ll1 = inserElementToLLInNthPosition(9, ll1, 3);
    displayLL(ll1);
    ll1= deleteKthElementFromTheEndOfTheLL (2, ll1);
    displayLL(ll1);
    ll1 = deleteKthElementFromTheEndOfTheLL2 (2, ll1);
    displayLL(ll1);
    return 0;
}
