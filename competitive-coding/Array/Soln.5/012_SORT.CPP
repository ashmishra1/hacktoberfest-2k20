void main()
{
  int i,j,k,A[10]={0,2,0,1,1,2,1,0,1,2};
  for(i=0;i<9;i++,j=i+1)
  {
       loop;
    if(j<10)
    {
       if(A[j]<A[i])
       {
	 k=A[j];
	 A[j]=A[i];
	 A[i]=k;
       }
       if(A[j]==A[i])
       {
	 i++;
	 k=A[i];
	 A[i]=A[j];
	 A[j]=k;

       }
	 j++;
	 goto loop;
     }  
   }
}
