#include <stdio.h>  
#include <stdlib.h>  
  
struct node  
{  
    char data;  
    struct node *right_child;  
    struct node *left_child;  
};  
  
struct node* new_node(char data)  
{  
    struct node *temp;  
    temp = malloc(sizeof(struct node));  
    temp -> data = data;  
    temp -> left_child = NULL;  
    temp -> right_child = NULL;  
  
    return(temp);   
}  
  
void preorder(struct node *root)  
{  
    if(root != NULL)   
    {  
        printf(" %c ", root -> data);   
        preorder(root -> left_child);  
        preorder(root -> right_child);  
    }  
}  
  
void postorder(struct node *root)  
{  
    if(root != NULL)  
    {  
        postorder(root -> left_child);   
        postorder(root -> right_child);   
        printf(" %c ", root -> data);   
    }  
}  
  
void inorder(struct node *root)  
{  
    if(root != NULL)   
    {  
        inorder(root -> left_child);   
        printf(" %c ", root -> data);   
        inorder(root -> right_child);  
    }  
}  
  
int main()  
{  
    struct node *root;   
    root = new_node('D');   
  
    root -> left_child = new_node('A');  
    root -> right_child = new_node('F');   
    root -> left_child -> left_child = new_node('E');   
    root -> left_child -> right_child = new_node('B');  
  
    printf("Preorder:\n");  
    preorder(root);  
    printf("\n");  
    printf("Postorder:\n");  
    postorder(root);  
    printf("\n");  
    printf("Inorder:\n");  
    inorder(root);  
    printf("\n");  
  
    return 0;  
}  
