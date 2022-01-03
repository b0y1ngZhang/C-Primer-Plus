/*rand0.c -- generate random numbers*/
/*use ANSI C portable algorithm*/
static unsigned long int next = 1;

unsigned int rand0()
{
    /*magic formula for generating pseudo-random numbers*/
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}