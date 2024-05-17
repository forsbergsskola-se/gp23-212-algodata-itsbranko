#include <iostream>
#include <stack>

using namespace std;

void printStackElements(stack<int> stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    //empty, size, push, pop, top

    stack<int>numbersStack;
    
    numbersStack.push(1);
    numbersStack.push(2);   //push adds an emelent to the stack
    numbersStack.push(3);

    numbersStack.pop();
    numbersStack.pop();     //pop takes away the first element from the top
    numbersStack.pop();


    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.pop();
    
  printStackElements(numbersStack);

    /*if (numbersStack.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
    cout << "Stack size is: " << numbersStack.size() << endl;*/
}
