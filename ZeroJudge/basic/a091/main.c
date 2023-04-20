// can not pass
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertSortedNode(Node **headRef, Node **tailRef, int data)
{
    Node *newNode = createNode(data);
    // 若不存在頭則直接指定為頭尾
    if (*headRef == NULL)
    {
        (*headRef) = newNode;
        (*tailRef) = newNode;
        return;
    }
    // 跟頭一樣大忽略
    if (data == (*headRef)->data){
        return;
    }
    // 比頭小設為頭
    if (data < (*headRef)->data)
    {
        // printf("%d比頭小設為頭\n",data);
        newNode->next = (*headRef);
        (*headRef)->prev = newNode;
        (*headRef) = newNode;
        return;
    }
    // 比頭大向後找,適當位置插入
    Node *currentNode = (*headRef);
    Node *preNode=NULL;
    while (currentNode->next!=NULL)
    {
        currentNode = currentNode->next;
        // 重複忽略
        if (data == currentNode->data){
            return;
        }
        // 比當前數值小在此插入
        if (newNode->data < currentNode->data)
        {
            // printf("%d比%d小在此插入\n", newNode->data, currentNode->data);
            preNode = currentNode->prev;
            newNode->next=currentNode;
            newNode->prev = currentNode->prev;
            (currentNode->prev)->next = newNode;
            currentNode->prev = newNode;
            return;
        }
        // printf("%d比%d大往後找\n", newNode->data, currentNode->data);
    }
    // 此值最大設為尾
    newNode->prev=currentNode;
    currentNode->next = newNode;
    (*tailRef) = newNode;
    // printf("%d最大設為尾\n", (*tailRef)->data);

    return;
}


void getMin(Node **headRef)
{
    printf("%d\n", (*headRef)->data);
    (*headRef) = (*headRef)->next;
    (*headRef)->prev=NULL;
}

void getMax(Node **tailRef)
{
    printf("%d\n", (*tailRef)->data);
    (*tailRef) = (*tailRef)->prev;
    (*tailRef)->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n,m;
    while (scanf("%d", &n) != EOF)
    {
        if(n==1){
            scanf("%d", &m);
            insertSortedNode(&head, &tail, m);
        }
        if (n == 2)
        {
            getMax(&tail);
        }
        if (n == 3)
        {
            getMin(&head);
        }
    }

    return 0;
}
