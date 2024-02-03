#include<stdio.h>
int main()
{
    int a[50],size,i,num,pos;
   printf("Enter the size of array\n");
    scanf("%d",&size);
    if(size<=0 || size>50)
{
    printf("Invalid Size");
}
    else
{
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
       { 
           scanf("%d",&a[i]);
       }
     printf("Number Entered Successfully\n");
     //here we print the value stored in array
     printf("Number stored in array\n");
     for(i=0;i<size;i++)
        {
            printf("%d\n",a[i]);
        }
    printf("Enter the number which you want to insert\n");
    scanf("%d",&num);
    printf("Enter the position where you want to insert in array\n");
    scanf("%d",&pos);
        if(pos<=0 || pos>size)
            {
                printf("Invalid Position");
            }
        else
        {
            for(i=size-1;i>=pos-1;i--)
            {
                a[i+1]=a[i];
            }
        a[pos-1] = num;
        size++;
        for(i=0;i<size;i++)
            {
                printf("%d\n",a[i]);
            }
        }
}            
  return 0;
}