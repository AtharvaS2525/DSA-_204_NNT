#include <stdio.h>
#include <stdlib.h>
#define size 5

struct stack{
    int s[size];
    int top;
}st;

int stfull()
{
    if(st.top >= size - 1)
        return 1;
    else
        return 0;
}

int pop()
{
    int item ;
    item = st.s[st.top];
    st.top--;
    return(item);
}

void push (int item)
{
    st.top++;
    st.s[st.top]= item;
}

int stempty()
{
    if(st.top == -1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    if(stempty ())
        printf("\nStack is EMPTY!!");
    else
    {
        for(i = st.top; i >= 0; i--)
            printf("\n%d", st.s[i]);
    }
}

void main()
{
    int item, choice;
    char ans;
    st.top = -1;
    
    printf("\n\t\tImplementation of Stack");
    
    do {
        printf("\n\n Main Menu");
        printf("\n 1. Push\n 2. Pop \n 3. Display\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("\n Enter the item to be pushed: ");
                scanf("%d", &item);
                if(stfull())
                    printf("\n Stack is full!!");
                else
                    push(item);
                break;
            
            case 2:
                if(stempty())
                    printf("\nEmpty Stack! Underflow!!");
                else
                    {
                        item = pop();
                        printf("\nThe popped element is : %d ", item);
                    }
                break;
           
            case 3:
                display();
                break;
           
            case 4:
             printf("Exiting.....");
                exit(0);
               
                
            default:
                printf("\nInvalid choice!");
        }
        
        printf("\nDo you want to continue (Y/N)? ");
        scanf(" %c", &ans); 
        
    } while (ans == 'Y' || ans == 'y'); 
}
