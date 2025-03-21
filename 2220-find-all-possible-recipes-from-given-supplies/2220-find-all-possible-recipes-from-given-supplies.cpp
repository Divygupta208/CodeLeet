class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        
        int n = recipes.size();

          vector<string> result ; 
          unordered_set<string> st(begin(supplies) , end(supplies));
          vector<bool> cooked(n , false);
          int count = n ;
          while(count--){
            
            for(int i = 0 ; i<n  ; i++){
                
                if(cooked[i]){
                    continue;
                }

                bool canmake = true;


                for(int j = 0 ; j<ingredients[i].size() ; j++){
                   
                   if(!st.count(ingredients[i][j])){
                     canmake = false;
                     break;
                   }

                }

                if(canmake){
                    st.insert(recipes[i]);
                    result.push_back(recipes[i]);
                    cooked[i] = true;
                }

 
            }
                          
 
          }
       
       return result ; 

    }
};