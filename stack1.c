#include <stdio.h>

/*This works but it is not generalised*/

static int size;
static int n;

struct stack
{
    int arr[10];
};

void push(struct stack *s)
{
    printf("Enter the number you want to push\n");
    scanf("%d", &n);
    (*s).arr[0] = n;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", (*s).arr[i]);
    }
}


// Here to avoid shifting and overwriting, I skipped printing the element present at the first place.
void pop(struct stack *s)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", (*s).arr[i + 1]);
    }
}

int main()
{
    int choice;
    struct stack s1;
    for (int i = 0; i < 10; i++)
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
