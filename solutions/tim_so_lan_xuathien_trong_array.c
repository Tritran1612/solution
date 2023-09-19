#include <stdio.h>
void tinhtoan(int a[],int n, int ketqua, int solan ){
    for(int i=0;i<n;i++){
        if(a[i]==ketqua){
            solan+=1;
        }
    }
    return 0;
}
int timdi(int a[],int n, int ketqua, int solan){

}
int main() {
    int n;
    printf("nhap so luong:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);}
    int solan=0;
    int ketqua;
    printf("nhap so can xet:");
    scanf("%d", &ketqua);
}