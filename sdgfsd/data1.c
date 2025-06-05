#include<stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,pos,choice;
void create();
void display();
void insert();
void delete();
int main() {
while(1){
    printf("\n\n---------MENU   \n");
    printf("1. CREATE\n");
    printf("2. DISPLAY\n");
    printf("3. INSERT\n");
    printf("4. DELETE\n");
    printf("5. EXIT\n");
    printf("    ");
    printf("\n ENTER YOUR CHOICE: \t");
    scanf("%d",&choice);
    switch (choice){
    case 1:
         create();
         break;
    case 2:
         if(n)
            display();
         else {
            printf("Array is empty\n");
         }
         break;
    case 3:
         insert();
         break;
    case 4:
         if(n)
            delete ();
         else {
            printf("Array is empty");
         }
         break;
    case 5:
         exit (0);
         break;
       default:
           printf("\n Invalid choice:\n");
         break;
        }
      }
        return 0;
   }
    void create() {
       printf("\n Enter the size of the array elements: \t");
       scanf("%d",&n);
       printf("\n Enter the elements for thr array:\n");
       for(i=1;i<=n;i++) {
       scanf("%d",&a[i]);
       }
    }
     void display() {
       int i;
       printf("\n The array elements are: \n");
       for(i=1;i<=n;i++) {
       printf("%d\t",a[i]);
       }
    }
     void insert()  {
       printf("\n Enter the position for the new elements: \t");
       scanf("%d",&pos);
       if(pos>(n+1))
           printf("\n Invalid Position\n");
       else   {
           printf("\n Enter the elements to be inserted:\t");
           scanf("%d", &val);
           for(i=n;i>=pos;i--) {
             a[i+1]=a[i];
           }
         a[pos]=val;
         n=n+1;
       }
     }
        void delete()  {
       printf("\n Enter the position for the element to be deleted: \t");
       scanf("%d",&pos);
       if(pos>n)
           printf("\n Invalid Position\n");
       else   {
           val=a[pos];
           for(i=pos;i<n;i++){
            a[i]=a[i+1];
          }
        n=n-1;
        printf("\n The deleted elements is= %d",val);
        }
      }  
