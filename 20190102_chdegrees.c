#include <stdio.h>

int main() {

	 float C_degree, F_degree;
 	
 	printf("섭씨온도를 입력하시오.\n");
 	scanf("%f",&C_degree);

	printf("섭씨온도는 %f ºC 입니다.\n",C_degree);

	F_degree = C_degree*9.0/5 + 32;

	printf("화씨온도로 변환하면 %f ºF입니다. \n",F_degree);

	return 0;

}