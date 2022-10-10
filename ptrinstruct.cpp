#include <bits/stdc++.h>

using namespace std;

int main()
{

    struct frnd
    {
        string name;
        int age;
    };

    struct frnd x = {"nishchit", 20};
    struct frnd y = {"krish", 18};
    struct frnd z = {"vaibhav", 18};

    struct frnd *p1 = &x;
    struct frnd *p2 = &y;
    struct frnd *p3 = &z;

    cout << "before change by pointer" << endl;
    cout << x.name << " " << x.age << endl;
    cout << y.name << " " << y.age << endl;
    cout << z.name << " " << z.age << endl;

    cout << "after change by pointer" << endl;
    (*p1).name = "nise";
    p2->name = "krishh";
    p3->name = "vb";

    cout << p1->name << x.age << endl;
    cout << p2->name << y.age << endl;
    cout << p3->name << z.age << endl;

    return 0;
}