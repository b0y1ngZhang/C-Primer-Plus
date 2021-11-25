/*hotel.h -- character constants and all the function prototypes in hotel.c*/
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "**********************************"
//show the selection list
int menu(void);
//return the number of booking days
int getnights(void);
//cost based on rates and days of occupancy
//and display the results
void showprice(double rate, int nights);