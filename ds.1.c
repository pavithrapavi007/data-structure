//implement basic array operation: insertion,deletion, searching and traversal.
#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,value,choice,found;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter the elements:\n");
        for(i=0;i<n;i++)
        {
    scanf("%d",&arr[i]);
        }
        do {
            printf("\n--MENU--\n");
            printf("1.traversal\n 2.insertion\n 3.deletion\n 4.searching\n 5.exit\n");
            printf("enter your choice:");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                printf("array elements are:");
                for(i=0;i<n;i++){
                    printf("%d",arr[i]);
                }
                break;
                case 2:
                printf("enter position and value:");
                scanf("%d %d",&pos,&value);
                for(i=n;i>=pos;i--){
                    arr[i]=arr[i-1];
                }
                arr[pos-1]=value;
                n++;
                break;
             case 3:
             printf("enter position to delete:");
             scanf("%d",&pos);  
             for(i=pos-1;i<n;i++){
                arr[i]=arr[i+1];
             }  
             n--;
             break;
             case 4:
             printf("enter the element to search:");
             scanf("%d",&value);
             found=0;
             for(i=0;i<n;i++){
                if(arr[i]==value){
                    printf("element found at the position %d\n",i+1);
                    found=1;
                    break;
                }
             }
             if(found==0)
             printf("element not found\n");
             break;
             case 5:
             printf("exiting....\n");
             break;
             default:
             printf("invaid choice!\n");
            }
        }
        while(choice !=5);
        return 0;
}