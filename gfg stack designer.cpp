
/* _push function to insert elements of array to
   stack
*/

stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   
   stack <int> s;
   if(n==0){
       return s;
   }
   else{
       for(int i=0;i<n;i++){
           s.push(arr[i]);
       }
   }
   return s;
  
   
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    //print top and pop for each element until it becomes empty
    if(s.empty()){
        return;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
