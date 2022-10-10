#include <bits/stdc++.h>

using namespace std;

class company
{

public:
    string name;

    void compname();
};

void company ::compname()
{

    cin >> name;
}

class ceo : public company
{

public:
    string name;

    void ceoname();
};

void ceo ::ceoname()
{

    cin >> name;
}

int main()
{

    company obj;

    ceo google;
    ceo microsoft;

    obj.compname();
    google.ceoname();
    cout << obj.name << ":" << google.name;

    obj.compname();
    microsoft.ceoname();
    cout << obj.name << ":" << microsoft.name;

    return 0;
}
