#include <iostream>

using namespace std;

int main()
{

    int a1[5] = {1, 2, 4, 5, 7};
    int a2[5] = {0, 2, 8, 9, 4};
    int un[10];
    int count = 0;
    int last = 5;
    int i, j;
    int same = 0, alter = 0;

    for (int i = 0; i < 5; i++)
    {
        un[i] = a2[i];
    }

    for (int i = 0; i < 5; i++)

    {
        int same = 0, alter = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a1[i] == a2[j])
            {
                same++;
            }
            if (a1[i] != a2[j])
            {

                alter++;
            }

            if (alter == 5)
            {

                un[last] = a1[i];
                last++;
                count++;
            }
        }
    }
    for (int i = 0; i < 5 + count; i++)
    {
        
        cout << un[i] << " ";
    }

    

    return 0;
}