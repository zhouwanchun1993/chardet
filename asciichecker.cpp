#include "asciichecker.h"

AsciiChecker::AsciiChecker()
    :CheckerBase("ascii")
{

}

bool AsciiChecker::detect(string str) const
{
    for(unsigned char ch:str)
    {
        if(ch >> 7) // whether the first bit is 1
        {
            return false;
        }
    }
    return true;
}

AsciiChecker _asciichecker = AsciiChecker();
