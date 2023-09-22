#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *resul;

int main(int argc, char *argv[])
{

  if(argc != 3)
  {
    printf("Modo de uso: datas.exe <year-min> <year-max>\n");
    exit(0);
  }
  else{
  int aa, mm, dd;
  
  int ini = atoi(argv[1]);
  int fin = atoi(argv[2]);
  
  printf("Gerando...\n");
  resul = fopen("datas.txt", "w");

  for (aa = ini; aa < fin; aa++)
    for (mm = 1; mm < 13; mm ++)
      for ( dd = 1; dd < 32; dd++)
      {
        fprintf(resul, "%02d%02d%02d\n", aa, mm, dd);// 19900101
        fprintf(resul, "%02d%02d%02d\n", dd, mm, aa);// 01011990

        fprintf(resul, "%02d-%02d-%02d\n", aa, mm, dd);// 1990-01-01
        fprintf(resul, "%02d-%02d-%02d\n", dd, mm, aa);// 01-01-1990

        fprintf(resul, "%02d/%02d/%02d\n", aa, mm, dd);// 1990/01/01
        fprintf(resul, "%02d/%02d/%02d\n", dd, mm, aa);// 01/01/1990

        fprintf(resul, "%02d\\%02d\\%02d\n", aa, mm, dd);// 1990\01\01
        fprintf(resul, "%02d\\%02d\\%02d\n", dd, mm, aa); // 01\01\1990

      }

  fclose(resul);
  system("cls");
  printf("Finalizado.\n");
  return 0;
  }
}
