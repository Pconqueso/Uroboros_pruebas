#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	FILE *img;
	img = fopen ("pexels-guillaume-meurice-1591447.jpg","r");
	
	char letra;
	int tipo;
	int height;
	int width;
	int rgb_max;
	
	fscanf(img, "%c%d %d %d %d",&letra,&tipo,&height,&rgb_max);
	printf("%c%d\n%d %d\n%d\n", letra, tipo, width, height, rgb_max);
	char r[height][width];
	char g[height][width];
	char b[height][width];
	char val;
	fscanf(img, "%c" ,&val);
	for (int i=0; i< height;i++)
		{
			for (int j=0; j< width;j++)
			{fscanf(img, "%c%c%c", &r[i][j], &g[i][j], &b[i][j]);}
		}
		
	FILE *img_modificada;
	img_modificada = fopen ("pexels-guillaume-meurice-1591447.jpg", "w");
	fprintf(img_modificada, "%c%d\n%d %d\n%d%c",letra,tipo,width,height,rgb_max,val);
	for (int i=0; i<height; i++)
		{
			for (int j=0; j<width; j++)
			{
				fprintf(img_modificada, "%c%c%c",r[i][j],g[i][j],b[i][j]);
				printf("%c %c %c\n",r[i][j],g[i][j],b[i][j]);
			}
		}
	fclose(img);
	return 0;
}
