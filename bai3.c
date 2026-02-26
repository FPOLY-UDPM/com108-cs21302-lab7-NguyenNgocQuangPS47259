/******************************************************************************
 * Họ và tên: [Nguyen Ngoc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108- CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20];   // Tạo mảng chuỗi
    char temp[20];  
    int i, j;

    // Nhập 5 chuỗi
    for (i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        gets(s[i]);   
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái 
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    // Xuất kết quả
    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        puts(s[i]);
    }

    return 0;
}

