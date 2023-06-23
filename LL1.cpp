// creation and display of linked list using array.
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        next= nullptr;
    }
    
};
Node*head;


  void create(int arr[], int n){
    head = new Node(arr[0]);
    Node*temp=head;
    for(int i=1;i<n;i++){
        Node*curr = new Node(arr[i]);
        temp->next = curr;
        temp = curr;
    }

}
void display() {
    Node*temp =head;
    while(temp->next!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<< temp->data;
}
int main(){
    int Arr[5] = {2, 3,5 ,4,8};
    create(Arr,5);
    display();
}