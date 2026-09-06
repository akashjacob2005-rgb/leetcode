class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int ast : asteroids){
            while(!st.empty() && st.top()>0 && ast <0){
                if(st.top() < -ast){
                 st.pop();
                }
                else if(st.top() == -ast){
                 st.pop();
                 ast=0;
                 break;
                }
                else{
                 ast=0; break;
                }
            }
            if(ast != 0){
                st.push(ast);
            }
        }

        vector<int>ans(st.size());

        for(int i=st.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
        
    }
};