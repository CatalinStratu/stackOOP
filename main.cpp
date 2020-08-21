#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Stack
{
private:
    //enum { MAX = 10 }; // немного нестандартный синтаксис
    static const int MAX = 10;
    int st[MAX]; // стек в виде массива
    int top; // вершина стека
public:
    Stack() // конструктор
    {
        top = 0;
    }
    void push(int var) // поместить в стек
    {
        st[++top] = var;
    }
    int peek()
    {
        return st[top];
    }
    int pop() // взять из стека
    {
        return st[top--];
    }
    int size(int k)
    {
        return k;
    }
};
///////////////////////////////////////////////////////////
int main()
{
    Stack s1;
    s1.push(11);
    s1.push(22);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    s1.push(33);
    s1.push(44);
    s1.push(55);
    s1.push(66);
    s1.push(77);
    s1.push(88);
    s1.push(99);
    s1.push(100);
    cout << "3: " << s1.pop() << endl;
    cout << "4: " << s1.pop() << endl;
    cout << "5: " << s1.pop() << endl;
    cout << "6: " << s1.pop() << endl;
    cout << "Last element : " << s1.peek() << endl;
    return 0;
}