#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *prev;
    int value;
    Node *next;
};

struct Node *first = NULL;

void create(int a[], int n)
{
    struct Node *last, *t;

    first = new Node;
    first->value = a[0];
    first->next = first->prev = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->value = a[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->value << " ";
        p = p->next;
    }
}
int main()
{
    int A[] = {3, 15, 29, 69, 84};
    create(A, 5);
    display(first);
    
    return 0;
}