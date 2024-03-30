#include<iostream>
using namespace std;

class Node{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};
Node *root = NULL;

class Queue {
    public:
        Node *add;
        Queue *next;
};
Queue *front = NULL, *rear =NULL;

void enqueue(Node *x){
    Queue *temp = new Queue;

    if(temp == NULL) cout<< "Queue is full" <<endl;
    else{
            temp->add = x;
            temp->next = NULL;
        if(front == NULL){
            front = temp;
            rear = temp;
        }else{
            rear->next = temp;
            rear = temp;
        }
    }
}

Node* dequeue(){
    Queue *temp = new Queue;
    temp = front;
    Node *ptr = new Node;
    if(front == NULL) cout << "List is Empty" <<endl;
    else{
        ptr = temp->add;
        front = front->next;
        delete temp;
    }
return ptr;
}

bool isEmpty(){
    if(front == NULL)
        return true;
    else return false;
}

void CreateTree(){
    Node *p,*temp;
    int x;

    cout<< "Enter root value: ";    cin>> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue (root);

    while(!isEmpty()){
        p = dequeue();
        cout<< "Enter left-child of "<<p->data <<" : "; cin>> x;
        if(x != -1){
            temp = new Node;
            temp->data = x;
            temp->lchild = temp->rchild = NULL;
            p->lchild = temp;
            enqueue(temp);
        }
        cout<< "Enter right-child of "<<p->data <<" : "; cin>> x;
        if(x != -1){
            temp = new Node;
            temp->data = x;
            temp->lchild = temp->rchild = NULL;
            p->rchild = temp;
            enqueue(temp);
        }
    }
}

void preorder(Node *temp){
    if(temp != NULL){
        cout<< temp->data << " ";
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

int Sum(Node *temp){
    static int sum = 0;
    if(temp != NULL){
        if(temp->lchild == NULL and temp->rchild == NULL)
            sum+=(temp->data);
        Sum(temp->lchild);
        Sum(temp->rchild);
    }
return sum;
}

int main(){
    CreateTree();
    cout<< "Preorder: ";
    preorder(root);
    cout<< endl;
    cout<< Sum(root) <<endl;

    return 0;
}


