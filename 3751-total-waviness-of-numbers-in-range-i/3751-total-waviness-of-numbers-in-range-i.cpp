class Solution {
public:
    int demo(int num1){
        int cnt=0;
        string ans=to_string(num1);
        for(int i=1;i<ans.size()-1;i++){
           int a = ans[i] - '0';
            int b = ans[i+1] - '0';
            int c = ans[i-1] - '0';
        if(a>b && a>c || a<b && a<c)     cnt++;
        }
        return cnt;
    }

    int totalWaviness(int num1, int num2) {
        
        int cnt=0;
        for(int i=num1;i<=num2;i++){
            cnt+=demo(i);
        }
       return cnt;
    }
};