#include <iostream>
#include <array>

using namespace std;

{
    s[0] += " ##  ";
    s[1] += " # # ";
    s[2] += " ##  ";
    s[3] += " #   ";
    s[4] += " #   ";

}

int main()
{
    array<string, 5> screen;
    p(screen);
    for (int i = 0; i < 5; i++)
        cout << screen[i] << endl;
    return 0;
}
