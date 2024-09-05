#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
        int data;
        struct Node *next;
}NODE;
int main()
{
           int n,i;
           NODE * head= NULL, * temp,*nn;
           printf("Enter How many Node you want ? ");
           scanf("%d",&n);
           for(i=0;i<n;i++)
{ 
       
        nn = (NODE *)malloc(sizeof(NODE));
        printf("\nEnter data");
        scanf("%d",&nn->data);
        nn->next = NULL;
        if(head == NULL)
   
{
   head= temp = nn;
}
 else
{    temp -> next = nn;
     temp = nn;
} 
}
    
   temp = head;
   while(temp != NULL)
   {printf("\n%d ",temp ->data);
     temp =temp -> next;
}
}















