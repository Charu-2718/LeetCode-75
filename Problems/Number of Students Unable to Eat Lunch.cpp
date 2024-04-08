class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int len = students.size();
        queue<int> que;
        for(auto i:students)
            que.push(i);
        stack<int> st;
        for(int i=len-1;i>=0;i--) 
            st.push(sandwiches[i]);
        int count=0;
        while(!que.empty() && count<que.size()){
            if(que.front()==st.top()){
                que.pop();
                st.pop();
                count=0;
            }
            else{
                int a=que.front();
                que.pop();
                que.push(a);
                count++;
            }
        }
        return st.size();
        
    }
};