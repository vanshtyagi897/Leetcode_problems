class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="";
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                string str = number;//we don't want changes in the original string
                str.erase(i,1); 
                maxi=max(str,maxi);
            }
        }
        return maxi;
    }
};