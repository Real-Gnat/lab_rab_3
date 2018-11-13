#include <stdio.h>
#include <math.h>

const short N = 5;
int i, j, result;

void insertion_sort(int array[][N])
{

    int row = 5;

    for (int i = 0;i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            int current = j;
            int  previous = array[i][j];
            for (int h = j + 1; h < row; ++h)
            {
                if (array[i][h] > previous)
                {
                    current = h;
                    previous = array[i][h];
                }


            }
            array[i][current] = array[i][j];
            array[i][j] = previous;
        }
    }
}

void write_matrix(int matrix[][N])
{

    for (i = 0;i < N;i++, printf("\n"))
    {
        for (j = 0;j < N;j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }

    printf("\n");
}

/*void sum_dob()
{
    double dob, ser;
    ser += dob ; */


void result_dob(int matrix[][N])
{
    int   dob = 1;
    double ser;

    for (j = 0; j < N; j++)
    {
        for(i = 0; i < N; i++)
        {
            dob *= matrix[i][j];
        }
        printf("Dobutok: %d\n", dob);
        ser += dob;
        result = ser / 5;
        dob = 1;
    }
    printf("Result: %d", result);
}
dob = 0;


int main() {
    int matrix[N][N], i, j;

    printf("Write matrix:\n");

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }

        printf("\n");
        insertion_sort(matrix);
    }

    printf("\nSorted matrix:\n");

    write_matrix(matrix);
    result_dob(matrix);
    return 0; //done
}