class Solution {
public:
    string multiply(string num1, string num2) {

       if(num1=="0" || num2=="0"){
return "0";
       }
        if(num1=="1"){
            return num2;
        }
        
        if(num2=="1"){
            return num1;
        }
        
        
        string ans;
        int carry=0;
        
        int i=num1.size()-1,j=num2.size()-1;
        while(i>=0){
            int d1=num1[i]-'0';
            int d2=num2[j]-'0';
            int d=(d1*d2)+carry;
            carry=(d)/10;
            d=d%10;
            ans=to_string(d)+ans;
            i--;
            
            
        }
        
        
        if(carry!=0){
            ans=to_string(carry)+ans;
        }
        //cout<<ans<<"\n";
        
           int cnt =1;
        j=num2.size()-2;
        
        
        while(j>=0){
            i=num1.size()-1;
            string curr_ans ;
            carry=0;
            
            while(i>=0){
                int d1=num1[i]-'0';
            int d2=num2[j]-'0';
            int d=(d1*d2)+carry;
                
            carry=(d)/10;
                d=d%10;
            
            curr_ans=to_string(d)+curr_ans;
            i--;
            }
            
            if(carry!=0){
           curr_ans=to_string(carry)+curr_ans;
        }
            
           // cout<<curr_ans<<"\n";
            int x=curr_ans.size()-1;
            int carry1=0;
            string new_ans=ans.substr(ans.size()-cnt,cnt);
            for(int k=ans.size()-1-cnt;k>=0;k--){
                
                int d1=ans[k]-'0';
                int d2=curr_ans[x]-'0';
                 int d=(d1+d2+carry1)%10;
                carry1=((d1+d2)+carry1)/10;
               
                
                new_ans=to_string(d)+new_ans;
                
                x--;
                
                
            }
            
            
            
                while(x>=0){
                    int d=(carry1+(curr_ans[x]-'0'));
                    carry1=d/10;
                    d=d%10;
                    
                    new_ans=to_string(d)+new_ans;
                    x--;
                }
            
            
            if(carry1!=0){
                new_ans=to_string(carry1)+new_ans;
            }
            
            
            ans=new_ans;
            
            
            
            
           // cout<<"SUM = "<<ans<<"\n";
            j--;
            cnt++;
        }
        
        
        
        return ans ;
        
        
        
    }
};