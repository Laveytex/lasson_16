#include <iostream>
#include <time.h>

void DoArray()
{
    const int ArraySize=5;
    int Array[ArraySize][ArraySize];

    for (int i = 0; i < ArraySize; i++)
    {
        for (int j = 0; j < ArraySize; j++)
        {
            Array[i][j]=i+j; 
            std::cout << Array[i][j];
        }
        std::cout << '\n';
        }
    std::cout << '\n';


}

void ÑalculationNum()
{
    struct tm buf;
    time_t Time = time(NULL);
    const int ArraySize = 5;
    int Array[ArraySize][ArraySize];
    int Day = 0;
    int Modulo = 0;
    int NumberSumm = 0;

    localtime_s(&buf, &Time);
    Day = buf.tm_mday;
    Modulo = ArraySize % Day;

    for (int i = 0; i < ArraySize; i++)
    {
        for (int j = 0; j < ArraySize; j++)
        {
            Array[i][j] = i + j;
            std::cout << Array[i][j];
            NumberSumm = NumberSumm + Array[Modulo][j];

        }
       
        
        std::cout << '\n';
    }
    std::cout << '\n';

    
    std::cout << NumberSumm;
    




}

void GetDate()
{
    struct tm buf;
    time_t Time = time(NULL);
    localtime_s(&buf, &Time);
    std::cout <<"Date: "<< buf.tm_mday << '\n';
}

int main()
{   
   //GetDate();
   //DoArray();
   ÑalculationNum();
}

