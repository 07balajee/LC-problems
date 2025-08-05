class Solution {
public:

  int fib(int n) {
       if(n==0)return 0;
       vector<int>tab(n+1,-1);
       return fibtab(n,tab);
    }
    int fibtab(int n,vector<int>&tab)
    {
        tab[0]=0;
        tab[1]=1;
        for(int i=2;i<n+1;i++)
        {
            tab[i]=tab[i-1]+tab[i-2];
        }
        return tab[n];
    }
     
};