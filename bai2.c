/******************************************************************************
 * Họ và tên: [Nguyen Ngoc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108- CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    //khai biến

char idHeThong[]="admin";
char pwHeThong[]="12345";
char idUser[100];
char pwUser[100];

// nhập id và pass

printf("xin mời nhập ID :");
gets(idUser);
printf("xin mời nhập Password :");
gets(pwUser);

//xét id và pass
int soSanhId;
int SoSanhPw;

soSanhId=strcmp(idHeThong,strlwr(idUser));
SoSanhPw=strcmp(pwHeThong,strlwr(pwUser));
while (soSanhId!=0||SoSanhPw!=0)
{
    printf("Sai ID Hoặc Password, mời nhập lại :");
    printf("xin mời nhập ID :");
    gets(idUser);
    printf("xin mời nhập Password :");
    gets(pwUser);
    soSanhId=strcmp(idHeThong,strlwr(idUser));
    SoSanhPw=strcmp(pwHeThong,strlwr(pwUser));
}
    printf("xin mời vào");
    system("pause");
    return 0;
}