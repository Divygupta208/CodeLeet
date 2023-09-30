class Solution {
public:
    
    int countStudent(vector<int>& books , int pages){
        
        int student =  1 ;
        long long pagesStudent = 0;
        for(int i = 0 ; i<books.size(); i++){
            
            if(pagesStudent+ books[i] <= pages){
                pagesStudent += books[i];
            }else{
                student++;
                pagesStudent = books[i];
            }
        }
        return student;
    }
    
    int shipWithinDays(vector<int>& books, int student) {
        
        int low = *max_element(books.begin() , books.end());
        
        int high = accumulate(books.begin() , books.end() , 0);
        
        while(low<=high){
            
            int mid = (low+high)/2;
            
            int students = countStudent(books , mid);
            
            if(students> student){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        return low ;
    }
};