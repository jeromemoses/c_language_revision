#include<stdio.h>
#include<string.h>
struct colour
    {
        int r;
        int g;
        int b;
    };

struct price_list
    {
        int price_1;
        int price_2;
    };

typedef struct 
{
    int size_in_MM;
    char company_name[50];
    struct colour ball_color;
    struct price_list price;
}balls;

int main()
{
    balls redball;
    printf("enter the ball company name:");
    scanf("%s",&redball.company_name);
    printf("enther the color of ball in R G B format:");
    scanf("%d%d%d",&redball.ball_color.r,&redball.ball_color.g,&redball.ball_color.b);
    printf("Enter the size of the ball:");
    scanf("%d",&redball.size_in_MM);
    printf("Enter the price varient 1:");
    scanf("%d",&redball.price.price_1);
    printf("Enter the price varient 2:");
    scanf("%d",&redball.price.price_2);

    printf("\n\n\nBall details:\nball company name:%s\nball color in RGB : %d %d %d\nBall size:%d\nPrice list: top varient:%d Lower varient:%d",redball.company_name,redball.ball_color.r,redball.ball_color.g,redball.ball_color.b,redball.size_in_MM,redball.price.price_1,redball.price.price_2);
    return 0;
}