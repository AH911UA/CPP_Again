#include <iostream>

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

int main()
{
std::locale::global(std::locale("en_US.UTF-8"));
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

    return 0;
}
