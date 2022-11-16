#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

void ZZ(int frequency[], int responses[], rsize_t rese, rsize_t frse);


// function main begins program execution
int main(void)
{
    // initialize frequency counters to 0
    int F[FREQUENCY_SIZE] = { 0 };

    // place the survey responses in the responses array
    int R[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    ZZ(F,R, RESPONSES_SIZE, FREQUENCY_SIZE);

}

void ZZ(int frequency[], int responses[],rsize_t rese, rsize_t frse)
{
    for (size_t answer = 0; answer < rese; ++answer) {
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%17s\n", "Rating", "Frequency");

    // output the frequencies in a tabular format
    for (size_t rating = 1; rating < frse; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }
}
