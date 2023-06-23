#include <stdio.h>
#include <stdlib.h>

typedef struct_node
{
    int data;
    struct_node *next;

}Node;

int main(void)
{
    struct_node *head = NULL;
    struct_node *tail = NULL;
    struct_node *cur = NULL;

    struct_node *newNode = NULL;
    int readData;
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if (readData <1)
            break;
        
        newNode = (struct_node*) malloc(sizeof(struct_node));
        newNode->data =readData;
        newNode->next=NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->next=newNode;
        
        tail = newNode;

    }
    printf("\n");

    printf("입력 받은 데이터의 전체 출력!\n");
}