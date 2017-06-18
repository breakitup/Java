#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int tc,n,k;
    char grid[1001][1001];
    int dp[1001][1001];
    int countPolice[1001]={0};
    int maximumCaughtThieves=0;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        getchar();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
                dp[i][j]=0;
                if(grid[i][j]=='P')
                countPolice[i]++;
            }
        }
      for(int i=0;i<n;i++){
          int nearestPolice=-1;
          for(int j=0;j<n;j++){
              if(grid[i][j]=='P'){
                  nearestPolice=j;
                  dp[i][j]=-1;
              }
              else if(nearestPolice==-1){
                  dp[i][j]=-1;
              }
              else
              dp[i][j]=j-nearestPolice;
          }
      }
      for(int i=0;i<n;i++){
          int nearestPolice=-1;
          for(int j=n-1;j>=0;j--){
              if(grid[i][j]=='P'){
                  nearestPolice=j;
                  dp[i][j]=-1;
              }
              else if(nearestPolice!=-1){
                  if(dp[i][j]!=-1)
                  dp[i][j]=min(dp[i][j],nearestPolice-j);
                  else
                  dp[i][j]=nearestPolice-j;
              }
          }
      }
      
      for(int i=0;i<n;i++){
          int countThieves=0;
          for(int j=0;j<n;j++){
              //cout<<dp[i][j]<<" ";
              if(dp[i][j]!=-1 && dp[i][j]<=k){
                  countThieves++;
              }
          }
          maximumCaughtThieves+=min(countThieves,countPolice[i]);
          //maximumCaughtThieves+=countThieves;
          cout<<endl;
      }
    }
    cout<<maximumCaughtThieves<<endl;
}
