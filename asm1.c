/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c


// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số 
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện 
// 5. Chức năng số 5: Chức năng đổi tiền 
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp 
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số 
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>

// ===== CHUC NANG 1 =====
void chucNang1(){
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d",&n);

    if(n%2==0) printf("So chan\n");
    else printf("So le\n");
}

// ===== HAM UCLN =====
int UCLN(int a,int b){
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

// ===== CHUC NANG 2 =====
void chucNang2(){
    int a,b;
    printf("Nhap a b: ");
    scanf("%d%d",&a,&b);

    int ucln = UCLN(a,b);
    int bcnn = (a*b)/ucln;

    printf("UCLN = %d\n",ucln);
    printf("BCNN = %d\n",bcnn);
}

// ===== CHUC NANG 3 =====
void chucNang3(){
    int vao,ra;
    printf("Nhap gio vao gio ra: ");
    scanf("%d%d",&vao,&ra);

    int gio = ra - vao;
    int tien = gio * 50000;

    printf("Tien karaoke = %d\n",tien);
}

// ===== CHUC NANG 4 =====
void chucNang4(){
    int so;
    float tien;

    printf("Nhap so dien: ");
    scanf("%d",&so);

    if(so<=50) tien=so*1678;
    else if(so<=100) tien=50*1678+(so-50)*1734;
    else tien=50*1678+50*1734+(so-100)*2014;

    printf("Tien dien = %.0f\n",tien);
}

// ===== CHUC NANG 5 =====
void chucNang5(){
    int tien;
    printf("Nhap so tien: ");
    scanf("%d",&tien);

    printf("500k: %d\n",tien/500000);
    tien%=500000;
    printf("200k: %d\n",tien/200000);
    tien%=200000;
    printf("100k: %d\n",tien/100000);
}

// ===== CHUC NANG 6 =====
void chucNang6(){
    float tien;
    printf("Nhap tien vay: ");
    scanf("%f",&tien);

    printf("Tong tien sau lai 5%% = %.2f\n",tien*1.05);
}

// ===== CHUC NANG 7 =====
void chucNang7(){
    float giaXe;
    printf("Nhap gia xe: ");
    scanf("%f",&giaXe);

    printf("Tra truoc 30%% = %.2f\n",giaXe*0.3);
    printf("Tien vay = %.2f\n",giaXe*0.7);
}

// ===== CHUC NANG 8 =====
void chucNang8(){
    float diem[5];
    int i,j;

    for(i=0;i<5;i++){
        printf("Nhap diem %d: ",i+1);
        scanf("%f",&diem[i]);
    }

    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(diem[i]>diem[j]){
                float t=diem[i];
                diem[i]=diem[j];
                diem[j]=t;
            }
        }
    }

    printf("Sau sap xep:\n");
    for(i=0;i<5;i++){
        printf("%.2f ",diem[i]);
    }
    printf("\n");
}

// ===== CHUC NANG 9 =====
void chucNang9(){
    int so;
    printf("Nhap so du doan: ");
    scanf("%d",&so);

    int may = 5; // so co dinh
    if(so==may) printf("Trung thuong\n");
    else printf("Khong trung\n");
}

// ===== CHUC NANG 10 =====
void chucNang10(){
    int a,b,c,d;
    printf("Nhap a b: ");
    scanf("%d%d",&a,&b);

    printf("Nhap c d: ");
    scanf("%d%d",&c,&d);

    printf("Tong = %d/%d\n",a*d+c*b,b*d);
}

// ===== MAIN =====
int main(){
    int chon;

    do{
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. UCLN & BCNN\n");
        printf("3. Karaoke\n");
        printf("4. Tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep SV\n");
        printf("9. FPOLY-LOTT\n");
        printf("10. Phan so\n");
        printf("0. Thoat\n");
        printf("Nhap: ");
        scanf("%d",&chon);

        switch(chon){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 9: chucNang9(); break;
            case 10: chucNang10(); break;
        }

    }while(chon!=0);

    return 0;
}
