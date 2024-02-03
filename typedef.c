#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct shop
{
    int veg_count;
    int stocks;
    int owner_age;
    int floors;
    int monthly_profit;
    char owner_name[50];
}super_market;

int main()
{
    super_market AJ_store;

    AJ_store.floors=7;
    AJ_store.monthly_profit=770000;
    AJ_store.owner_age=27;
    strcpy(AJ_store.owner_name,"jerome");
    AJ_store.stocks=27450;
    AJ_store.veg_count=24;

    printf("AJ store details:\nowner name:%s\nowner age:%d\nMonthly profit:%d\nstocks:%d\nVariety of vegitables:%d\nNumber of floors in shop:%d\n",AJ_store.owner_name,AJ_store.owner_age,AJ_store.monthly_profit,AJ_store.stocks,AJ_store.veg_count,AJ_store.floors);

}