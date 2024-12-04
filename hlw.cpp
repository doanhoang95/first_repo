#include <stdio.h>

int main() {
	// dây là khai báo bien, int: kieu du lien integer hay goi la so nguyên, a là tên biên
	int a;
	// có the gan gia tri cho bien
	int b = 29;

	// "/n" là xuong dong, %d kieu xac dinh cua so nguyen, %f la kieu so thuc(0.01) - co the quy dinh bao nhieu so thap phan cung dc, 
	// %s là xac dinh cua chuoi, %c xác dinh cua ký tu 
    printf("gia tri: \na: %d \nb: %d \n", a, b);
    
    printf("chon menu: ");
    // cai "&a" la con tro
    scanf("%d", &a);
    if(a == 2) {
    	printf("chon a = 2");
	} else {
		printf("a: %d", a);
	}

    return 0;
}
