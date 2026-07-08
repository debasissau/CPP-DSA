class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int maxi=0,n=arr.size();
        for(int i=0;i<n;i++){
            maxi= max(arr[i],maxi);
        }
        int s=1,e=maxi,ans=maxi;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long int hour=0;
            for(int i=0;i<n;i++){
                hour+=ceil((double)arr[i]/mid);
            }
            if(hour<=h){e=mid-1;ans=min(mid,ans);}
            else s=mid+1;
        }
        return ans;
    }
};