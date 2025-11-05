class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(auto x:operations){
            if(x=="C"){
                st.pop();
            }
            else if(x=="D"){
                int top=st.top();
                top=2*top;
                st.push(top);
            }
            else if(x=="+"){
                int temp=st.top();
                st.pop();
                int sum=temp+st.top();
                st.push(temp);
                st.push(sum);
            }
            else{
                st.push(stoi(x));
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};