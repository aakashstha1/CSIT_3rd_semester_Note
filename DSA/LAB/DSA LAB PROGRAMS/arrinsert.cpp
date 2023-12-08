#include<stdio.h>
#include<conio.h>
 int arr[30], element, num, i, location;
 void traverse()
 {
 	printf("\n\n The resultant array is:\n\n");
 	  for (i = 0; i < num; i++)
      	printf("\n %d", arr[i]);
 }
 void search()
 {
 	int x;
 	printf("\nEnter the element to be searched:\n");
 	scanf("%d",&x);
 	for (i = 0; i < num; i++)
 	{
 		if(arr[i]==x)
 		{
 			printf("Item %d is contained in array in position %d",x,i+1);
 			break;
		 }
	 }
      	
 	
 }
 void del_element()
 {
  
   printf("\nEnter the location of the item to delete");
   scanf("%d", &location);
   
   for(i=location-1;i<num-1;i++)
   {
   		arr[i]=arr[i+1];
   		
   }
   num--;
   
 }
 void insert()
 {
 	printf("\nEnter the element to be inserted :");
   	scanf("%d", &element);
 
   printf("\nEnter the location");
   scanf("%d", &location);
 
   //Create space at the specified location
   for (i = num; i >= location; i--) {
      arr[i] = arr[i - 1];
   }
 
   num++;
   arr[location - 1] = element;
 }
int main() {
   
 	
   printf("\nEnter no of elements :");
   scanf("%d", &num);
 
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }
 	int option;
 	while(1)
	 {
	 	printf("\nEnter the choice:\n1.insert\n2.delete\n3.traverse\n4.searching\n5.exit\n");
	 	scanf("%d",&option);
	 	switch(option)
	 	{
	 		case 1:
	 			{
	 				insert();
	 				break;
				 }
			case 2:
				{
					del_element();
					break;
				}
			case 3:
				{
					traverse();
					break;
				}
			case 4:
				{
					search();
					break;
				}
			case 5:
				{
					return 0;
					break;
				}
			default:
				printf("invalid choice\n");
		 }
	 }
 	
 	
   return 0;
}
