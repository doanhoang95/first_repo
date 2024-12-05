#include <stdio.h>
#include <math.h> 

int check1( int n) {
	while(n) {
		if ( n % 10 == 6) return 1;
		n /= 10;
	}
	return 0;
}

// Day la 1 ham , cai "int n": la tham so truyen vao, eng n la argument
int check2(int n) {
	int sum = 0;
	while(n) {
		sum += n % 10;
		n /= 10;
	}

	// return la tra ve 1 cai gi do ma ong muon
	// vd: o day o tra ve cai so sum % 8 == 0
	return sum % 8 == 0;
}

// ham nay la ham main, dung de chay toan du an
// cac ham vao trong cai ham nay su dung
// hay kieu nhu dung ham nao thi su dung trong nay
int main() {
//	for (int i= 1; i <= 1000;  i++) {
//		if (check1(i) == 1 && check2(i) == 1) 
//			printf ("%d ", i); 
//	}

	// vd vong lap for: 
//	for(int i = 0; i < 10; i++) {
// cai i-- hoac i++ co nghia la n giam di (i--) tang len (i++) 1 don vi, keu nhu i += 1 hoac i = i + 1
// do', cach co ban doc loi, cu xem n ghi gi da xong check loi o dau
	for(int i = 10; i > 0; i--) {
		printf("lap lai doan code nay lan thu: %d \n", i - 1);
	}

	return 0;
}
