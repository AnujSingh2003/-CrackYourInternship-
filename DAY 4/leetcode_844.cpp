class Solution {
public:
    string trim(string s){
        int n=s.size();
        stack<int>st;
        string result;
        for(int i=0;i<n;i++){
            if(s[i]=='#'&&!st.empty()){
                st.pop();
        }
        else if(s[i]!='#'){
            st.push(s[i]);
        }
        }
        while(!st.empty()){
            result+=st.top();
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        string new_s = trim(s);
	string new_t = trim(t);

	if (new_s == new_t)
		return true;

	return false;
    }
};