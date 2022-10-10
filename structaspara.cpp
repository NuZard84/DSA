#include <iostream>

using namespace std;

string s;

struct member
{
    int pass;
    string name;
};

struct member *x()
{

    struct member *p;

    cout << "Enter your name below:";
    cin >> p->name;

    cout << "Enter your pin no below:";
    cin >> p->pass;

    
    return p;
}

void change(struct member *pin){

    cout << "Enter your new pin no below:";
    cin >> pin->pass;

}

int main()
{

    struct member *A = x();

    cout << "your name is :" << A->name << endl;

    cout << "want to change your pin no: [yes/no]" << endl;
    cin >> s;

    if (s == "yes")
    
    {
        change(A);

        cout<<"your pin has been changed !\n";
    }
    
    else
    {
        cout<<"EXIT...\n";
    }

    cout << A->name << endl;
    cout << A->pass << endl;

    return 0;
}