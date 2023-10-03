#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    /*int size = 5;
    int *a = new int[size];
    for( int i = 0; i < size; i++ )
    {
        cin >> a[i];
    }
    for(int i = 0; i < size/2; i++ )
    {
    int temp = a[i];
    a[i] = a[size - 1 - i];
    a[size-1-i] = temp;
    
        
    }
    for( int i = 0; i < size; i++)
    {
        std::cout a[i];
    }
    delete[] a;
    return 0;
}*/
/*
    char stroka [] = {"AaBbCcDdEeFfGg"};
    int count = 0;
    int countL = 0;
    int size = sizeof(stroka) / sizeof(stroka[0]);
    for(int i = 0; i < size; ++i)
    {
        if(stroka[i] > 64 && stroka[i] < 91)
        {
            ++count;
        }
        if(stroka[i] > 60 && stroka[i] < 91)
        {
            ++countL;
        }
}
        std::cout << count << std::endl;
        std::cout << countL << std::endl;

}
*/
/*
    char stroka[] = {"Aaa1234aaa"};
    int count = 0;
    int countA = 0;
    int size = sizeof(stroka) / sizeof(stroka[0]);
    for(int i = 0; i < size; ++i)
    {
        if  (stroka[i] == 'a' || stroka[i]=='A')
            count++;
    }
    std::cout << count  << std::endl;

}

*/
/*
    char stroka[] = {"aaaaaaaaaaaaaaa"};
    int size = sizeof(stroka) / sizeof(stroka[0]);
    for(int i = 0; i < size - 1; ++i)
    {
        stroka[i] = toupper(stroka[i]);
}

std::cout << stroka << std::endl;
}
*/
