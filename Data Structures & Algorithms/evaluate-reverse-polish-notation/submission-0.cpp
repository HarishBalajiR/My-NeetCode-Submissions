class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> opstack; //operand stack
        for(string s : tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                int firstpop = opstack.top();
                opstack.pop();
                int secondpop = opstack.top();
                opstack.pop();
                int result = 0;
                switch(s[0]){
                    case '+':
                        result = (secondpop + firstpop);
                        break;
                    case '-':
                        result = (secondpop - firstpop);
                        break;
                    case '*':
                        result = (secondpop * firstpop);
                        break;
                    case '/':
                        result = (secondpop / firstpop);
                        break;
                }
                opstack.push(result);
            }
            else opstack.push(stoi(s));
        }
        return opstack.top();
    }
};
/*
Observations:
1. Dry run for example 1
push 1
push 2
+ encountered -> Pop two elements
1 + 2 = 3
Push 3

then
push 3
push * -> Pop two elements
3 * 3 = 9
push 9

then
push 4
push -> pop two elements
9 - 4 = 5

second pop - first pop (Postfix -> Infix)
because its right -> left

operands -> operator

8 2 / -> 8/2 = 4
9 4 - -> 9-4 = 5
*/
