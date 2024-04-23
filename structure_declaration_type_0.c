#include <stdio.h>
#include <string.h>

struct book_store
{
    char book_name[20];
    int page_no;
    float price;
}clang;

int main()
{
    strcpy(clang.book_name,"c language");
    clang.page_no = 187;
    clang.price = 70.00;
    printf("book name: %s\nnumber of pages: %d\nprice of book: %f",clang.book_name,clang.page_no,clang.price);
}