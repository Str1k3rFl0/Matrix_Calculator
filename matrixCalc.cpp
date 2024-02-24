#include <windows.h>
#include <iostream>
#include <conio.h>

class Matrix
{
public:
    void createMatrixA(int arrA[][2]);
    void createMatrixB(int arrB[][3]);

    void createMatrix2x2(int arrA[][2], int arrB[][2]);
    void createMatrix3x3(int arrA[][3], int arrB[][3]);

    void showMatrixA(int arrA[][2]);
    void showMatrixB(int arrB[][3]);

    void showMatrix2x2(int arrA[][2], int arrB[][2]);
    void showMatrix3x3(int arrA[][3], int arrB[][3]);

    void addTwoMatrix(int arrA[][2], int arrB[][2]);
    void subTwoMatrix(int arrA[][2], int arrB[][2]);
    void mulTwoMatrix(int arrA[][2], int arrB[][2]);
    void detMatrix2x2(int arrA[][2]);

    void addTwoMatrix(int arrA[][3], int arrB[][3]);
    void subTwoMatrix(int arrA[][3], int arrB[][3]);
    void mulTwoMatrix(int arrA[][3], int arrB[][3]);
    void detMatrix3x3(int arrB[][3]);
};

// Function to create the 2x2 matrix
void Matrix::createMatrixA(int arrA[][2])
{
    // Create MATRIX A
    std::cout << "\nEnter MATRIX A :: \n";
    for (std::size_t i { 0 }; i < 2; i++)
    {
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrA[i][j];
        }
    }
}

// Function to create the 3x3 matrix
void Matrix::createMatrixB(int arrB[][3])
{
    // Create MATRIX B
    std::cout << "\nEnter MATRIX B :: \n";
    for (std::size_t i { 0 }; i < 3; i++)
    {
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrB[i][j];
        }
    }
}

// Function to create two 2x2 matrix
void Matrix::createMatrix2x2(int arrA[][2], int arrB[][2])
{
    // Create MATRIX A
    std::cout << "\nEnter MATRIX A :: \n";
    for (std::size_t i { 0 }; i < 2; i++)
    {
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrA[i][j];
        }
    }

    // Create MATRIX B
    std::cout << "\nEnter MATRIX B :: \n";
    for (std::size_t i { 0 }; i < 2; i++)
    {
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrB[i][j];
        }
    }
}

// Function to create two 3x3 matrix
void Matrix::createMatrix3x3(int arrA[][3], int arrB[][3])
{
    // Create MATRIX A
    std::cout << "\nEnter MATRIX A :: \n";
    for (std::size_t i { 0 }; i < 3; i++)
    {
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrA[i][j];
        }
    }

    // Create MATRIX B
    std::cout << "\nEnter MATRIX B :: \n";
    for (std::size_t i { 0 }; i < 3; i++)
    {
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "Element["<<i<<"]["<<j<<"] = ";
            std::cin >> arrB[i][j];
        }
    }
}

// Function to show the 2x2 A matrix
void Matrix::showMatrixA(int arrA[][2])
{
    // Show MATRIX A
    std::cout << "\n\nMATRIX A\n";
    int (*p1)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p1 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "\t" << *(*p1 + j);
        }
        std::cout << '\n';
    }
}

// Function to show the 3x3 B matrix
void Matrix::showMatrixB(int arrB[][3])
{
    // Show MATRIX B
    std::cout << "\n\nMATRIX B\n";
    int (*p2)[3];
    for (std::size_t i { 0 }; i < 3; i++)
    {
        p2 = { &arrB[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "\t" << *(*p2 + j);
        }
        std::cout << '\n';
    }
}

// Function to show the 2x2 matrix
void Matrix::showMatrix2x2(int arrA[][2], int arrB[][2])
{
    // Show MATRIX A
    std::cout << "\n\nMATRIX A\n";
    int (*p1)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p1 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "\t" << *(*p1 + j);
        }
        std::cout << '\n';
    }

    // Show MATRIX B
    std::cout << "\n\nMATRIX B\n";
    int (*p2)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p2 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "\t" << *(*p2 + j);
        }
        std::cout << '\n';
    }
}

// Function to show the 3x3 matrix
void Matrix::showMatrix3x3(int arrA[][3], int arrB[][3])
{
    // Show MATRIX A
    std::cout << "\n\nMATRIX A\n";
    int (*p1)[3];
    for (std::size_t i { 0 }; i < 3; i++)
    {
        p1 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "\t" << *(*p1 + j);
        }
        std::cout << '\n';
    }

    // Show MATRIX B
    std::cout << "\n\nMATRIX B\n";
    int (*p2)[3];
    for (std::size_t i { 0 }; i < 3; i++)
    {
        p2 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "\t" << *(*p2 + j);
        }
        std::cout << '\n';
    }
}

// Function to add two 2x2 matrix
void Matrix::addTwoMatrix(int arrA[][2], int arrB[][2])
{
    createMatrix2x2(arrA, arrB);
    showMatrix2x2(arrA, arrB);

    // ADD MATRIX A + B
    std::cout << "\n\nMATRIX C = A + B\n";
    int (*p3)[2];
    int (*p4)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p3 = { &arrA[i] };
        p4 = { &arrB[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "\t" << *(*p3 + j) + *(*p4 + j);
        }
        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function to subtract two 2x2 matrix
void Matrix::subTwoMatrix(int arrA[][2], int arrB[][2])
{
    createMatrix2x2(arrA, arrB);
    showMatrix2x2(arrA, arrB);

    // SUBTRACT MATRIX A - B
    std::cout << "\n\nMATRIX C = A - B\n";
    int (*p3)[2];
    int (*p4)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p3 = { &arrA[i] };
        p4 = { &arrB[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            std::cout << "\t" << *(*p3 + j) - *(*p4 + j);
        }
        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function to multiply two 2x2 matrix
void Matrix::mulTwoMatrix(int arrA[][2], int arrB[][2])
{
    createMatrix2x2(arrA, arrB);
    showMatrix2x2(arrA, arrB);

    // MUL. MATRIX A * B
    std::cout << "\n\nMATRIX C = A * B\n";
    int (*p3)[2];
    int (*p4)[2];
    for (std::size_t i { 0 }; i < 2; i++)
    {
        p3 = { &arrA[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 2; j++)
        {
            int sum{};
            for (std::size_t k { 0 }; k < 2; k++)
            {
                p4 = &arrB[k];
                sum += *(*p3 + k) * *(*p4 + j);
            }
            std::cout << "\t" << sum;
        }
        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function for determinant of matrix A
void Matrix::detMatrix2x2(int arrA[][2])
{

    createMatrixA(arrA);
    showMatrixA(arrA);

    // Det. of the MATRIX
    int det{};
    det = { (arrA[0][0] * arrA[1][1]) - (arrA[0][1] * arrA[1][0]) };
    std::cout << "\nThe determinant of the MATRIX is :: " << det << '\n';

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function to ADD two 3x3 matrix
void Matrix::addTwoMatrix(int arrA[][3], int arrB[][3])
{
    createMatrix3x3(arrA, arrB);
    showMatrix3x3(arrA, arrB);

    // Add MATRIX A + B
    std::cout << "\n\nMATRIX C = A + B\n";
    int (*p3)[3];
    int (*p4)[3];
    for (std::size_t i { 0 }; i < 3; i++)
    {
        p3 = { &arrA[i] };
        p4 = { &arrB[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "\t" << *(*p3 + j) + *(*p4 + j);
        }
        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function to SUBTRACT two 3x3 matrix
void Matrix::subTwoMatrix(int arrA[][3], int arrB[][3])
{
    createMatrix3x3(arrA, arrB);
    showMatrix3x3(arrA, arrB);

    // SUBTRACT A - B
    std::cout << "\n\nMATRIX C = A + B\n";
    int (*p3)[3];
    int (*p4)[3];
    for (std::size_t i { 0 }; i < 3; i++)
    {
        p3 = { &arrA[i] };
        p4 = { &arrB[i] };
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            std::cout << "\t" << *(*p3 + j) - *(*p4 + j);
        }
        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function to MULTIPLY two 3x3 matrix
void Matrix::mulTwoMatrix(int arrA[][3], int arrB[][3])
{
    createMatrix3x3(arrA, arrB);
    showMatrix3x3(arrA, arrB);

    // MUL. A * B
    std::cout << "\n\nMATRIC C = A * B\n";
    for (std::size_t i { 0 }; i < 3; i++)
    {
        std::cout << "Line" << i + 1 << ':';
        for (std::size_t j { 0 }; j < 3; j++)
        {
            int sum{};

            for (std::size_t k { 0 }; k < 3; k++)
            {
                int (*pA) = &arrA[i][k];
                int (*pB) = &arrB[i][k];
                sum += *pA * *pB;
            }

            std::cout << "\t" << sum;
        }

        std::cout << '\n';
    }

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

// Function for determinant of the 3x3 matrix B
void Matrix::detMatrix3x3(int arrB[][3])
{
    createMatrixB(arrB);
    showMatrixB(arrB);

    // The determinant of the matrix
    int det { (arrB[0][0] * arrB[1][1] * arrB[2][2]) +
              (arrB[1][0] * arrB[2][1] * arrB[0][2]) +
              (arrB[2][0] * arrB[0][1] * arrB[1][2]) -
              (arrB[0][2] * arrB[1][1] * arrB[2][0]) -
              (arrB[1][2] * arrB[2][1] * arrB[0][0]) -
              (arrB[2][2] * arrB[0][1] * arrB[1][0]) };

    std::cout << "\nThe determinant of matrix B is :: " << det << '\n';

    std::cout << "\n\nPress ENTER to continue...";
    _getch();
}

class Menu : public Matrix
{
public:
    void menu();
};

void Menu::menu()
{
    char ch;

    int arrA[2][2];
    int arrB[2][2];

    int arrC[3][3];
    int arrD[3][3];

    do
    {
        system("cls");

        std::cout << "\n==================\n";
        std::cout << "\n      MATRIX      \n";
        std::cout << "\n==================\n";
        std::cout << "\n[1] ADD TWO MATRIX 2x2";
        std::cout << "\t[2] SUB TWO MATRIX 2x2";
        std::cout << "\t[3] MUL TWO MATRIX 2x2";
        std::cout << "\t[4] DET. OF MATRIX 2x2" << std::endl;
        std::cout << "\n[5] ADD TWO MATRIX 3X3";
        std::cout << "\t[6] SUB TWO MATRIX 3X3";
        std::cout << "\t[7] MUL TWO MATRIX 3x3";
        std::cout << "\t[8] DET. OF MATRIX 3X3";
        std::cout << "\n\nChoose one option :: ";
        std::cin >> ch;
        system("cls");
        switch (ch)
        {
            case '1': addTwoMatrix(arrA, arrB); break;
            case '2': subTwoMatrix(arrA, arrB); break;
            case '3': mulTwoMatrix(arrA, arrB); break;
            case '4': detMatrix2x2(arrA); break;
            case '5': addTwoMatrix(arrC, arrD); break;
            case '6': subTwoMatrix(arrC, arrD); break;
            case '7': mulTwoMatrix(arrC, arrD); break;
            case '8': detMatrix3x3(arrC); break;
            default: std::cout << '\a';
        }
    } while (ch != '0');
}

int main()
{
    Menu m;
    m.menu();

    return 0;
}
