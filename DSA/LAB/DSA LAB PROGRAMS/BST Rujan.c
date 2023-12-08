//write a menu driven program to implement bst with the following operation:
	//craetion of tree (insert nodes)
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int count,x;
struct bnode
{
	struct bnode *left;
	int info;
	struct bnode *right;
}*temp;
struct bnode *root;
void insert(struct bnode *nnode)
{
	int x;
	
	
	nnode=(struct bnode*)malloc(sizeof(struct bnode));
	nnode->left=NULL;
	nnode->right=NULL;
	printf("\nenter the data:");
	scanf("%d",&x);
	nnode->info=x;
	if (root==NULL)
	{
		root=nnode;
		return;
	}
	temp=root;
	label:
	if (temp->info<=nnode->info)
	{
		if (temp->right=='\0')
		{
			temp->right=nnode;
			return;
		}
		else temp=temp->right;
		goto label;
	}
	else if(temp->left=NULL)
	{
		temp->left=nnode;
		return;
		}
		else
		{
		temp=temp->left;
		goto label;
		}
}
int pre_traversal(struct bnode *temp)
{

	if (temp==NULL)
		return;
	printf("\t%d",temp->info);
	pre_traversal(temp->left);
	pre_traversal(temp->right);
}
void in_traversal(struct bnode *temp)
{
	if (temp==NULL)
		{
		return;
	}
	in_traversal(temp->left);
	printf("\t%d",temp->info);
	in_traversal(temp->right);
}
void post_traversal(struct bnode *temp)
{
	if (temp==NULL)
		return;
	post_traversal(temp->left);
	post_traversal(temp->right);
	printf("\t%d",temp->info);


}

void leaf_node(struct bnode *temp)
{
	if(temp=='\0')
	return;
	leaf_node(temp->left);
	if(temp->left=='\0'&&temp->right=='\0')
	printf("%d",temp->info);
	leaf_node(temp->right);
}
void one_child(struct bnode *temp)
{
	if(temp=='\0')
	{
		return;
	}
	if ((temp->left==NULL&&temp->right!=NULL)||(temp->right==NULL&&temp->left!=NULL))
		printf("\t%d",temp->info);
	one_child(temp->right);
}
void double_child(struct bnode *temp)
{
	
	if (temp==NULL)
		return;
	double_child(temp->left);
	if ((temp->left!=NULL&&temp->right!=NULL))
		printf("\t%d",temp->info);
	double_child(temp->right);
}
void search_item(struct bnode *temp)
{
	int key;
	printf("searching value:");
	scanf("%d",key);
	if(temp==NULL)
		{
		printf("\n The item doesnot exist...");
		}
	 if(key==temp->info)
			{
			printf("\n The item found...");
			}
	 if(key<temp->info)
	     {
	     search_item(temp->left);
	 	}
	else
		search_item(temp->right);
}

    int main()
{
	root='\0';
	int ch;
	while(1)
	{
	printf("\n");
	printf("\n 1 - Insert");
	printf("\n 2 - pre_traversal");
    printf("\n 3 - in_traversal");
    printf("\n 4 - post_traversal");
    printf("\n 5 - leaf_node");
    printf("\n 6 - onechild_node");
    printf("\n 7 - doublechild_node");
    printf("\n 8 - search_node");
    printf("\n 9 - exit\n\n");
	printf("\nEnter the choice:");
	scanf("%d",&ch);
	

	switch(ch)
	{
		case 1:insert(root);
		break;
		case 2:pre_traversal(root);
		break;
		case 3:in_traversal(root);
		break;
		case 4:post_traversal(root);
		break;
		case 5:leaf_node(root);
		break;
		case 6:one_child(root);
		break;
		case 7:double_child(root);
		break;
		case 8:search_item(root);
		break;
		case 9:exit;
		break;
		default:printf("enter the next choice........");
		break;
	}
	}
	getch();
}

