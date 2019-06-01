#include <iostream>
#include <string>
#include <algorithm>

bool IsPolindrom(std::string);
int qVowels(std::string);
std::string GetUpperString(std::string);
std::string LineWithSpace(const std::string[], const int sizeArray);
int GoodDay(const std::string);

int main()
{
    std::cout << " Enter the string 1 : ";
    std::string pol;
    getline(std::cin, pol);

    std::cout << (IsPolindrom(pol) == false ? "not polindrom" : "polindrom") << std::endl;
    std::cout << "_________________\n";


    std::cout << " Enter the string 2 : ";
    std::string vowels;
    getline(std::cin, vowels);

    std::cout << "Vowels [a][e][i][o][u]: " << qVowels(vowels) << std::endl;
    std::cout << "_________________\n";


    std::cout << " 1/2 upper symb : " << GetUpperString(vowels) << std::endl;
    std::cout << "_________________\n";

    const int sizeArray = 4;
    std::string lines[sizeArray] = {"I", "LOVE", "STD", "String"};
    std::cout << "Line with space : " << LineWithSpace(lines, sizeArray) << std::endl;
    std::cout << "_________________\n";



    std::string line = "Good day String! Today is beautiful!";
    std::cout << " sybm \"a\" : " << GoodDay(line) << std::endl;
    std::cout << "_________________\n";

    return 0;
}


bool IsPolindrom(std::string pol)
{
    auto its = pol.begin();
    auto itend = pol.end() - 1;

    for(size_t i = 0; i < pol.length() / 2; i++)
        if(*(its++) != *(itend--))
            return false;

    return true;
}

int qVowels(std::string word)
{
    int count = 0;
    size_t next = 0;

    std::transform(word.begin(), word.end(), word.begin(), ::tolower);

    char arr[] = "aeiou";


        for (int i = 0; i < 5; i++)
        {
            next = 0;
            while (next != std::string::npos)
            {

                if((next = word.find(arr[i], next)) == std::string::npos) break;

                count++;
                next ++;
            }

        }



    return count;
}

std::string GetUpperString(std::string str)
{
    std::string tmpStr = str;
    for (size_t i = 0; i < str.length() - 1; i++)
        if(i % 2)
            std::transform(str.begin() + i, str.begin() + (i + 1), tmpStr.begin() + i, ::toupper);

    return tmpStr;
}


std::string LineWithSpace(const std::string str[], const int sizeArray)
{
    std::string result = "";

    for(size_t i = 0; i < sizeArray; i++)
        result += str[i] + " ";
    return result;
}


int GoodDay(const std::string str)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        size_t j = str.find("a", i);
        if(j != std::string::npos)
        {
            count ++;
            i += j;
        }
    }
    return count;
}









