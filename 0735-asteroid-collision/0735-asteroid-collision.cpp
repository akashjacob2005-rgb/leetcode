class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(int asteriod : asteroids){
            while(!st.empty() && st.top()>0 && asteriod<0){
                if(st.top() < -asteriod){
                    st.pop();
                }
                else if(st.top() == -asteriod){
                    st.pop();
                    asteriod =0;
                    break;
                }
                else{
                    asteriod=0;
                    break;
                }
            }

            if(asteriod!=0){
                st.push(asteriod);
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