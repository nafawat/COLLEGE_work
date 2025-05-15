#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right; 
};

struct node * createNode(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
}

void preorder(struct node * root){
    if(root!=NULL){
        printf("%d ", root -> data);
        preorder(root -> left);
        preorder(root -> right);
    
    }
}

void postorder(struct node* root){
    if(root != NULL){
        preorder( root -> left);
        preorder( root -> right);
        printf("%d ", root -> data);
    }
}

void inorder(struct node * root){
    if(root != NULL){
        inorder( root -> left);
        printf("%d ", root -> data);
        inorder(root -> right);
    }
}

int isBST(struct node* root){
    static struct node *prev = NULL;
    if(root != NULL){
        if(!isBST(root -> left)){
            return 0;
        }
        if(prev != NULL && root -> data <= prev -> data){
            return 0;
        }
        prev = root;
        return isBST(root -> right);
    } 
    else { 
        return 1;
    }
}

int main(){
   struct node *p = createNode(4);
   struct node *p1 = createNode(1);
   struct node *p2 = createNode(6);
   struct node *p3 = createNode(5);
   struct node *p4 = createNode(2);

   p -> left = p1;
   p -> right = p2;
   p1 -> left = p3;
   p1 -> right = p4;

   preorder (p);
   printf("\n");
   postorder(p);
   printf("\n");
   inorder(p);
   printf("\n");
   isBST(p);

   return 0;


}
