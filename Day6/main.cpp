#include <iostream>
#include <math.h>

enum chess
{
    empty = 88,
    pawn = 9,
    bishop = 6,
    rook = 5,
    knight = 3,
    queen = 2,
    king = 4
};

//day 6.1
void ShessFunction();


// day 6.2

//Scope
inline double Figure(double );

//Cylinder
inline double Figure(double, double);

inline double* GetArr(int);


inline void Circle(int, double&);

int main()
{

    ShessFunction();

    std::cout << "Scope V : " << Figure(5.5) << std::endl;
    std::cout << "Cylinder V : " << Figure(5.5, 2.1) << std::endl << std::endl;

    const int arrSize = 5;
    double *arr = GetArr(arrSize);
    for(int i = 0; i < arrSize; i ++)
    {
        arr[i] = i * 2;
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl << std::endl;

    double res = 0;
    Circle(4, res);
    std::cout << "Circle P : " << res;


    return 0;
}


void ShessFunction()
{
    const int arrRow = 8;
        const int arrCol = 8;

        int shessboard[arrRow][arrCol] =
        {
            {bishop, rook, knight, queen, king, knight, rook, bishop},
            {pawn, pawn, pawn, pawn, pawn, pawn, pawn, pawn },
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {empty, empty, empty, empty, empty, empty, empty, empty},
            {pawn, pawn, pawn, pawn, pawn, pawn, pawn, pawn },
            {bishop, rook, knight, queen, king, knight, rook, bishop}
        };


        char symb = ' ';
        for (int i = 0; i < arrRow; i++)
        {
            for (int j = 0; j < arrCol; j++)
            {
                symb = static_cast<char>(shessboard[i][j]);
                std::cout << symb  << ' ' ;
            }
            std::cout << std::endl;
        }
}


//Scope
inline double Figure(double r)
{
    return 4 * M_PI * (r * 3);
}
//Cylinder
inline double Figure(double r, double h)
{
    return M_PI * (r * 2) * h;
};

inline double* GetArr(int sizeArr)
{
   return new double[sizeArr]();
}


inline void Circle(int r, double &result)
{
    result = 2 * M_PI * r;
}
