#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 /*
   №1 
    int array [7] = {2,3,4,5,2,8,10};
    std::cout << array[0];
    for (int i = 1; i < length; i ++)
    {
    std::cout << "," << array[i];
    }
}
*/

/*   
    №2.1
    int count = 0;
    int arr [] = {500,4,24,15,100,105};
    int length =  sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        count+=arr[i];
    }    
    
    
std::cout << count;
}
*/

/*
    №2.2
    int sum = 0;
    int i = 0;
    int arr [] = {500,4,24,15,100,105};
    int length = sizeof(arr) / sizeof(arr[0]);
    while (i < length)
    {
        sum+=arr[i];
        i++;
}

        std::cout << sum;   
}

*/

/*
    № 3
    int a;
    std::cin >> a;
    int count = 0;
    int arr [] = {2,4,6,8,10,12};
    int length =  sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++){
        if(length % 2 == 0);
            ++count; 
    }
    std::cout << count;
}
*/


/*
 №4
    int arr[] = {5,4,3,4,9};
    int *min = std::min_element(std::begin(arr), std::end(arr));
    std::cout  << *min;
}

*/

   /*
   №5
    int arr[] = {5,4,3,4,9};
    int *min = std::min_element(std::begin(arr), std::end(arr));
    int *max = std::max_element(std::begin(arr), std::end(arr));
    std::cout << *max - *min << std::endl;
    
}
*/

/*
№6
 int arr[] = {5, 4, 3, 4, 9};
    int max = arr[0];
    int pos = 0;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }

    cout << max << endl;
    cout << pos << endl;

}

*/
