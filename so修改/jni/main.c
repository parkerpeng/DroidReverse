#include <stdio.h>

void say(char* name)
{
    printf("Hello %s , let`s hurt each other!\n" , name);
    
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf("you must tell me your name!\n");
        return -1;
    }   
    say(argv[1]);
  
    return 0;
}