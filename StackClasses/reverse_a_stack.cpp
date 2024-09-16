public:
    void put_to_bottom(stack<int> & st, int element)
    {
        if(st.empty())
        {
            st.push(element);
            return;
        }
        int temp = st.top();
        st.pop();
        
        put_to_bottom(st,element);
        st.push(temp);
        
    }
    void Reverse(stack<int> &st){
        //base case;
        if(st.empty())
        {
            return;
        }
        int top_element = st.top();
        st.pop();
        //make recursive call;
        Reverse(st);
        //function to put the element in bottom of stack;
        put_to_bottom(st, top_element);
    }