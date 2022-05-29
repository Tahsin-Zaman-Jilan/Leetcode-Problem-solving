class MinStack {
    stack<long long>st;
    long long  mini; 
public:
    MinStack() {
         mini=INT_MAX;
        
    }
    
    void push(long long  val) {
       
        if(st.empty()==1){
            mini=val;
            st.push(val);
        }
        
        else {
            
            if(mini>val){
                long long a=2*val-mini;
                st.push(a);
                mini=val;
                
            }
            else {
                 st.push(val);
            }
            
        }
        
        
        
    }
    
    void pop() {
        
        long long t=st.top();
        st.pop();
        
        if(t<mini){
            mini=2*mini-t;
        
            
        }
        
        
    }
    
    int top() {
        
        long long t=st.top();
        
        if(t<mini){
            
            return mini;
        }
        else {
            return t;
        }
        
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */