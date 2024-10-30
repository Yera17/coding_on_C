#include <stdio.h>


// int main() {  /* count characters in input */
//   double nc;

//   for (nc = 0; getchar() != EOF; ++nc);
//     printf("%.0f\n", nc);
// }



int main() /* count characters in input */
{
    long nc = 0;

    while (getchar() != EOF) {
        ++nc;
    }

    printf("%ld\n", nc);
    return 0;
}
