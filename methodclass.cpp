#include<bits/stdc++.h>

using namespace std;

class myclass{

    public : 

        void methodinclass(){

            cout<<"method inside class:\n";

        }

        void methodoutclass();
};

void myclass :: methodoutclass(){

    cout<<"method outside class:\n";

}

int main(){

    myclass obj;

    obj.methodinclass();
    obj.methodoutclass();

    return 0;


}