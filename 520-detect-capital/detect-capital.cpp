class Solution {
public:
    bool detectCapitalUse(string word) {
       int count = 0;
       for(auto x:word){
        if(x>='A' && x<='Z'){
            count++;
        }
       } 
       if(count==word.size()){
        return true;
       }
       if(count==0){
        return true;
       }
       if(word[0]>='A' && word[0]<='Z' && count==1){
        return true;
       }
         return false;
    }
};