#include <iostream>
using namespace std;
#include <vector>

int main(){
    
    /* code */
    vector<vector<int>> g = {{2, 4},
                             {3, 6},
                             {5, 10}};

    for(int i=1;i>=0;i--){
        for(int j=0;j<2; j++){
            cout << "i: " << i << ", j: " << j << ", g[i][j]: " << g[i][j] << endl;  
          g[i][j] += g[j][i];  
        }
            
    }

    cout << g[1][1] << endl;
    return 0;
}