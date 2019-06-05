#include <iostream>
#include <cstdlib>
using namespace std;



class Stack {
private:
    int a;
    int i = 0;
    int *mas = new int [10];
public:

    void push (int a1, int i1){
        a = a1;
        i = i1;
        mas[i] = a;
    }

    int pop ()
    {
        return mas[i--];
    }

    void show() const{
        cout << "Your stack: ";
        for ( int j = 0; j<=i ;j++)
        {
            cout << mas[j];
            cout << " ";
        }
        cout <<endl;
    }

    void peek()const{
        cout <<endl<<"Last element:" << mas[i];
    }
};

int main() {
    int i = 0;
    int q = 0;
    int qwe = 0;
    char c = 0;
    int w = 0;
    Stack MyStack;
    while (q != 5){
        cout <<endl<< "What you want to do?" << endl;
        cout << "1.Push element" << endl;
        cout << "2.Pop element" << endl;
        cout << "3.Show stack" << endl;
        cout << "4.Peek element" << endl;
        cout << "5.Exit" << endl;
        cin >> c;
        if ( (int)c >= 49 &&  (int)c <= 53 ){
            q = static_cast<int>(c) - 48;
            if (q == 1){
                cout <<endl<<"Enter your element" <<endl;
                cin >> w;
                MyStack.push(w,i);
                i++;
            }

            if (q == 2) {
                if (i != 0) {
                    qwe = MyStack.pop();
                    cout <<endl<<"ELEMENT POP = "<<qwe;
                    i--;
                }else cout <<endl<<"Stack is empty!"<<endl<<"Enter correct!"<<endl;
            }

            if (q == 3) {
                if ( i != 0 ) {
                    MyStack.show();
                }else cout <<endl<<"Stack is empty!"<<endl;
                cout << endl;
            }

            if (q == 4){
                if ( i != 0 ) {
                    MyStack.peek();
                }else cout <<endl<<"Stack is empty!"<<endl;
                cout << endl;
            }
        }else cout <<endl<<"Enter correct!"<<endl;
    }
    return 0;
}