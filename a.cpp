#include <iostream>

using namespace std;

class A
{
public:
    int x;
    int y;
    A(){}
    A(int x, int y): x(x), y(y){}
    friend A operator +(A a, A b)
    {
        A c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        return c;
    }
    void display()
    {
        cout << x << " " << y;
    }
};




int main()
{
    A a(1, 1), b(2, 2), c;
    c = a + b;
    c.display();

    return 0;
}