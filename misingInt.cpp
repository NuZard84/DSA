#include<iostream>
using namespace std;

void missing4(int *arr, int lenght)
{
    int i, num = 0;
    int min = arr[0];
    int max = 0,len;
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<min<<endl<<max<<endl;

    len=max-min;
    int array[len+1]={0};
    for(i=0;i<lenght;i++){
        num=arr[i]-min;
        array[num]=1;
    }
    for(i=1;i<len;i++){
        if (array[i] == 0)
        {
            cout << min+i <<" ";
        }
    }
}

int main(){


    int ar[4] = {60,55,52,57};
    missing4(ar, 4);
    return 0;
}