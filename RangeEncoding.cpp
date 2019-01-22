/**
*    @author Prabodh Ranjan Swain
*    Institution - ASET, New Delhi
*/

class RangeEncoding{
    public:
        int minRanges(int[] arr){
            int c=0,k=arr[0];
            for(int i=1;i<(sizeof(arr)/sizeof(int));i++){
                if(arr[k]!=k+1){
                    k=arr[k];
                    c++;
                }
                else k++;
            }
            return ++c;
        }
};
