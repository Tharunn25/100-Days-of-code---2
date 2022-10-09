class Solution
{
    	int NthTerm(int n){
		   
		   if(isprime(n)) return 0;
		   int i=0;
		   while(true){
		       if(isprime(n-i) ||  isprime(n+i)){
		           break;
		       }
		       i++;
		   }
		   return i;
		}
		
		boolean isprime(int n){
		    if(n<2) return false;
		    for(int i=2;i<=Math.sqrt(n);i++){
		        if(n%i==0){
		            return false;
		        }
		    }
		    return true;
		}
}
