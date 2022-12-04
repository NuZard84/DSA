#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int value;
    Node *next;
} * head;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;

    head = new Node();
    head->value = a[0];
    head->next = head;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->value = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *h)
{
    do
    {
        cout << h->value << " ";
        h = h->next;

    } while (h != head);
}

void recursiveDisplay(struct Node *h)
{

    static int flag = 0;
    if (h != head || flag == 0)
    {
        flag = 1;
        cout << h->value << " ";
        recursiveDisplay(h->next);
    }

    flag = 0;
}

void insertNewNode(int val, int index)
{
    struct Node *t, *p;
    p = head;

    if (index == 0)
    {
        t = new Node();
        t->value = val;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            p = head;
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else
    {
        p = head;
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new Node();
        t->value = val;
        t->next = p->next;
        p->next = t;
    }
}

void deletionNode(int index){
    struct Node *p, *q;
    int val = 0;
    p = head;
    if (index == 0)
    {
        while(p->next != head)
            p = p->next;
        val = head->value;
        p->next = head->next;
        head = p;
    }
    else{
        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        val = q->value;
        delete q;
    }
    
}
int main()
{
    int A[] = {8, 15, 21, 29, 17, 89};
    create(A, 6);
    insertNewNode(84, 0);
    deletionNode(1);
    recursiveDisplay(head);
    cout << endl;
    display(head);

    return 0;
}