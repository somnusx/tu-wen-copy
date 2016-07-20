#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *f_pic,*f_file,*f_finish;
	char ch,pic[20],file[20],finish[20];
	
	
	printf("Please enter the picture\n");
	printf("picture:");
	scanf("%s",pic);
	printf("Please enter the file\n");
	printf("file:");
	scanf("%s",file);
	printf("finish:");
	scanf("%s",finish);
	
	if(!(f_pic=fopen(pic,"rb+")))
	{
		printf("..........");
		return;
	}
	
	if(!(f_file=fopen(file,"rb+")))
	{
		printf("..........");
		return;
	}
	
	if(!(f_finish=fopen(finish,"wb+")))
	{
		printf("..........");
		return;
	}
	
	while(!feof(f_pic))
	{
		ch=fgetc(f_pic);
		fputc(ch,f_finish);
	}fclose(f_pic);
	while(!feof(f_file))
	{
		ch=fgetc(f_file);
		fputc(ch,f_finish);
	}fclose(f_file);
	
	
	system("pasue");
}