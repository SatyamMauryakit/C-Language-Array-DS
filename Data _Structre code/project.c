#include <stdio.h>
#include<conio.h>

void display();
 void insert();
 void del();
 void traverse();
// void merged();

int a[10],  i =-1;


int main ()
{    int option;
    do
    { 
        display();
        printf("plese Enter your number : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
         printf("you have selected inset 1 :");
              insert();
             break;
        case 2:
            printf("you have selected delete 2 :");
             del();
            break;
        case 3:
            printf("you have selected traverse 3 :");
            break;
        case 4:
            printf("you have selected Merged 4 :");
            break;
        case 5:
            printf("you have selected option 5:");
            break;
        case 6:
            printf("you have selected option 6 :");
            break;
        default:
            printf("\1\1\1\1 YOUR CHOICE IS INVALID \1\1\1\n");
            printf("PLESE ENTER VALID NUMBER ");
      }
    }
      while (option!=5);
      getch();
}





 void display()
{
    printf("        ****Welcome to my world of array****     \n");
    printf("\n              Choose your operation :        ");
    printf("\n   : Enter 1 for Traversal new element of array ");
    printf("\n   : Enter 2 for Insertion element of array ");
    printf("\n   : Enter 3 for Traverse  element of array ");
    printf("\n   : Enter 4 for merged all new element of array:");
    printf("\n   : Enter 5 for exit new element of array ");
    printf("\n   : Enter 6 for inserting new element of array \n ");
}
 void insert(){
 
 if(i<=8){
    printf("Enter the number . \n");
    while (i<=8)
    {
        i++;
        scanf("%d",&a[i]);
    }
 }
 else{
    printf("The Array is Full.");
 }
 }



 void del(){
    int item,j,flag=0,pos;
    printf("Enter the number to delete : ");
    scanf("%d",&item);
    for(j=0;j<=i;j++){
         if(a[j]=item){
            flag=1;
            pos=j;

        }
        if(flag){
            for(j=pos;j<=i;j++){
                a[j]=a[j+1];
            }
            i--;
        }
        else{
            printf("The Number is not in list , \1 SORRY \1");
        }
    }
 }