#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpr;
    char name[100] = {0};//�洢·����
    int ch;
    int number = 0;
    int character = 0;
    int space = 0;
    int total = 0;

    scanf("%s",name);

    if((fpr = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s\n",name);
        exit(1);
    }
    while((ch = fgetc(fpr)) != EOF)
    {
       if(ch>=48 &&ch<=57)//���ֵ�ASCII��
       {
            number++;
       }
       if((ch>=65&&ch<=90) || (ch>=97&&ch<=122))//��ĸ��ASCII��
       {
           character++;
       }
       if(ch == 32)//�ո��ASCII��
       {
           space++;
       }
       total++;
    }
    printf("���� = %d ��ĸ = %d �ո� = %d �ַ��� = %d\n",number,character,space,total);
    return 0;
}

