class Solution {
public:
    string decodeString(string s) {

        stack<int>numstack;
        stack<string>strstack;

        int num=0;
        string curr="";

        for(char c : s){
            if(isdigit(c)){
                num = num * 10 +(c - '0');
            }
            else if(c == '['){
                numstack.push(num);
                strstack.push(curr);

                num=0;
                curr = "";
            }
            else if(c == ']'){
                int repeat = numstack.top();
                numstack.pop();

                string prev = strstack.top();
                strstack.pop();

                string temp = "";

                for(int i=0; i<repeat; i++){
                    temp += curr;
                }

                curr = prev + temp;
            }
            else{
                curr += c;
            }
        }
        return curr;
        
    }
};