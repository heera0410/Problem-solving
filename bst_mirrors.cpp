#include<bits/stdc++.h> 
using namespace std;
  

struct Node  
{ 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
  

struct Node* newNode(int data) 
{ 
    struct Node* node = (struct Node*) 
                         malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
      
    return node; 
} 
  
  struct Node *insert(struct Node *node, int key) {
  
  if (node == NULL) 
      return newNode(key);

 
  if (key < node->data)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
  

void mirror(struct Node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
      
        mirror(node->left); 
        mirror(node->right); 
      
       
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}  
  

void inorder(struct Node* node)  
{ 
    if (node == NULL)  
        {
        cout<<"\n";
        return; 
        }
      
    inorder(node->left); 
    cout << node->data << " "; 
    inorder(node->right); 
}  
  
  

int main() 
{ 
   struct Node* node=NULL;
   int ele,N;
   cout<<"enter the no. of nodes:";
   cin>>N;
   for(int i=0;i<N;i++)
   {
                   cout<<"enter the element to be inserted:";
                   cin>>ele;
                   node=insert(node,ele);
   }
   cout << "Inorder traversal of the given bst\n"; 
   inorder(node); 
   cout<< "Inorder traversal of mirror tree\n";
   mirror(node); 
   inorder(node);
   return 0;  
} 