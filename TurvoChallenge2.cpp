#include <iostream>
using namespace std;
char grid[101][101];

bool isAnyoneWinning(int n){
    //check for row
    for(int i=1;i<=n;i++){
    bool flag=true;
    for(int j=2;j<=n;j++){
        if(grid[i][j]==grid[i][1] && grid[i][j]!=' '){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
    return true;
    }
    
    //check for column
    for(int j=1;j<=n;j++){
    bool flag=true;
    for(int i=2;i<=n;i++){
        if(grid[i][j]==grid[1][j] && grid[i][j]!=' '){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
    return true;
    }
    
    //check in diagonal
    bool flag=true;
    for(int i=2;i<=n;i++){
        if(grid[i][i]==grid[1][1] && grid[i][i]!=' '){
            flag=true;
        }else{
            flag=false;
            break;
        }
    }
    if(flag)
    return true;
    
    flag=true;
    for(int i=2;i<=n;i++){
        if(grid[i][n-i+1]==grid[1][n] && grid[i][n-i+1]!=' '){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
    return true;
    
    //else
    return false;
    
}

int main()
{
    int tc,n;
    int moves[10001][3];
    string player;
    cin>>tc;
    while(tc--){
        for(int i=1;i<101;i++){
        for(int j=1;j<101;j++){
            grid[i][j]=' ';
        }
    }
    cin>>player;
    cin>>n;
    for(int i=1;i<=n*n;i++){
        cin>>moves[i][1]>>moves[i][2];
    }
    int i=1;bool flag=false;
    for(;i<=n*n;i++){
        if(player[0]=='A'){
            grid[moves[i][1]][moves[i][2]]='A';
            player="Bob";
        }
        else{
            grid[moves[i][1]][moves[i][2]]='B';
            player="Alice";
        }
        if(isAnyoneWinning(n)){
            flag=true;
            break;
        }
    }
    if(flag){
        if(player[0]=='A'){
        cout<<"Bob wins on move "<<i<<endl;
        }
        else{
            cout<<"Alice wins on move "<<i<<endl;
        }
    }
    else{
        cout<<"Match drawn!"<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}
