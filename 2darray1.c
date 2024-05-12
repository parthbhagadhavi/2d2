 #include<stdio.h>
 main()
 {
 int row,col,ave,sum=0;
 printf("enter the row\n");
 scanf("%d",&row);
  
 printf("enter the colum\n");
 scanf("%d",&col);
 
 int arr1[row][col];
 
 for(int a=0;a<row;a++){
 for(int b=0;b<col;b++){
 printf("a[%d][%d]=",a,b);
 scanf("%d",&arr1[a][b]);
 sum+=arr1[a][b];
 }

 }ave =sum/(row*col);
 printf("%d",ave);
  
 
 }