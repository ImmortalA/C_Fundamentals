#include <iostream>
using namespace std;
#define size 3

int board[size][size] = {{9, 8, 7}, {2, 5, 6}, {1, 4, 3}};

void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void inputBoard()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << "Enter board[" << row << "][" << col << "]\n";
            cin >> board[row][col];
        }
    }
}

void printBoard()
{
    cout << "=================\n";
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << board[row][col] << "\t";
        }
        cout << "\n";
    }
    cout << "=================\n";
}

int main()
{
    // inputBoard();
    printBoard();

    return 0;
}
