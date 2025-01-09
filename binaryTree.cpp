#include <iostream>

using namespace std;

struct Node{
    string label;

    Node *left,*right,*parent;

};

Node *root,*newNode, *del;

void createNewTree(char label){
    root = new Node();
    root->label = label;
    root->left = NULL;
    root->right = NULL;
    root->parent = NULL;

}

Node *insertLeft(char label, Node *node){
    newNode = new Node();
    newNode->label = label;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = node;
    node->left = newNode;
    return newNode;
}

Node *insertRight(char label, Node *node){
    newNode = new Node();
    newNode->label = label;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = node;
    node->right = newNode;
    return newNode;
}

void emptyTree(){
    if(root!=NULL){
        cout<<"ada tree "<<endl;
    }else{
        cout<<"belum ada tree/node yang dibuat"<<endl;
    }
}

void update(char label,Node *node){
    node->label = label;
}

void retrive(Node *node){
    cout<<"node yang anda tunjuk memiliki label "<<node->label<<endl;
}

void find(Node *node){
    if(node == node->parent->left){
        cout<<"node parent nya = "<<node->parent->label<<" node anak kirinya "<<node->left->label
        <<" node anak kanannya "<<node->right->label<<endl<<"saudara nya = "<<node->parent->right->label;
    }else{
        cout<<"saudara nya = "<<node->parent->left->label;

    }

}

//transversal
void preOrder(Node *node = root){
    if(node != NULL){
        cout<< node->label<<", ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void postOrder(Node *node = root){
    if(node != NULL){
        postOrder(node->left);
        postOrder(node->right);
        cout<< node->label<<", ";
    }
}
void deleteTree(Node *node){    
    if(node != NULL){
        postOrder(node->left);
        postOrder(node->right);
        delete node;
    }
}

int main(){
    system("cls");
    createNewTree('A');  

    Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;

    nodeB = insertLeft('B',root);
    nodeC = insertRight('C',root);
    nodeD = insertLeft('D',nodeB);
    nodeE = insertRight('O',nodeB);

    preOrder();


    return 0;
}