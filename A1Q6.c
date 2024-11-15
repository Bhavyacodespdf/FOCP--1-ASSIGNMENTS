//Q6 WAP to accept a coordinate point in an XY coordinate system and determine in which
//quadrant the coordinate point lies.

#include <stdio.h> 

int main(){
   int x,y;
   printf("Enter x coordinate :");
   scanf("%d",&x);
   printf("Enter y coordinate :");
   scanf("%d",&y);


   if (x>0){
       if(y>0){
           printf("%d %d lies in I quadrant",x,y);
       }
       else {
           printf("%d %d lies in IV quadrant",x,y);
       }
   }
      
   else if (x<0){
       if(y<0) {
           printf("%d %d lies in III quadrant",x,y);
       }
       else {
           printf("%d %d lies in II quadrant",x,y);
       }
   }
   else {
       printf("wrong input");
   }


}
