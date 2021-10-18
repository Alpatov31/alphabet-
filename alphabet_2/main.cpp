#include <iostream>
#include <array>

using namespace std;

void c(array<string, 5 > & s)
{
    s[0] += "   ##   ";
    s[1] += "  #     ";
    s[2] += "  #     ";
    s[3] += "  #     ";
    s[4] += "   ##   ";

void b(array<string, 5 > & s)
{
    s[0] += "  ##   ";
    s[1] += "  # #  ";
    s[2] += "  ##   ";
    s[3] += "  # #  ";
    s[4] += "  ##   ";

void a(array<string, 5 > & s)
{
    s[0] += "   #   ";
    s[1] += "  # #  ";
    s[2] += "  ###  ";
    s[3] += "  # #  ";
    s[4] += "  # #  ";

}

int main()
{
    array<string, 5> screen;
    a(screen);
    b(screen);
    c(screen);
    for (int i = 0; i < 5; i++)
        cout << screen[i] << endl;
    return 0;

}
