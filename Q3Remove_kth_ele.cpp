#include<iostream>
#include<stack>
using namespace std;
//Q 2
void removek(stack<int> &st,int k){
    if(st.size()<k) return;
    stack<int> temp;
    for(int i =1;i<=k;i++){
        temp.push(st.top());
        st.pop();
    }
    temp.pop();
    while(temp.size()) st.push(temp.top()),temp.pop();
}
void print(stack<int> &st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()) {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    print(st);
    removek(st,3);
    print(st);


}