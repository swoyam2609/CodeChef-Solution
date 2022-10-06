#include <iostream> 
using namespace std; 
 
int main() { 
    int n; 
    cin >> n; 
    while (n--) { 
        int a, b; 
        cin >> a >> b; 
        int board[8][8]; 
        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                board[i][j] = 0; 
            } 
        } 
        board[a - 1][b - 1] = 1; 
        if ((a == 1 && b == 1)) 
            board[2 - 1][3 - 1] = 2; 
        else if ((a == 1 && b == 8)) 
            board[2 - 1][6 - 1] = 2; 
        else if (a == 8 && b == 1) 
            board[7 - 1][3 - 1] = 2; 
        else if (a == 8 && b == 8) 
            board[7 - 1][6 - 1] = 2; 
        else if (a == 1) { 
            board[a + 2 - 1][b - 1 - 1] = 2; 
            board[a + 2 - 1][b + 1 - 1] = 2; 
        } else if (a == 8) { 
            board[a - 2 - 1][b - 1 - 1] = 2; 
            board[a - 2 - 1][b + 1 - 1] = 2; 
        } else if (b == 1) { 
            board[a - 1 - 1][b + 2 - 1] = 2; 
            board[a + 1 - 1][b + 2 - 1] = 2; 
        } else if (b == 8) { 
            board[a - 1 - 1][b - 2 - 1] = 2; 
            board[a + 1 - 1][b - 2 - 1] = 2;
            } else if (a == 2 && b == 2) { 
            board[a - 1 - 1][b + 3 - 1] = 2; 
            board[a + 2 - 1][b - 1 - 1] = 2; 
        } else if (a == 2 && b == 7) { 
            board[a - 1 - 1][b - 2 - 1] = 2; 
            board[a + 3 - 1][b + 1 - 1] = 2; 
        } else if (a == 7 && b == 2) { 
            board[a + 1 - 1][b + 3 - 1] = 2; 
            board[a - 2 - 1][b - 1 - 1] = 2; 
        } else if (a == 7 && b == 7) { 
            board[a + 1 - 1][b - 3 - 1] = 2; 
            board[a - 2 - 1][b + 1 - 1] = 2; 
        } else if (a == 2) { 
            board[a - 1 - 1][b - 2 - 1] = 2; 
            board[a + 1 - 1][b + 2 - 1] = 2; 
        } else if (a == 7) { 
            board[a - 1 - 1][b - 2 - 1] = 2; 
            board[a + 1 - 1][b + 2 - 1] = 2; 
        } else if (b == 2) { 
            board[a - 2 - 1][b - 1 - 1] = 2; 
            board[a + 2 - 1][b + 1 - 1] = 2; 
        } else if (b == 7) { 
            board[a - 2 - 1][b + 1 - 1] = 2; 
            board[a + 2 - 1][b - 1 - 1] = 2; 
        } else { 
            board[a - 1 - 1][b - 2 - 1] = 2; 
            board[a + 1 - 1][b + 2 - 1] = 2; 
        } 
 
        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                cout << board[i][j] << " "; 
            } 
            cout << endl; 
        } 
    } 
}