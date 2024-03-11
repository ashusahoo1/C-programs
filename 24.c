/*given 3 point(x1,y1),(x2,y2),(x3,y3)in 2d display
whether they form triangle or not */




#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    float m1,m2,m3;
    printf("enter the first coordinates:\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the second coordinates:\n");
    scanf("%d%d",&x2,&y2);
    printf("enter the third coordinates:\n");
    scanf("%d%d",&x3,&y3);
    m1=(float)(y3-y1)/(x3-x1);
    m2=(float)(y2-y1)/(x2-x1);
    m3=(float)(y2-y3)/(x2-x3);
    if(m1==m2&&m3==m1&&m3==m2)
    {
       
        printf("point is collinear");
    }
    else{
        printf("point is not collinear");
    }
}
