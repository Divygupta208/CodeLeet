class Solution {
public:
    int numWaterBottles(int B, int E) {
       
         int drank = B;
         int empty= B;
        while(empty>= E){
             
         int extra = empty/E;
         int remain = empty%E;
         drank+=extra;

         empty = remain+extra;
            
            

        }


        return drank;
    }
};