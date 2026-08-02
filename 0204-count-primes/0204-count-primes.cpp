class Solution {
public:
    int countPrimes(int n) {
        if(n==0)return 0;
        vector<bool>arr(n,true);
        arr[0]=arr[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(arr[i])count++;
            int j=i+i;
            while(j<n){
                arr[j]=false;
                j=j+i;
            }
        }
        return count;
    }
};