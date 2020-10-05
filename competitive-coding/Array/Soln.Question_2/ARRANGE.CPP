#include<iostream.h>
#include<conio.h>
void main()
{
  int A[100],n,i,j,k;
  clrscr();
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>A[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n&&i<n-1;j++)
    {
      if(A[j]<A[i])
      {
	k=A[j];
	A[j]=A[i];
	A[i]=k;
      }
    }
    if((i-1)%2!=0&&i!=1&&i!=0)
    {
      k=A[i];
      A[i]=A[i-1];
      A[i-1]=k;
    }
  }
  for(i=0;i<n;i++)
  {
    cout<<A[i]<<" ";
  }
  getch();
}