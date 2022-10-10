#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void creatNode(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // first = new Node;  for cpp
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 0; i = n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void displayLinkedList(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}

int main()
{
    int a[] = {1, 2, 13, 4, 15};
    creatNode(a, 5);
    displayLinkedList(first);
    printf("hello");

    return 0;
}