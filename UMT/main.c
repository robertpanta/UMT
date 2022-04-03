#include <stdio.h>

int main () {

    int points; //number of points
	printf("Enter the number of points on the plot: "); //The given number of points should be the same with the points written in the a[][] array
	scanf("%d", &points);

   int a[100][2] = {{1,1}, {1,3}, {2,1}, {2,3}, {3,1}, {3,3}}; //You can modify here the input data, by adding points
   int rectangle =0;

   //the variables will be specific for x and y (the variables that have "2" are specific for the y's)
   for (int i = 0; i < points; i++ ) {
   for (int i2 = 0; i2 < points; i2++ ) {

   for (int k = 0; k < points; k++){
   for (int k2 = 0; k2 < points; k2++){

//The first 2 points are drawing a line parallel to the Oy axis
            if((a[i][0]==a[k][0]) && (a[i2][1]!=a[k2][1]) && (i==i2) && (k==k2)){ //comparing the first 2 numbers (points)
                   for (int o = 0; o < points; o++ ) {
                   for (int o2 = 0; o2 < points; o2++ ) {

                   if(a[k2][1]==a[o2][1] && a[k][0]!=a[o][0] && a[o][0]!=a[i][0] && a[o2][1]!=a[i2][1] && (o==o2)){ //comparing it with the 3rd number (point)
                         for (int m = 0; m < points; m++ ) {
                         for (int m2 = 0; m2 < points; m2++ ) {

                         if((a[m][0]==a[o][0]) && (a[i2][1]==a[m2][1]) && (a[m2][1]!=a[o2][1]) && (a[i][0]!=a[m][0]) && (a[m][0]!=a[k][0]) && (a[m2][1]!=a[k2][1]) && (m==m2)){
                           //comparing it with the 4th number (point)
                            rectangle = rectangle+1;
            }}}}}}}
//The same in case the first 2 points are drawing a line parallel to the Ox axis
             else if(a[i2][1]==a[k2][1] && a[i][0]!=a[k][0] && (i==i2) && (k==k2)){ //comparing the first 2 numbers (points)
                 for (int o = 0; o < points; o++ ) {
                 for (int o2 = 0; o2 < points; o2++ ) {

                   if(a[k][0]==a[o][0] && a[k2][1]!=a[o2][1] && a[i][0]!=a[o][0] && a[i2][1]!=a[o2][1] && (o==o2)){ //comparing it with the 3rd number (point)
                         for (int m = 0; m < points; m++ ) {
                         for (int m2 = 0; m2 < points; m2++ ) {

                         if(a[o2][1]==a[m2][1] && a[i][0]==a[m][0] && a[o][0]!=a[m][0] && a[m2][1]!=a[i2][1] && a[m][0]!=a[k][0] && a[m2][1]!=a[k2][1] && (m==m2)){
                           //comparing it with the 4th number (point)
                            rectangle = rectangle+1;

            }}}}}}}
    }}}}
    if(rectangle != 0){
            printf("Rectangles: %d\n", (rectangle/8) ); //We divide by 8 because there will be 4 cases for the same rectangle, starting from another corner,
            // for the parallel to Ox-Axis case and for the parallel to the Oy-Axis case => 4*2=8
}else {
    printf("Rectangles: 0\n");
}
   return 0;
}
