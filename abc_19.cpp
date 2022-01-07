// abc_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class Result
{
    SUCCESS,
    FAIL,
    ERROR_WRITE,
    ERROR_READ
};

enum class Another
{
    WORK,
    SUCCESS,
    FAIL
};

Another DoWork()
{
    return Another::FAIL;
}



int main()
{
    DoWork();
}

