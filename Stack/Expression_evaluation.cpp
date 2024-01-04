int postfix_eval(string str){
        stack<int> st;
        for(int i=0;i<str.length();i++){
            char x = str[i];
            if(isdigit(x)){
                st.push(x - '0');
            }
            else{
                int op1 = st.pop();
                int op2 = st.pop();
                switch(x){
                    case '+' : st.push(op2 + op1);
                                break;
                    case '-' : st.push(op2 - op1);
                                break;
                    case '*' : st.push(op2 *  op1);
                                break;
                    case '/' : st.push(op2 / op1);
                                break;
                }
             }
          }
          return st.pop();
}