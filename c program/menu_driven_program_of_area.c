# include <stdio.h>

void area_sqr(){
    int x , y;
    printf("enter the dimention of square a X a format : \n");
    scanf("%d",&x);
    y = x * x;
    printf("the area of square :%d", y);
}

void area_cricle(){
    int x , y;
    printf("enter the radius of circle : \n");
    scanf("%d",&x);
    y = 22/7 * x * x ;
    printf("the area of circle is : %d", y);
}

void area_rec(){
    int x,y,z;
    printf("enter the length X width of rectangle : \n");
    scanf("%d%d",&x,&y);
    z = x * y ;
    printf("the area of rectangle is : %d", z);

}
void area_triangle(){
    int x,y,z;
    printf("enter the base  X height of the triangle :\n");
    scanf("%d%d",&x,&y);
    z = 0.5 * x * y;
    printf("the area of triangle is :%d",z);
}

int main(){
    int a;
    printf("enter the shape of which u want to calculate a area : \n 1. square \n 2. circle \n 3. rectangle \n 4. triangle \n 5. exit\n");
    scanf("%d", &a);
    if(a==1){
        area_sqr();}
    else if(a==2){
        area_cricle();}
    else if(a==3){
        area_rec();}
    else if(a==4){
        area_triangle();}
    else{
        return 0;
    }
}







