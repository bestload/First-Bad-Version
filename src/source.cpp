#include "header.h"

// support function for know answer
bool isBadVersion(int unknVerNum, int badVerNum)
{
    return (unknVerNum == badVerNum);
}

int firstBadVersion(int n)
{
    /*
        Этапы:
            1. Проверить последнюю версию на ошибку
            2. Проверить версию по середине на ошибку
            3. Проверить версию предпоследнюю на ошибку
            4. Проверить версию посередине середины на ошибку и т.д.
    
    */
}