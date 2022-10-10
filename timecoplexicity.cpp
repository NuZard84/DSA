#include<bits/stdc++.h> 

using namespace std; 

void swap(int a,int b){

    int x;
    x = a;
    a = b;
    b = x;
    cout << "\nafter swaping:" << a <<" "<< b;

    //heren time complexiry is  f(n) = 2n and there is no other operation for it so 
    //O(n) =  1
}

int sum(int a[], int n){

    int s=0, i;  // 1
    for ( i = 0; i < n; i++) //(n+1)
    {
        s = s + a[i]; // n
    }
    return s;  //1

    //here it is f(n) = 2n + 3
    //O(n) = n
}   

void add(int n){
    int i, j;
    int a[10][10], b[10][10], c[10][10];
    for ( i = 0; i < n; i++)  //n+1
    {
        for (j = 0; j < n; j++) //n*(n+1)...nested loop
        {
            c[i][j] = a[i][j] + b[i][j]; //n*n ...nested loop
        }
        
    }
    // here it is f(n) =2n^2 + 2n + 1 
    //O(n) = n^2
}
int main()
{
    cout << "hello";
    return 0;
}