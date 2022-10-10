#include <bits/stdc++.h>

using namespace std;

class password
{

private:
    string pass = "NuZrd@084";

public:
    int id;
    string Npass;
    void setpass(string s)
    {

        pass = s;
    }

    string getpass()
    {
        cout << "setted your new password as: ";

        return pass;
    }

    void p(int id)
    {

        if (id == 666)
        {
            cout << "235412@H\n";
        }

        else if (id == 777)
        {
            cout << "vkrmH%77\n";
        }

        else if (id == 888)
        {
            cout << "NuZrd@084\n";
        }
        else
        {
            
            cout << "there is no data for this id !\n";
        }
    }
};




int main()
{
    system("cls");

    password het;

    cout << "enter your id : \n";
    cin >> het.id;

    cout << "your password : \n";
    het.p(het.id);

    cout << "Set a new password: \n";
    cin >> het.Npass;

    het.setpass(het.Npass);
    cout << het.getpass();

    
    return 0;
}