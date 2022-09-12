#include "header.h"

// support function for know answer
bool isBadVersion(int unknVerNum, int badVerNum)
{
    return !(unknVerNum == badVerNum);
}

    int firstBadVersion(int n) {
        int min = 0;
        int max = n;
        int search = (max + min)/2;
        while(search > 0)
        {
            if((isBadVersion(search) == true) && (isBadVersion(search-1) == false))
            {
                break;
            }
            else if(isBadVersion(search) == true)
            {
                max = search;
            }
            else
            {
                min = search;
            }
        }
        return search;
    }