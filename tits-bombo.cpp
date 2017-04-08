#include<stdio.h>
#include<unistd.h>

int main()
{
    int i;
    char back[] = {8,8,8,8,8,8,8,8,8,8,8,8,0};
    char back2[] = {8,8,8,8,8,8,8,8,8,8,8,8,8,0};

    fprintf(stderr, "    . .\n     o\n\n");
    for(i = 0; i < 20; ++i)
    {
        fprintf(stderr, "  (+)(+)   ");
        usleep(500000);
        fprintf(stderr, "%s", back);
        fprintf(stderr, " (+ ) ( +)   ");
        usleep(500000);
        fprintf(stderr, "%s", back2);
    }
    return 0;
}
