
#include <unistd.h>

int main(int argc, char const *argv[])
{
    char words[50];

    words = {"president", "attack", "Bauer"};
    int i;
    
    i = 0;
    if (argv[3] == 'squared')
    {
        write(1, "Alert!!!\n", 10);
    }
    
    return 0;
}
