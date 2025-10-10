#include <iostream>

using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "stack underflow" << endl;
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Empty stack" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(3);
    st.push(34);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
        cout << "stack is empty" << endl;
    else
        cout << "stack is not empty" << endl;

    
}