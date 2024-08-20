#include<stdio.h>
int main(){
	float c, eleitores, vb, vn, vv;
	printf("Digite o numero de elitores do municipio:\n", eleitores);
	scanf("%f", &eleitores);
	printf("Digite os votos brancos:\n", vb);
	scanf("%f", &vb);
	printf("Digite os votos nulos:\n", vn);
	scanf("%f", &vn);
	printf("Digite os votos validos:\n", vv);
	scanf("%f", &vv);
	c = eleitores/100;
	vb= c*vb;
	vn = c*vn;
	vv= c*vv;
	
	printf("O percentual que cada um representa e:\n\nVotos brancos:%.f\nVotos Nulos:%.f\nVotos Validos:%.f", vb, vn, vv);
	
return 0;	
}
