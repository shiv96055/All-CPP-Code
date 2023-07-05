#include <iostream>

using namespace std;

class stack{

    int *arr;
    int top;
    int size1;

public:
    stack(int s){
        arr = new int[s];
        this->size1 = s;
        top = -1;
    }

    void push(int data){
        if (size1 - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    int peak(){

        if (top != -1)
            return arr[top];
        else
            cout << "element not found" << endl;
        return -1;
    }

    void pop(){
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack under flow" << endl;
            ;
        }
    }

    bool isEmpty(){
        if (top == -1)
            return true;
        else
            return false;
    }

    int size(){
        return top + 1;
    }
};

int main(){

    stack st(7);
    st.push(7);
    st.push(8);
    cout << st.peak() << endl;
    // st.pop();
    cout << st.size();
    return 0;
}