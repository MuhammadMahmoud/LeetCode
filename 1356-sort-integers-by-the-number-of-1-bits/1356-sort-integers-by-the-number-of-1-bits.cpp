class Solution {
public:
    unsigned int Onebits(unsigned int num){
        int count=0;
        for(int i=0;i<sizeof(unsigned int)*8;i++){
            if(num&1 == 1){
                count++;
            }
            num>>=1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        unsigned int min,ind,temp;
        for(int i=0;i<arr.size()-1;i++){
            ind=i;
            min=Onebits(arr[i]);
            for(int j=i+1;j<arr.size();j++){
                if( (min>Onebits(arr[j])) || 
                   ( min == Onebits(arr[j]) && arr[ind] > arr[j] ) ){
                    ind=j;
                    min=Onebits(arr[j]);
                }
            }
            if(ind != i){
                temp=arr[i];
                arr[i]=arr[ind];
                arr[ind]=temp;
            }
        }
        return arr;
    }
};