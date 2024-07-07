#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char>st;

    for(char &ch: s){
        if(ch=='('){
            st.push(')');
        }
        else if(ch=='{'){
            st.push('}');
        }
        else if(ch=='['){
            st.push(']');
        }
        else if(st.empty() || st.top()!=ch){
            //st.empty() means we didnt encounter opening brackets ie: string is }])
            //st.top()!=ch checking that curr char is not same as top, then return false else pop becuase it is same
            return false;
        }
        else{
            st.pop();
            //this means we got matching one pop it
        }
    }
    return st.empty();
}
int main(){
    string s="[](){}";
    cout<<isValid(s);
}

// if we opening brace push corresponding close brace and check 
//Time Complexity: O(N)
