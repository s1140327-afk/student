/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int score[3] = {95, 68, 42};
    int temp;

    temp = score[2];
    score[2] = score[0];
    score[0] = temp;

    for (int i = 0; i < 3; i++)
    {
        std::cout << score[i] << " ";
    }

    return 0;
}


