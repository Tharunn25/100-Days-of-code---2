class Solution{
public:
    int isLeap(int N){
        //code here
        if( (N%400 == 0) || (N%4==0 && N%100!=0)) return 1;
        return 0;
    }
};
