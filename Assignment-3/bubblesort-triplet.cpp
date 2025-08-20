 void bubbleSort(int mat[][3], int size) {
 for (int i = 1; i < size - 1; i++) { // n-1 iterations in bubble sort 
 for (int j = 1; j < size - i; j++) {  //element te ta hi paunchange i=1 j=1 hou je
                                   // -i as bubble sort element gets sorted 
 if (mat[j][0] > mat[j + 1][0] ||
 (mat[j][0] == mat[j + 1][0] && mat[j][1] > mat[j + 1][1])) {
 // Swap entire triplet
 for (int k = 0; k < 3; k++) {
 int temp = mat[j][k];
 mat[j][k] = mat[j + 1][k];
 mat[j + 1][k] = temp;
 }         
}       
 }      
 }      

