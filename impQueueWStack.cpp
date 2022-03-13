
    int pop() {
        if(input.size() == 0 && output.size() == 0)
        {
            return -1;
        }
        
        if(output.size() == 0)
        {
            while(input.size()!= 0)
            {
                output.push(input.top());
                input.pop();
            }
        }
        
        int x = output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if(input.size() == 0 && output.size() == 0)
        {
            return -1;
        }
        
        if(output.size() == 0)
        {
            while(input.size()!= 0)
            {
                output.push(input.top());
                input.pop();
            }
        }
        
        return output.top();
    }
    
    bool empty() {
        return (input.size() == 0 && output.size() == 0);
    }
};