#include <iostream>

class A
{
public:
    void DoSomething()
    {
        int x = 5;
        m_member1 += x;
    }

    static int YoMomma;

    int m_member1 = 3;
    int m_member2 = 5;

    enum eDirection
    {
        e_Left = -1,
        e_Right = 1,
        e_Up = -1,
        e_Down = 1
    };
};



int main()
{
    A::YoMomma = 69;
    A::eDirection::e_Down;

    A a;

    a.DoSomething();


    std::cout << "Hello World!\n";
}
