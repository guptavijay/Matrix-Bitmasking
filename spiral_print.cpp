#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3,m=3;
	    vector< vector<int> > v;
	      vector<int> v1;
	      int x=1;
	    for(int i=0;i<n;i++)
	    {for(int j=0;j<m;j++)
	        {
	            v1.push_back(x);
	            x++;
	        }
	        v.push_back(v1);
	        v1.erase(v1.begin(),v1.end());
	    }
	     int i=0,j=0;

	     while(v[i][j])
         {
             while(j<m)
             {
                 if(v[i][j])
                 {
                     cout<<v[i][j]<<" ";
                     v[i][j]=0;
                     j++;
                 }
             }
             //i=0,j=4;
             j=j-1;

             while(i<n)
             {

                 if(v[i][j])
                 {
                     cout<<v[i][j]<<" ";
                     v[i][j]=0;

                 }
                 i++;
             }

             //i=4,j=3;
             i=i-1;
             while(j>=0)
             {
                 if(v[i][j])
                 {
                     cout<<v[i][j]<<" ";
                     v[i][j]=0;
                 }
                 j--;
             }
            // cout<<i<<" "<<j;
             // i=3,j=-1;
             j++;
             while(i>=0)
             {
                 if(v[i][j])
                 {
                     cout<<v[i][j]<<" ";
                     v[i][j]=0;
                 }
                 i--;
             }
             //i=-1, j=0
             i++;

             i++;
             j++;
            m--;
            n--;

         }


    return 0;
}
