#include <stdio.h>
#include <conio.h>
#include <string.h>
struct orders
{
    char item[50];
    int qty;
    float price;
};
void Tital(char name[50])
{
    printf("\n\n\t\t DISHANT RESTAURANT");
    printf("\n\t\t--------------------");
    printf("\n\nName : %s", name);
    printf("\n-----------------------------------------");
    printf("\nITEM\t\tQTY\t\tTOTAL\n-----------------------------------------\n");
}
void ord(char item[50], int qty, float price)
{
    printf("%s\t\t%d\t\t%0.2f\t\t\n", item, qty, qty * price);
}
void tot(float total)
{
    float dis = total * 0.1, ntotal = total - dis, gst = ntotal * 0.18, ftotal = ntotal + gst;
    printf("\n-----------------------------------------");
    printf("\nsub total\t\t\t%0.2f", total);
    printf("\ndis @10\t\t\t\t%0.2f", dis);
    printf("\n\t\t\t\t---------");
    printf("\nnet total\t\t\t%0.2f", ntotal);
    printf("\nGST @18\t\t\t\t%0.2f", gst);
    printf("\n-----------------------------------------");
    printf("\nFinal total\t\t\t%0.2f", ftotal);
    printf("\n-----------------------------------------");
}
int main()
{
    int c, n, i, x;
    char name[50];
    float total = 0;
    struct orders o[10];
    printf("\t  =====DISHANT RESTAURANT=====");
    printf("\n\t~~~~~~~~~~~~\n");
    printf("\n1.menu");
    printf("\n2.order");
    printf("\n0.exit\n");
x:
    printf("\nenter your choice :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\nNo.\t  ITEM\t\tPRIZE\n------------------------------\n");
        printf("1.\tVADAPAV\t\t15 ₹\n");
        printf("2.\tDABELI\t\t15 ₹\n");
        printf("3.\tFRANKI\t\t40 ₹\n");
        printf("4.\tHOTDOG\t\t50 ₹\n");
        printf("5.\tPIZZA\t\t150 ₹\n");
        printf("6.\tDOSA\t\t100 ₹\n");
        printf("7.\tSENDWITC\t75 ₹\n");
        printf("8.\tMANCHURIAN\t90 ₹\n");
        printf("9.\tCOCk\t\t30 ₹\n");
        printf("10.\tTHUMBSUP\t30 ₹\n------------------------------\n");
        goto x;
    case 2:
        printf("\nPlease Enter The Name Of Customer : ");
        scanf("%s", &name);
        printf("\n\nPlease Enter The Number Of Item : ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("\n\nPlease Enter The Item : ");
            scanf("%s", &o[i].item);
            printf("Please Enter The Quantity : ");
            scanf("%d", &o[i].qty);
            printf("Please Enter The Unit Price : ");
            scanf("%f", &o[i].price);
            total += o[i].qty * o[i].price;
        }
        Tital(name);
        for (i = 0; i < n; i++)
        {
            ord(o[i].item, o[i].qty, o[i].price);
        }
        tot(total);
        break;
    case 0:
        printf("\nThanks For Visiting Site.....\n(•‿•) Have A Nice Day");
        exit(0);
        break;
    default:
        printf("\nPlease Enter Right Choice!!!!!!!!");
    }
}