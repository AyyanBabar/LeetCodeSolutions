class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto a:s){
            if(a=='('||a=='['||a=='{')
                stk.push(a);
            else
                if(!stk.empty() && (stk.top()==a-1||stk.top()==a-2))
                    stk.pop();
                else
                    return false;
            
        }
        if(!stk.empty())
            cout<<stk.top();
        return stk.empty();
    }
};