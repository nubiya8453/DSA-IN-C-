class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string curr = "";
        for (int i = 0; i <= path.size(); i++)
        {
            if (i == path.size() || path[i] == '/')
            {
                if (curr == "..")
                {
                    if (st.size() > 0)
                        st.pop();
                }
                else if (curr != "" && curr != ".")
                {
                    st.push(curr);
                }
                curr = "";
            }
            else
            {
                curr += path[i];
            }
        }
        string ans = "";
        while (st.size() > 0)
        {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if (ans == "")
            return "/";
        else
            return ans;
    }
};