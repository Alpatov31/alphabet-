#include <iostream>
#include <array>

using namespace std;
void n(array<string, 5 >& s)
{
    s[0] += "    #  ";
    s[1] += "  # #  ";
    s[2] += "  ###  ";
    s[3] += "  # #  ";
    s[4] += "  #    ";
}
void o(array<string, 5 > & s)
{
    s[0] += "    #     ";
    s[1] += "   # #    ";
    s[2] += "   # #    ";
    s[3] += "   # #    ";
    s[4] += "    #     ";
}
void m(array<string, 5 > & s)
{
    s[0] += "   # #    ";
    s[1] += "   ###    ";
    s[2] += "   ###    ";
    s[3] += "   # #    ";
    s[4] += "   # #    ";
}
void k(array<string, 5 > & s)
{
    s[0] += "   # #    ";
    s[1] += "   # #    ";
    s[2] += "   ##     ";
    s[3] += "   # #    ";
    s[4] += "   # #    ";
}
void i(array<string, 5 > & s)
{
    s[0] += "    ###   ";
    s[1] += "     #    ";
    s[2] += "     #    ";
    s[3] += "     #    ";
    s[4] += "    ###   ";
}
void g(array<string, 5 > & s)
{
    s[0] += "    ##    ";
    s[1] += "   #      ";
    s[2] += "   # #    ";
    s[3] += "   # #    ";
    s[4] += "    ##    ";
}
void e(array<string, 5 > & s)
{
    s[0] += "   ###   ";
    s[1] += "   #     ";
    s[2] += "   ##    ";
    s[3] += "   #     ";
    s[4] += "   ###   ";

}

void d(array<string, 5 >& s)
{
    s[0] += "  ##   ";
    s[1] += "  # #  ";
    s[2] += "  # #  ";
    s[3] += "  # #  ";
    s[4] += "  ##   ";
}
void c(array<string, 5 > & s)
{
    s[0] += "   ##   ";
    s[1] += "  #     ";
    s[2] += "  #     ";
    s[3] += "  #     ";
    s[4] += "   ##   ";

}
void b(array<string, 5 > & s)
{
    s[0] += "  ##   ";
    s[1] += "  # #  ";
    s[2] += "  ##   ";
    s[3] += "  # #  ";
    s[4] += "  ##   ";

}
void a(array<string, 5 > & s)
{
    s[0] += "   #   ";
    s[1] += "  # #  ";
    s[2] += "  ###  ";
    s[3] += "  # #  ";
    s[4] += "  # #  ";

}

void f(array<string, 5 >& s)
{
    s[0] += "  ### ";
    s[1] += "  #   ";
    s[2] += "  ### ";
    s[3] += "  #   ";
    s[4] += "  #   ";

}

void p(array<string, 5 >& s)
{
    s[0] += " ##  ";
    s[1] += " # # ";
    s[2] += " ##  ";
    s[3] += " #   ";
    s[4] += " #   ";

}

void j(array<string, 5 >& s)
{
    s[0] += "   ##    ";
    s[1] += "    #    ";
    s[2] += "    #    ";
    s[3] += "  # #    ";
    s[4] += "   #     ";

}

void l(array<string, 5 >& s)
{
    s[0] += "   #     ";
    s[1] += "   #     ";
    s[2] += "   #     ";
    s[3] += "   #     ";
    s[4] += "   ###   ";

}

void h(array<string, 5 >& s)
{
    s[0] += "  # # ";
    s[1] += "  # # ";
    s[2] += "  ### ";
    s[3] += "  # # ";
    s[4] += "  # # ";
}

void t(array < string, 5 > & s)
{
	s[0] += "  ###  "
	s[1] += "   #	"
	s[2] += "   #  	"
	s[3] += "   # 	"
	s[4] += "   #    "
}


int main()
{
    array<string, 5> screen;

    f(screen);
    g(screen);
    h(screen);
    i(screen);
    j(screen);
    k(screen);
    l(screen);
    m(screen);
    n(screen);
    o(screen);
    p(screen);
    t(screen);
    for (int i = 0; i < 5; i++)
        cout << screen[i] << endl;
    return 0;

}
