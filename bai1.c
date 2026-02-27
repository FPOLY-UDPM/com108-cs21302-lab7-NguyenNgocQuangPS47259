/******************************************************************************
 * Họ và tên: [Nguyen Ngoc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108- CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    //nhập liệu ký tự
    char gay[100];
    printf("Xin moi ban nhap chuoi ky tu: ");
    gets(gay);
    printf("Ban da nhap chuoi: ");
    puts(gay);
    //tìm nguyên âm phụ âm
    int n=0;
    int p=0;
    
    for (int i = 0;gay[i]!='\0'; i++)
    {
        if (gay[i]=='a'||gay[i]=='i'||gay[i]=='u'||gay[i]=='e'||gay[i]=='o'||gay[i]=='y'||gay[i]=='A'||gay[i]=='I'||gay[i]=='U'||gay[i]=='E'||gay[i]=='O'||gay[i]=='Y')
        {
            n++;
        }else
        {
            p++;
        }
    }
    printf("Vay so nguyen am la : %d\n",n);
    printf("Vay so phu am la : %d\n",p);
    strlwr(gay);
    puts(gay);
    strupr(gay);
    puts(gay);

    system("pause");
return 0;
}
