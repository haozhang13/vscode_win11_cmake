#include "iostream"
#include "myadd.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "hello fisrt win11 cmake_vscode!" << std::endl;
    int a = 10;
    int b = 20;
    int c = 10 +20;

    int m = add(a, b);
    int n = sub(a, b);

    printf("m = %d, n = %d", m , n);
    return 0;
}
