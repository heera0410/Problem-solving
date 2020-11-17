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
  

void inOrder(struct Node* node)  
{ 
    if (node == NULL)  
        return; 
      
    inOrder(node->left); 
    cout << node->data << " "; 
    inOrder(node->right); 
}  
  
  

int main() 
{ 
    struct Node* node=NULL;
    int ele,ch;
    
    do
    {
        cout<< "\nenter choice:";
        cin>>ch;
   
        switch(ch)
        {
            case 1:cout<<"enter the element to be inserted:";
                   cin>>ele;
                   node=insert(node,ele);
                   break;
            case 2:cout << "Inorder traversal of the tree is" << endl; 
                   inOrder(node); 
                   break;
            case 3: cout<< "create Mirror image of the tree and call inorder traversal"
                    mirror(node); 
                    break;
            default: exit(1);
      
        }
    }while(ch>=1 && ch<=3);
    
    
      
    return 0;  
} 