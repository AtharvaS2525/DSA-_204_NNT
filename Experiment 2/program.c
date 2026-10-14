#include <stdio.h>
void accept(int arr[], int n)
{
    printf("Enter the element of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    printf("Elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void linearsearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(key == arr[i])
        {
            printf("Element Found");
            return;
        }
    }
    printf("Element not Found");
}
void Binsearch(int arr[], int n, int key)
{
    int Low = 0;
    int High = n - 1;
    while(Low <= High)
    {
        int Mid = (Low + High) / 2;


        if(key == arr[Mid])
        {
            printf("Element Found");
            return;
        }
        else if(key < arr[Mid])
        {
            High = Mid - 1;
        }
        else
        {
            Low = Mid + 1;
        }
    }


    printf("Element not found");
}
void displaymenu()
{
    printf("\n\n_______MENU_______");
    printf("\n1. Display Array");
    printf("\n2. Linear Search");
    printf("\n3. Binary Search");
    printf("\n4. Display Menu");
    printf("\n5. Exit");
    printf("\n___________________");
}
int main()
{
    int n;
    int key;
    int option;
    printf("Enter the size:\n");
    scanf("%d", &n);
    int arr[n];
    accept(arr, n);
    displaymenu();
    do
    {
    printf("\nEnter option no. : ");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        display(arr, n);
        break;
        case 2:
        printf("\nEnter desired element to search: ");
        scanf("%d", &key);
        linearsearch(arr, n, key);
        break;
        case 3:
        printf("\nEnter desired element to search: ");
        scanf("%d", &key);
        Binsearch(arr, n, key);
        break;
        case 4:
        displaymenu();
        break;
        case 5:
        printf("\nBye Bye");
        break;
        default:
        printf("\nWrong Choice");
        }
    } while(option != 5);
    return 0;
}
