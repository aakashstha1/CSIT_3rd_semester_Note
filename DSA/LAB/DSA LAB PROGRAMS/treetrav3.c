#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	int info;
	struct treenode *left,*right;
}*rt;
void inorder(treenode *temp) {
   if (temp != NULL) {
      inorder(temp->left);
      printf("%d\t", temp->info);
      inorder(temp->right);
      
   }
}
void preorder(treenode *temp) {
   if (temp != NULL) {
   	printf("%d\t", temp->info);
      preorder(temp->left);
      
      preorder(temp->right);
   }
}
void postorder(treenode *temp) {
   if (temp != NULL) {
      postorder(temp->left);
      postorder(temp->right);
       printf("%d\t", temp->info);
   }
   
}
void insert (int x)
{
	struct treenode *temp,*root;
	root=rt;
	temp=(struct treenode *)malloc(sizeof(struct treenode));
	temp->left=NULL;
	temp->right=NULL;
	temp->info=x;
	if(root==NULL)
	{
		root=temp;
		rt=root;
		return;
	}
	L1:
		{
			if(temp->info>root->info)
			{
				if(root->right==NULL){
					root->right=temp;
				return;
				}
				
		
				else
				{
					root=root->right;
					goto L1;
				}
			}
			else if(root->left==NULL)
			{
				root->left=temp;
				return;
			}
			else
			{
				root=root->left;
				goto L1;
			}
		}
			
		
	 
}
void search()
{
	
	 int no,i;
	 struct treenode *ptr;
	 ptr=rt;
	 printf("\n Enter the element to be searched :");
	 scanf(" %d",&no);
	 while(ptr!=NULL)
	 {
	  if(no>ptr->info)
	     ptr=ptr->right;
	  else if(no<ptr->info)
	     ptr=ptr->left;
	  else
	     break;
	 }
	 if(ptr!=NULL)
	 {
	  printf("\n Element %d which was searched is found and is = %d",no,ptr->info);
	 }
	 else
	 printf("No such element");
}
void deletenode(int key)
{
	struct treenode *current,*prev;
	int found;
	current = rt;
while(current!=NULL)
{
    if(current->info == key)
    {
        found = 1;
        break;
    }
    else
    {
        prev = current;
        if(current->info >= key)
            current = current->left;
        else
            current = current->right;
    }
    
}

if((current->left == NULL) && (current->right == NULL))
	{
	    if(prev->left == current)
	        prev->left = NULL;
	    else
	        prev->right = NULL;
	    free(current);
	}
	if(current->right == NULL && current->left!=NULL)
	{
	        if(prev->left = current)
	            prev->left = current->left;
	        else
	            prev->right = current->left;
	        free(current);
	}
	if(current->left != NULL && current->right != NULL)
	{
	    struct treenode *tmp = current->right;
	 //case3-A
	    if(tmp->left == NULL && tmp->right == NULL)
	    {
	        current->info = tmp->info;
	        //current = tmp;
	        free(tmp);
	        current->right = NULL;
	    }
	 //case3-B
	    else if(current->right->left != NULL)
	    {
	        struct treenode *left_current = current->right;
	        struct treenode *left_current_prev = current->right->left;
	        while(left_current->left != NULL)
	        {
	            left_current_prev = left_current;
	            left_current = left_current->left;
	        }
	        current->info = left_current->info;
	        free(left_current);
	        left_current_prev->left = NULL;
	    }
	 //case3-C
	    else
	    {
	        struct treenode *temp;
	        temp = current->right;
	        current->info = temp->info;
	        current->right = temp->right;
	        free(temp);
	    }
	}
}
int main()
{
	//struct treenode *root;
	rt=NULL;
	int choice,x;
	while(1)
	{
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the number\n");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:
				printf("Binary tree traversal..........\n\n");
				printf("************In Order************\n");
				inorder(rt);
					printf("\n************pre Order************\n");
				preorder(rt);
					printf("\n************post Order************\n");
				postorder(rt);
				break;
			case 3:
				deletenode(65);
				break;
			case 4:
				search();
				break;	
			default:
				printf("INvalid::::");
				return 1;
				break;
		}
	}
	
}
