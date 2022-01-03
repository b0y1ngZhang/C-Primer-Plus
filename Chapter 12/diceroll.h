extern int roll_count;
// extern int roll_count; statements in header files(citation declarations)
// int roll_count = 0;    statements in source code files(definitive declarations)
/*A variable can only have one difinitive declaration,
but a declaration with extern is a reference declaration,
which can have multiple reference declarations.*/

int roll_n_dice(int dice, int sides);