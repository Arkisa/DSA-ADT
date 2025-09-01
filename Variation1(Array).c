#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef struct{
    int elem[MAX];
    int count;
}List;


List initialize(List L);
List insertPos(List L, int data, int position);
List insertPos(List L, int data, int position);
List deletePos(List L, int position);
int locate(List L, int data);
List insertSorted(List L, int data);
void displayList(List L);


int  main(){
   
    List L;
    int data, position;


    initialize(L);


    L.elem[0] = 10;
    L.elem[1] = 20;
    L.elem[2] = 30;
    L.elem[3] = 40;
    L.elem[4] = 50;
    L.count = 5;


    char choice;


        printf("Current List: \n");


        displayList(L);


        printf("\nSelect what u wanna do:\n\nA.)Insert at Pos \nX.)Exit\n");
            scanf("%c", &choice);
           
        switch (choice){
        case 'A':{
            L = insertPos(L, data, position);
            printf("\nUpdated List: ");
            displayList(L);
        }
        //  case 'B':{
        //     L = deletetPos(L, data, position);
        //     printf("\nUpdated List: ");
        //     displayList(L);
        // }
        case 'X':{
           
            break;
        }
        default:
            break;
        }




}


List initialize(List L){
    L.count = 0;
    return L;
}


List insertPos(List L, int data, int position){


    printf("Enter a number to insert:");
        scanf("%d", &data);


    printf("Enter position to insert: ");
        scanf("%d", &position);


    if (position < 0 || position > L.count || L.count == MAX) {
        printf("Invalid position or list is full.\n");
        return L;
    }


    for (int i = L.count - 1; i >= position; i--) {
        L.elem[i + 1] = L.elem[i];  
    }
    L.elem[position] = data;
    L.count++;


    return L;
}

// List deletetPos(List L, int position){
    
//     printf("");
// }

void displayList (List L){


    for(int i = 0; i < L.count; i++){
        printf("%d ", L.elem[i]);
    }


}
