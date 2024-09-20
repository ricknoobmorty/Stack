#include <stdio.h>
#include <stdlib.h>

/*This works and it is generalised*/

static int size;
static int n;

struct stack
{
    // agar yaha *arr nhi use karte to variable size nhi bana pate, because if we used arr[] the program will throw an erro if we put any varible inside those sqaure brackets
    int *arr;
};

void push(struct stack *s)
{
    printf("Enter the number you want to push\n");
    scanf("%d", &n);
    (*s).arr[0] = n;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", (*s).arr[i]);
    }
}


// Here, to avoid shifting and overwriting, I skipped printing the element present at the first place.
void pop(struct stack *s)
{
    for (int i = 0; i < (size-1); i++)
    {
        printf("%d ", (*s).arr[i + 1]);
    }
}

int main()
{
    int choice;
    struct stack s1;
    
    printf("Enter the size of your array\n");
    scanf("%d", &size);
    
    //here used conecpt of DMA to make array of variable size
    s1.arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the number %d\n", i + 1);
        scanf("%d", &s1.arr[i]);
    }
    printf("\n");

    printf("Press 0 for push and 1 for pop\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        pop(&s1);
    }
    else
    {

        push(&s1);
    }

    return 0;
}
