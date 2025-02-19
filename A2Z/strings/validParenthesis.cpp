#include<bits/stdc++.h>
using namespace std;

bool isValid(int n, string s){

    stack<char>st;

    for(int i = 0; i<n; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if(!st.empty()){
            if(s[i] == ')' && st.top() == '('){
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{'){
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    return st.empty();
}

int main(){
    int n;
    cout<<"Enter the size of a string"<<endl;

    cin>>n;

    string s;
    cout<<"Enter the string"<<endl;

    cin>>s;

    isValid(n,s);

    if(isValid(n,s)){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
    }
}