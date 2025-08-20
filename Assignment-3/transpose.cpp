int mat[MAX][3], transposed[MAX][3];
int rows, cols, nonZero;

cin >> rows >> cols >> nonZero;

mat[0][0] = rows;
mat[0][1] = cols;
mat[0][2] = nonZero;

for (int i = 1; i <= nonZero; i++)
    cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

void transposeSparse(int mat[][3], int transposed[][3]) {
    int rows = mat[0][0];
    int cols = mat[0][1];
    int nonZero = mat[0][2];

    // Header of transpose: rows and cols are swapped, NZ stays same.
    transposed[0][0] = cols;
    transposed[0][1] = rows;
    transposed[0][2] = nonZero;

    int k = 1;

    // SIMPLE TRANSPOSE:
    // For each possible column i in the original matrix...
    for (int i = 0; i < cols; i++) {
        // ...scan all non-zeros...
        for (int j = 1; j <= nonZero; j++) {
            // ...pick those that live in column i
            if (mat[j][1] == i) {
                // and write them with row/col swapped
                transposed[k][0] = mat[j][1]; // new row  = old col (i)
                transposed[k][1] = mat[j][0]; // new col  = old row
                transposed[k][2] = mat[j][2]; // value unchanged
                k++;
            }
        }
    }
}

