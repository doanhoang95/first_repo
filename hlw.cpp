#include <stdio.h>

int main() {
	// d�y l� khai b�o bien, int: kieu du lien integer hay goi la so nguy�n, a l� t�n bi�n
	int a;
	// c� the gan gia tri cho bien
	int b = 29;

	// "/n" l� xuong dong, %d kieu xac dinh cua so nguyen, %f la kieu so thuc(0.01) - co the quy dinh bao nhieu so thap phan cung dc, 
	// %s l� xac dinh cua chuoi, %c x�c dinh cua k� tu 
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
