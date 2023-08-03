class Solution {
public:

    long long int binarysearch( int x){
        int start = 0;
        int end = x;
        long long int ans = -1;
        long long int mid =  start + (end - start)/2;

        while( start <= end){

            long long int square = mid*mid;

            if( square > x){
                end = mid-1;
            }
            else if( square <x){
                ans = mid;
                start = mid+1;
            }
            else{
                return mid;
            }
            mid =  start + (end - start)/2;
        } 
        return ans; 
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
}; 