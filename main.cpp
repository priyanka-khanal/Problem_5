#include <iostream>

using namespace std;

bool divisible;

int main()
{
    for (long num = 2520; ; num += 20){
        divisible = true;
        for (int j = 20; j > 10; j--){
            if (!(num%j == 0))
            {
                divisible = false;
                break;
            }
        }
        if (divisible)
        {
            cout <<num  << endl;
            break;
        }
    }
    return 0;
}