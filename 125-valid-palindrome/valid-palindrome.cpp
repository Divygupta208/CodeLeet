class Solution {
public:
    bool isPalindrome(string s) {
          string str="",chk="",tmp="";
        for(char c: s){
            str+= tolower(c);
        }
        int n=str.size();
        for(int i=0;i<n;i++ )
{
    if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z')|| (str[i]<='9' && str[i]>='0')) chk+=str[i];
}   tmp=chk;
reverse(chk.begin(),chk.end());
if (chk==tmp) return 1;     

        return 0;
        
    }
};