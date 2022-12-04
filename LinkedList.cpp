// change done by vaibhav
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node..
struct Node
{
    int value;
    Node *next;
};

struct Node *first = 0;
struct Node *second = 0;

void createA(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node();
    first->value = a[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->value = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void createB(int b[], int n)
{
    int i;
    struct Node *t, *last;
    second = new Node();
    second->value = b[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->value = b[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    cout << endl;

    while (p != 0)
    {

        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}

void displayByRecursion(struct Node *p)
{

    if (p != NULL)
    {
        displayByRecursion(p->next);
        cout << p->value << " ";
    }
}

int count(struct Node *p)
{
    int c = 0;

    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int add(struct Node *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + p->value;
        p = p->next;
    }
    return sum;
}

int max(struct Node *p, int n)
{
    int max = -32768;

        while (p != NULL)
    {

        if (max < p->value)
        {
            max = p->value;
        }
        p = p->next;
    }

    return max;
}

// int search(struct Node *p, int key) // by Returning Int value..
// {
//     int c = 0;
//     while (p != NULL)
//     {
//         c++;
//         if (p->value == key)
//         {
//             return c;
//         }
//         p = p->next;
//     }
//     return 0;
// }

Node *search(struct Node *p, int key) // by returning Node value;
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        if (key == p->value)
        {
            cout << "Key (" << key << ") is found at Position :" << c << endl;
            return 0;
        }
        p = p->next;
    }
    cout << "key is not found !\n";
    return 0;
}

Node *moveToHeadLinearearch(Node *p, int key)
{
    Node *q = NULL;
    while (p != NULL)
    {
         display(first);
        if (p->value == key)
        {
            q = p->next;
            p->next = first;
            first = p;
            cout << first->value << " IS FOUND !" << endl;
             
            return NULL;
        }
        q = p;
        p = p->next;

       
    }

    cout << "KEY IS NOT FOUND !";
    return NULL;
}
Node *insertNewnode(Node *p, int index, int x)
{
    struct Node *t;

    if (index < 0 || index > count(p))
    {
        return 0;
    }

    t = new Node();
    t->value = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;


        }
        t->next = p->next;
        p->next = t;
    }
    return 0;
}

void insertLast(int x)
{
    struct Node *t, *last;
    t = new Node();
    t->value = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
Node *insertNodeinSortedLL(Node *p, int x)
{
    struct Node *q, *t;

    q = NULL;

    t = new Node();
    t->value = x;
    if (p && p->value > x)
    {
        t->next = p;
        first = t;
    }

    while (p && p->value < x)
    {
        q = p;
        p = p->next;
    }
    if (p && p->value < x)
    {
        t->next = q->next;
        q->next = t;
    }
    return 0;
}
void deleteNode(Node *p, int index)
{
    struct Node *q = NULL;
    if (index == 1)
    {
        first = first->next;
        delete p;
    }
    else
    {

        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
}

int cheackLLSorted(struct Node *p)
{
    int x = -65536;
    while (p != NULL)
    {
        if (p->value < x)
        {
            return 0;
        }
        x = p->value;
        p = p->next;
    }
    return 1;
}

int deleteDublicateNode(struct Node *p)
{
    struct Node *q = first->next;
    while (q != NULL)
    {

        if (p->value != q->value)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
    return 0;
}
void reverseLinkedList()
{
    struct Node *p, *q, *r;
    p = first;
    q = r = NULL;

    while (p != NULL)
    {
        q = p;
        r = q;
        p = p->next;
        q->next = r;
        
    }
    first = q;
}

void mergindLinkedList(struct Node *f, struct Node *s)
{
    struct Node *t, *last;
    t = last = NULL;

    if (f->value < s->value)
    {
        last = t = f;
        f = f->next;
        last->next = NULL;
    }
    else
    {
        last = t = s;
        s = s->next;
        last->next = NULL;
    }
    if (s != NULL)
    {
        last->next = s;
    }
}

int cheackLoop(struct Node *p)
{
    struct Node *a, *b;
    a = b = p;
    do
    {
        a = a->next;
        b = b->next;
        b = b != NULL ? b = b->next : NULL;
    } while (a && b);

    return a == b ? 1 : 0;
}
int main()
{
    Node *temp = NULL;
    int A[] = {15, 20, 51, 59, 69};
    int B[] = {5, 19, 45, 74, 84};
    int x;
    createA(A, 5);
    createB(B, 5);
    // insertLast(5);
    // insertLast(5);
    // insertLast(5);               // 3 15 48 50 84 51 59 5 5 5
    // insertNewnode(first, 3, 49); // 3 15 48 50 84 51 59 5 5 5
    // insertNodeinSortedLL(first, 2);
    // deleteDublicateNode(first); //15,84,51
    // reverseLinkedList();        //59 51 84 84 15 15
    // mergindLinkedList(first, second); // 5 15 19 20 45 51 59 69 74 84
    // display(first); // 3 15 48 50 84 51 59 5 5 5
    display(second);
    display(first);
    if (cheackLoop(first))
    {
        cout << "linked list is in loop !";
    }
    else
    {                          
        cout << "linkedList is linear";
    }
    // displayByRecursion(first); // 5 5 5 59 51 84 50 48 15 3
    // deleteNode(first, 2);
    // if(cheackLLSorted(first)){ //cheack wether linkedlist is sort or not..
    //     cout << "\nLinkedList is sorted";
    // }
    // else{

    //     cout << "\nLinkedList is not sorted";
    // }
    // display(first);

    // cout << "\nNodes : " << count(first);2
    // cout << "\nSum : " << add(first, 5);
    // cout << "\nMaximumNode : " << max(first, 5);
    // cout << "\nWhich element 's position do you want ? -> ";
    // cin >> x;
    // temp = search(first, x);
    // temp = moveToHeadLinearearch(first, x);
 

    return 0;
}
