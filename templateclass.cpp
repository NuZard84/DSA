#include <bits/stdtr1c++.h>

using namespace std;

template <class t>

class x
{

private:
    t a, b;

public:
    x(int a, int b);
    t add();
    t sub();
};
template <class t>
x<t>::x(int a, int b)
{

    this->a = a;
    this->b = b;
}

template <class t>

t x<t>::add()
{

    t c;
    c = a + b;
    return c;
}

template <class t>

t x<t>::sub()
{

    t x;
    x = a - b;
    return x;
}

int main()
{
    x<float> calc(48,84);

    cout<<"adding:"<<calc.add()<<endl;
    cout<<"substracting:"<<calc.sub()<<endl;

    return 0;
}