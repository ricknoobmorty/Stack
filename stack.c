#include<stdio.h>

/*THIS IS THE OLD SOLUTION*/

struct stack{
    int arr[10];
};



int main(){
    int n;
    int choice;
    struct stack s1;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number %d\n", i+1);
        scanf("%d", &s1.arr[i]);
    }
    

    printf("Press 0 for push and 1 for pop\n");
    scanf("%d", &choice);
    if(choice == 1){
        for (int i = 0; i < 10; i++)
        {
            s1.arr[i] = s1.arr[i+1];
        }
        
    }
    else {
        printf("Enter the number you want to push\n");
        scanf("%d", &n);
        s1.arr[0] =  n;
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%d \n", s1.arr[i]);
        
    }
    
    return 0;
}