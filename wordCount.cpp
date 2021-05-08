#include<stdio.h>
#include<string.h>
int main()
{
	int cNum=0, wNum=0;
	int ch=0;
	int judge=0;
	FILE *fpr;
	char name[100]={0};
	char type[2];
	scanf("%s",type);
	scanf("%s",name);
    if((fpr = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s\n",name);
        return 0;
    }
	
	if(type[1]=='c'){
		while((ch = fgetc(fpr)) != EOF){
			if((ch>=48 &&ch<=57) || (ch>=65&&ch<=90) || (ch>=97&&ch<=122) || ch==10 || ch==9 || ch==32)
				cNum++;
			}
		printf("×Ö·ûÊý£º%d",cNum);
	}
	else if(type[1]=='w'){
		while((ch = fgetc(fpr)) != EOF){
			if((ch>=48 &&ch<=57) || (ch>=65&&ch<=90) || (ch>=97&&ch<=122) || ch==10 || ch==9){
				if(judge==0){
					wNum++;
					judge++;
				}
			}
			else if(ch==32 || ch==44){
				judge=0;
			}
		}
		printf("µ¥´ÊÊý£º%d",wNum);
	}
	return 0;
}
