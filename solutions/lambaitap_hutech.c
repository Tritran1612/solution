#include <stdio.h>
// nhập các phần từ ma trận
//int main() {
//    // Khai báo và khởi tạo ma trận 2x2
//    int matrix[2 ][6 ] = {
//            {1, 2,4,5,6,7},
//            {3, 4,2,4,6,7}
//    };
//
//    // Truy cập và in các phần tử trong ma trận
//    printf("Ma tran:\n");
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 6; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//TRUNG BÌNH CỘNG CÁC PHẦN TỬ
//int main(){
//    int n;
//    printf("nhap so luong phan tu:");
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        printf("a[%d]:",i);
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++){
//        printf("%d",a[i]);
//    }
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum+=a[i];
//    }
//}

// tạo hình tam giác

//int main(){
//    int n;
//    printf("nhap n:");
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(i>j){
//                printf("*");
//            }
//
//
//        }
//        printf("\n");
//    }
//}

// tim vi tri xuat hien cuoi cung cua phan tu có giá trị x nếu có trong dãy b
//int timkihieu(int a[],int n,int ketqua){
//    for(int i=0;i<n;i++){
//        if(a[i]==ketqua){
//            return 1;
//        }
//
//    }
//    return 0;
//}
//void timketqua(int a[],int n,int ketqua){
//    int cc= timkihieu(a,n,ketqua);
//
//        if(cc==1){
//            printf("co so %d trong day ", ketqua);
//
//    }
//        for(int i=0;i<n;i++){
//            if(a[i]==ketqua){
//                printf("co vi tri ơ %d:",i);
//            }
//        }
//}
//int main() {
//    int n;
//    printf("nhap so luong:");
//    scanf("%d", &n);
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        printf("a[%d]: ", i);
//        scanf("%d", &a[i]);
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);}
//        int ketqua;
//        printf("nhap so can xet:");
//        scanf("%d", &ketqua);
//        timketqua(a, n, ketqua);
//    return 0;
//    }
