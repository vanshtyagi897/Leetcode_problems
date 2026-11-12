class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0 && 
            (i==0 || flowerbed[i-1]==0) && //left side either DNE or  it's 0
            (i==flowerbed.size()-1 || flowerbed[i+1]==0)){ //right side either DNE or  it's 0
                
                flowerbed[i]=1; //place a flower here
                n--; 
            }
            if(n<=0) return true;
        }

        
        return false;
    }
};