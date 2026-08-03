class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                char top = st.top();
                if(ch==')'){
                    if(top=='('){
                        st.pop();
                    }
                    else return false;
                }
                else if(ch==']'){
                    if(top=='['){
                        st.pop();
                    }
                    else return false;
                }
                else{
                    if(top=='{'){
                        st.pop();
                    }
                    else return false;
                }
            }
        }
        return st.empty();
    }
};
