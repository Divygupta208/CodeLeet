class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
       
       int sumO = 0;
int sumE= 0;

for (int i = 0; i < n; i++) {
    sumO += (2 * i + 1); 
    sumE += (2 * i + 2);
}

       
    while (sumE != 0) {
        int rem = sumO % sumE;
        sumO = sumE;
        sumE = rem;
    }


         return sumO;    

    }
};