#include <stdio.h>

void main() {
	int DIEM=0;
	printf ("Nhap gia tri diem cua sinh vien: ");
	scanf ("%d", &DIEM);
	PHAN_LOAI(DIEM);
	return;
}

void PHAN_LOAI(int);
void PHAN_LOAI(int a) {
	if (a>=90)
	printf("Sinh vien loai A, %d diem", a);
	else if (a>=80 && a<90)
	printf ("Sinh vien loai B, %d diem", a);
	else if (a>=70 && a<80)
	printf ("Sinh vien loai C, %d diem", a);
	else if (a<60)
	printf ("Sinh vien loai F, %d diem", a);
	else 
	printf ("Sinh vien loai D, %d diem", a);
	
	return;
}
