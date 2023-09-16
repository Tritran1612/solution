//
////int TinhTong(){
////    int a;
////    printf("gia tri a: ");
////    scanf("%d",&a);
////    int b;
////    printf("gia tri b: ");
////    scanf("%d",&b);
////    int c;
////    c=a+b;
////    printf("tong cua 2 so %d + %d = %d ",a,b,c);
////}
////int main()
////{
////    TinhTong();
////
////}
////int Giaithua(int n){
////    if (n==1){
////        return 1;
////    }
////    else{
////        return n*Giaithua(n-1);
////    }
////}
////int main() {
////    int n;
////    printf("nhap gia tri n:");
////    scanf("%d",&n);
////    int c=Giaithua(n);
////    printf("giai thua la :%d", c);
////    return 0;
////}
////int main(){
////    int n;
////    printf("nhap so luong phan tu:");
////    scanf("%d",&n);
////    int a[n];
////    int sum=0;
////    for(int i=0;i<n;i++){
////        printf("a[%d]",i);
////        scanf("%d",&a[i]);
////    }
////    for(int i=0;i<n;i++){
////        printf("a[%d]",a[i]);
////    }
////    for(int i=0;i<n;i++){
////        sum+=a[i];
////    }
////    printf("trung bing cong la:",(float)sum/n);
////}
////int fibo(int n){
////    if(n==0){
////        return 0;
////    }
////    if(n==1){
////        return 1;
////    }
////    else{
////        return fibo(n-1)+fibo(n-2);
////    }
////}
////int main(){
////    int n;
////    printf("nhap gia tri n:");
////    scanf("%d",&n);
////    printf("fibo cua %d: %d",n,fibo(n));
////}
////int Thoadieukien(int x){
////    return (x%2==0 && x%3==0);
////}
////int main(){
////    int n;
////    printf("nhap so luong:");
////    scanf("%d",&n);
////    int a[n];
////    for(int i=0;i<n;i++){
////        printf("a[%d]:",i);
////        scanf("%d",&a[i]);
////    }
////    for(int i=0;i<n;i++){
////        if(Thoadieukien(a[i])){
////            printf("%d",a[i]);
////        }
////    }
////}
////int timMax(int x[],int n){
////    int Max=x[0];
////    for(int i=1;i<n;i++){
////        if(Max<x[i]){
////            Max=x[i];
////        }
////    }
////    return Max;
////}
////int main(){
////    int n;
////    printf("nhap so luong:");
////    scanf("%d",&n);
////    int a[n];
////    for(int i=0;i<n;i++){
////        printf("a[%d]",i);
////        scanf("%d",&a[i]);
////    }
////    printf("GTLN LA:%d",timMax(a,n));
////}
//
////void swap(int &r, int &e) {
////int mat = r;
////r = e;
////e = mat;
////}
////
////void tangdan(int x[], int n) {
////    for (int i = 0; i < n - 1; i++) {
////        int vitrinhonhat = i;
////        for (int j = i + 1; j < n; j++) {
////            if (x[j] < x[vitrinhonhat]) {
////                vitrinhonhat = j; // Corrected this line to update the index of the minimum element
////            }
////        }
////        swap(x[i], x[vitrinhonhat]); // Corrected this line to swap the minimum element
////    }
////}
////
////void print(int a[], int n) {
////    for (int i = 0; i < n; i++) {
////        printf("%d ", a[i]); // Corrected this line to print values with spaces
////    }
////    printf("\n"); // Added a newline to separate the output
////}
////
////int main() {
////    int n;
////    printf("Nhap so luong: ");
////    scanf("%d", &n);
////    int a[n];
////    for (int i = 0; i < n; i++) {
////        printf("a[%d]: ", i);
////        scanf("%d", &a[i]);
////    }
////    tangdan(a, n);
////    print(a, n);
////    return 0; // Added a return statement to indicate successful execution
////}
////int tinh(int n){
////    if(n==1 || n==0){
////        return 1;
////    }
////    else{
////        return tinh(n - 1) / tinh(n - 2) + tinh(n - 2);
////    }
////}
////int main(){
////    int n;
////    printf("nhap:");
////    scanf("%d",&n);
////    printf("gia tri la:%d",tinh(n));
////    return 0;
////}
////int  foo(int n){
////    if (n==1){
////        return 1;
////    }
////    else{
////        return n * foo(n-1);
////    }
////}
////int main(){
////    int a;
////    a=foo(5);
////    printf("%d",a);
////    return 0;
////}
//
//
////void swap(int *a , int *b){
////    int tem= *a;
////    *a=*b;
////    *b=tem;
////}
////void Daonguoc(int a[], int n){
////    for(int i=0;i<n-1;i++){
////        int vitrinhonhat=i;
////        for(int j=i+1;j<n;j++){
////            if (a[j]<a[vitrinhonhat]){
////                j=vitrinhonhat;
////            }
////        }
////        swap(&a[i], &a[vitrinhonhat]);
////    }
////}
////int main()
////{
////    int n;
////    printf("nhap so luong:");
////    scanf("%d",&n);
////    int a[n];
////    for(int i=0;i<n;i++){
////        printf("a[%d]:",i);
////        scanf("%d", &a[i]);
////    }
////    for(int i=0;i<n;i++){
////        printf("%d",a[i]);
////    }Daonguoc(a,n);
////    printf("\nsau khi thay doi:");
////
////    printf("\n");
////    for(int i=0;i<n;i++){
////        printf("%d ",a[i]);
////    }
////    return 0;
////}
//
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void Daonguoc(int a[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        int vitrinhonhat = i;
//        for (int j = i + 1; j < n; j++) {
//            if (a[j] < a[vitrinhonhat]) {
//                vitrinhonhat = j; // Fix this line
//            }
//        }
//        swap(&a[i], &a[vitrinhonhat]);
//    }
//}
//
//int main() {
//    int n;
//    printf("Nhap so luong: ");
//    scanf("%d", &n);
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        printf("a[%d]: ", i);
//        scanf("%d", &a[i]);
//    }
//    printf("Mang truoc khi sap xep:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//
//    Daonguoc(a, n);
//
//    printf("\nSau khi sap xep:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]); // Use a[i], not &a[i]
//    }
//    return 0;
//}
//void xoakitu(int vi_tri, int *n, int a[]){
//    for(int i=vi_tri;i<*n-1;i++){
//        a[i]=a[i+1];}
//    (*n)--;
//}
//void xoakihieu( int *n, int a[]){
//    int x;
//    printf("\nnhap so can xoa:");
//    scanf("%d", &x);
//    for(int i=0; i<*n;i++){
//        if(x==a[i]){
//            xoakitu(i,n,a);
//        }
//    }
//}
//int main(){
//    int n;
//    printf("nhap so luong:");
//    scanf("%d", &n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        printf("a[%d]:",i);
//        scanf("%d", &a[i]);
//    }
//    for(int i=0;i<n;i++){
//        printf("%d", a[i]);
//    }
//    xoakihieu( &n, a);
//    for(int i=0;i<n;i++){
//        printf("%d", a[i]);
//    }
//}

//void themvao(int a[], int *n, int m){
//    a[*n]=m;
//    (*n)++;
//}
//void adddau(int a[], int *n, int x){
//
//    for(int i=*n-1;i>=0;i--){
//        a[i]=a[i-1];
//    }
//    a[0]=x;
//
//}
//int main(){
//    int n;
//    printf("nhap so luong:");
//    scanf("%d", &n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        printf("a[%d]:",i);
//        scanf("%d", &a[i]);
//    }
//    for(int i=0;i<n;i++){
//        printf("%d", a[i]);
//    }
//    themvao(a,&n,99);
//    printf("\n");
//    for(int i=0;i<n;i++){
//        printf("%d", a[i]);
//    }
//    adddau(a,&n,7);
//    printf("\n");
//    for(int i=0;i<n;i++){
//        printf("%d", a[i]);
//    }
//}

#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int numMap[100000]; // Assuming a maximum value of 100,000
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        if (numMap[complement] != 0) {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = numMap[complement] - 1;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        numMap[nums[i]] = i + 1; // Adding 1 to distinguish from uninitialized elements
    }
    return NULL; // If no solution is found
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result); // Don't forget to free the memory when done.
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
