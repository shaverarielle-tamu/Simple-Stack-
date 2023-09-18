#include <iostream>
#include <vector>

using namespace std;

template <typename T> class Stack {
    T top;
    int _size;
    public:
    vector <T> s;
    Stack() : _size(0) {};
    void push_top(T element) {
        ++_size;
        s.push_back(element);
        top=s[_size-1];
    }
    void pop_top() {
        if(!_isempty()){
            --_size;
            s.pop_back();
            top=s[_size-1];
        }
        else {
            cout << "Stack is empty." << endl;
        }
    }
    bool _isempty() {
        if(_size==0){
            return true;
        }
        return false;
    }
    int get_size() {
        return _size;
    }
    T get_top(){
        return top;
    }
    void print(){
        for(int i=0;i<_size;++i){
            cout << s[i] << " ";
        }
        cout << endl;
    }
};


int main () { 
    Stack <string> st;
    st.push_top("hello");
    st.push_top("hey");
    st.push_top("hi");
    st.push_top("greetings");
    cout << st.get_size() << endl;
    cout << st.get_top() << endl;
    st.print();
}