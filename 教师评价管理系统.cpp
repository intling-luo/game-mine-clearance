#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include<unistd.h>
const char* pic = "|/-\\"; //�򵥶�����Ч
void csh();//��ʼ�� 
void menu();//�˵�_��ʼ����
void menu_jwc();//�˵�_����-����ʱ���� 
void menu_jwc2();//�˵�_����-�����Ĺ������ 
void menu_js();//�˵�_��ʦ
void menu_xs();//�˵�_ѧ��-������� 
void menu_xs2();//�˵�_ѧ��-�����Ľ��� 
void jwc_xj();//����-�½�
void jwc_xg();//����-�޸� 
void jwc_sc();//����-ɾ�� 
void jwc_menu();//����-��ӡ�ɼ��˵� 
void sc_hg();//����-����ϸ� 
void sc_sy();//����-������� 
void sc_bhg();//����-������ϸ� 
void js_cx();// ����-��ʦ��ѯ 
void js_xx();//����-��ʦ��Ϣ 
void xs_dr();//����-ѧ������ 
void xs_zc();//����-ѧ��ע�� 
void pj_xj();//����-ѧ������ 
struct teacher//��ʦ���ݵĽṹ�� 
{
	char name[20];//���� 
	char gh[20];//���� 
	char sex[20];//�Ա�
	char tel[20]; //��ϵ��ʽ
	char kc[20];//��ѧ�γ� 
	double rs;//��������
	double av;//ƽ������
	double sum;//�ܷ��� 
};
typedef struct student//ѧ��ע�������Ϣ
{
	char name[20];//���� 
	char gh[20];//ѧ�� 
	char sex;//�Ա�
	char tel[20]; //��ϵ��ʽ
	char pwd[20];//ѧ������ 
	int pj; 
}students;
students xs;//Ԥ��ѧ�������ڴ��ݵ�����Ϣ 
int main()
{
	csh();
	menu();
	return 0;
} 
void csh()
{
	int i=0,num=1;
	printf(" ϵͳ���ڳ�ʼ��,���Ժ�\n");
	for(i=0;i<=100;i++)
	{
		Sleep(25);
		for(int nx=0;nx<=114;nx++)
		{
			printf("\b");
		} 
		for(int nx=0;nx<=10;nx++)
		{
			if(nx<=i/10)
			{
				printf("-");
			}
			else
			{
				printf(">");
			}
		}
	    printf("��ǰ���ȣ�");
		num++;
		printf("%-3d%%",i);// \b����Ϊ�˸� -3d�����룬����3λ���ո�
		printf("%c",pic[num%4]);//����С���� 	
	}
	printf("\n  ��ʼ���ɹ�!\n");
	printf("��ӭʹ��ѧ������ϵͳ\n");	
	system("pause");//��ͣ������������� 
}
void menu()
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|------------ѡ��������-------------|\n");
	printf("\t\t\t\t|------------1.����-----------------|\n");
	printf("\t\t\t\t|------------2.��ʦ-------------------|\n");
	printf("\t\t\t\t|------------3.ѧ��-------------------|\n");
	printf("\t\t\t\t|------------0.�˳�-------------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:menu_jwc();break;
		case 2:menu_js();break;
		case 3:menu_xs();break;
		case 0:break;
		default:
			printf("�������󣬽���3s�󷵻����˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			menu();
			break;
	} 
}
void menu_jwc()//���-δ������� 
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------����----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|--------------���ȵ���---------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("�˺�:");
	int zh=0,mm=0;
	scanf("%d",&zh); 
	printf("����:");
	scanf("%d",&mm);
	//�˺�������ȷ�������񴦹���ϵͳ������ȷ������ʾ�󷵻����˵�
	struct A
	{
		int zh1;
		int mm1;
	};
		struct A a = {0};
		FILE* pf = fopen("jwc.txt", "r");//���ļ�
		for(int p=0;p<20;p++)    //����20�м���˺���������޶�Ӧ 
	{
		fscanf(pf,"%d %d",&a.zh1,&a.mm1);//���ļ��ж�ȡ��ʽ�����ݵ��ṹ����
		if(zh==a.zh1&&mm==a.mm1)
		{
			printf("��¼�ɹ������ڽ���ϵͳ");	//��������ȷ���˺��������ϵͳ����ѭ�� 
			
			menu_jwc2();	//�������ϵͳ���� 
			fclose(pf);
			break;
		}
		else if(p==19)
		{
			printf("�˺Ż�������󣬽���3s�󷵻����˵�");
			fclose(pf);
			Sleep(3000);
	    	menu(); 		//δ�������������˵� 
		}
	
	} 
}
void menu_jwc2()
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------����----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|---------1.�½���ְ����Ϣ------------|\n");
	printf("\t\t\t\t|---------2.�޸Ľ�ְ����Ϣ------------|\n");
	printf("\t\t\t\t|---------3.ɾ����ְ����Ϣ------------|\n");
	printf("\t\t\t\t|---------4.�����ְ����Ϣ------------|\n");
	printf("\t\t\t\t|---------0.�������˵�----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:jwc_xj();break;
		case 2:jwc_xg();break;
		case 3:jwc_sc();break;
		case 4:jwc_menu();break;
		case 0:menu();break;
		default:
			printf("�������󣬽���3s�󷵻ز˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			menu_jwc2();
			break;
	}  
}
void jwc_xj()//�½� 
{
	struct teacher linshi={0};
	printf("�������������������ţ��Ա���ϵ��ʽ����ѧ�γ̣��Կո�ָ�\n");
	scanf("%s %s %s %s %s",linshi.name,linshi.gh,linshi.sex,linshi.tel,linshi.kc);
	FILE* pf = fopen("jwcdata.txt", "a");
	fprintf(pf,"%s %s %s %s %s %lf %lf %lf\n",linshi.name,linshi.gh,linshi.sex,linshi.tel,linshi.kc,linshi.rs,linshi.av,linshi.sum);
 	printf("�½���ϣ�����󷵻ؽ���ϵͳ�˵�");	
 	Sleep(3000);
	menu_jwc2();
	fclose(pf); 
}
void jwc_xg()//�޸� 
{
	int k=0; 
	struct teacher linshi={0};
	printf("��������Ҫ�޸ĵ���Ϣ!\n");
	printf("�����������������ţ��Ա���ϵ��ʽ����ѧ�γ̣��Կո�ָ�\nϵͳ��ƥ�乤�����޸Ĵ�������\n");
	scanf("%s %s %s %s %s",linshi.name,linshi.gh,linshi.sex,linshi.tel,linshi.kc);
	FILE *fp=fopen("jwcdata.txt","r");
	FILE *fpt=fopen("temp.tmp", "w");//������ʱ�ļ��������޸���Ϣ 
	if(fp<0)
	{
		printf("��ʦ��Ϣ�ļ������ڣ�\n");
		printf("����󷵻ؽ���ϵͳ�˵�!");	
		Sleep(3000);
		menu_jwc2();
	}
	struct teacher th2={};
	while(fscanf(fp,"%s %s %s %s %s %lf %lf %lf",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,&th2.rs,&th2.av,&th2.sum)!=EOF)//��������ʱ�˳�ѭ�� 
	{
		if(strcmp(th2.gh,linshi.gh)==0)
		{
			fprintf(fpt,"%s %s %s %s %s %lf %lf %lf\n",linshi.name,linshi.gh,linshi.sex,linshi.tel,linshi.kc,th2.rs,th2.av,th2.sum);//���Ϲ�������ʱ���������ϢΪ�޸ĺ�� 
			k+=1;
		}
		else
		{
			fprintf(fpt,"%s %s %s %s %s %lf %lf %lf\n",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,th2.rs,th2.av,th2.sum);//������ʱ������ԭ��Ϣ 
		}
	}
	if(k!=0)
	{
		fclose(fp);
		fclose(fpt);
		remove("jwcdata.txt");//���Ƴ�ԭ�ļ� 
	    rename("temp.tmp","jwcdata.txt");//�����ļ����� 
		printf("��Ϣ���޸ģ�\n"); 
	}
	else if(k==0)
	{
		fclose(fp);
		fclose(fpt);
		printf("���޴˹��ţ�����󷵻ز˵�\n") ;
		Sleep(3000);
			menu_jwc2();
			return;
	 } 
		printf("����󷵻ؽ���ϵͳ�˵�!");
		Sleep(3000);
		menu_jwc2(); 
	}
void jwc_sc()//ɾ�� 
{
	struct teacher linshi={0};
	printf("��������Ҫɾ���Ĺ���!\n");
	scanf("%s",linshi.gh);
	FILE *fp=fopen("jwcdata.txt","r");
	FILE *fpt=fopen("temp.tmp", "w");//������ʱ�ļ��������޸���Ϣ 
	if(fp<0)
	{
		printf("��ʦ��Ϣ�ļ������ڣ�\n");
		printf("����󷵻ؽ���ϵͳ�˵�!");	
		Sleep(3000);
		menu_jwc2();
	}
	struct teacher th2={};
	while(fscanf(fp,"%s %s %s %s %s %lf %lf %lf",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,&th2.rs,&th2.av,&th2.sum)!=EOF)//��������ʱ�˳�ѭ�� 
	{
		if(strcmp(th2.gh,linshi.gh)!=0)
		{
			fprintf(fpt,"%s %s %s %s %s %lf %lf %lf\n",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,th2.rs,th2.av,th2.sum);//������ʱ������ԭ��Ϣ
		}//����ʱ��������Ϣ 
	}
	fclose(fp);
	fclose(fpt);
	remove("jwcdata.txt");//���Ƴ�ԭ�ļ� 
    rename("temp.tmp","jwcdata.txt");//�����ļ����� 
	printf("��Ϣ���޸ģ�\n"); 
	printf("����󷵻ؽ���ϵͳ�˵�!");
	Sleep(3000);
	menu_jwc2(); 
}
void jwc_menu()//����˵� 
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------����----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|---------1.����ϸ��ʦ��Ϣ----------|\n");
	printf("\t\t\t\t|---------2.������н�ʦ��Ϣ----------|\n");
	printf("\t\t\t\t|---------3.������ϸ��ʦ��Ϣ--------|\n");
	printf("\t\t\t\t|---------0.�����ϼ��˵�--------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:sc_hg();break;
		case 2:sc_sy();break;
		case 3:sc_bhg();break;
		case 0:menu_jwc2();break;
		default:
			printf("�������󣬽���3s�󷵻ز˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			jwc_menu();
			break;
	}  
}
void sc_hg(){
	int i=0,j=0;
	FILE*fp;
	struct teacher lingshi[100] ;
	if((fp = fopen("jwcdata.txt","r"))==NULL){//���ļ� 
		printf("File open error!/n");
		exit(0);
	}
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
		
	while(lingshi[i].sum!=0){//���ļ��н����ݶ����ṹ���� 
    	i++;
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
	    j++;
	   
	}
	if(i==1){
		j=0;
	}
	for(i=0;i<j;i++){//�����ʦ���� 
		if(lingshi[i].av>=60){
			printf("����:%s ����:%s �Ա�:%s ��ϵ�绰:%s �γ�:%s ��������:%.0lf ƽ������:%.2lf �����ܺ�:%.0lf\n",lingshi[i].name,lingshi[i].gh,lingshi[i].sex,lingshi[i].tel,lingshi[i].kc,lingshi[i].rs,lingshi[i].av,lingshi[i].sum);
		}
	}
	if(fclose(fp)){//�ر��ļ� 
		printf("Can't not close the file'");
		exit(0);
	}
	system("pause");
	jwc_menu(); 
}
void sc_sy(){
	int i=0,j=0;
	FILE*fp;
	struct teacher lingshi[100] ;
	if((fp = fopen("jwcdata.txt","r"))==NULL){//���ļ� 
		printf("File open error!/n");
		exit(0);
	}
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
		
	while(lingshi[i].sum!=0){//���ļ��н����ݶ����ṹ���� 
    	i++;
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
	    j++;
	   
	}
	if(i==1){
		j=0;
	}
	for(i=0;i<j;i++){//�����ʦ���� 
		
			printf("����:%s ����:%s �Ա�:%s ��ϵ�绰:%s �γ�:%s ��������:%.0lf ƽ������:%.2lf �����ܺ�:%.0lf\n",lingshi[i].name,lingshi[i].gh,lingshi[i].sex,lingshi[i].tel,lingshi[i].kc,lingshi[i].rs,lingshi[i].av,lingshi[i].sum);
		
	}
	if(fclose(fp)){//�ر��ļ� 
		printf("Can't not close the file'");
		exit(0);
	}
	system("pause");
	jwc_menu();
}
void sc_bhg(){
	int i=0,j=0;
	FILE*fp;
	struct teacher lingshi[100] ;
	if((fp = fopen("jwcdata.txt","r"))==NULL){//���ļ� 
		printf("File open error!/n");
		exit(0);
	}
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
		
	while(lingshi[i].sum!=0){//���ļ��н����ݶ����ṹ���� 
    	i++;
		fscanf(fp,"%s%s%s%s%s%lf%lf%lf",&lingshi[i].name,&lingshi[i].gh,&lingshi[i].sex,&lingshi[i].tel,&lingshi[i].kc,&lingshi[i].rs,&lingshi[i].av,&lingshi[i].sum);
	    j++;
	   
	}
	if(i==1){
		j=0;
	}
	for(i=0;i<j;i++){//�����ʦ���� 
		if(lingshi[i].av<60){
			printf("����:%s ����:%s �Ա�:%s ��ϵ�绰:%s �γ�:%s ��������:%.0lf ƽ������:%.2lf �����ܺ�:%.0lf\n",lingshi[i].name,lingshi[i].gh,lingshi[i].sex,lingshi[i].tel,lingshi[i].kc,lingshi[i].rs,lingshi[i].av,lingshi[i].sum);
		}
	}
	if(fclose(fp)){//�ر��ļ� 
		printf("Can't not close the file'");
		exit(0);
	}
	system("pause");
	jwc_menu();
}
void menu_js()
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------��ʦ��----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|-------------1.��ѯ�ɼ�--------------|\n");
	printf("\t\t\t\t|-------------2.��������Ϣ----------|\n");
	printf("\t\t\t\t|-------------0.�������˵�------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:js_cx();break;
		case 2:js_xx();break;
		case 0:menu();break;
		default:
			printf("�������󣬽���3s�󷵻ز˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			menu_js();
			break;
	}  
}
void js_cx()//���빤�Ų�ѯ��ʦ�ɼ� 
{
	system("cls") ;//��������
	struct teacher linshi={0};
    printf("��������Ҫ��ѯ�Ľ�ʦ������:\n");
    scanf("%s",linshi.gh);
    FILE *fp=fopen("jwcdata.txt","r");
	FILE *fpt=fopen("temp.tmp", "w");
	struct teacher th2={};
	int no=0;
	while(fscanf(fp,"%s %s %s %s %s %lf %lf %lf",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,&th2.rs,&th2.av,&th2.sum)!=EOF) //��������ʱ�˳�ѭ�� 
	{
		if(!strcmp(linshi.gh,th2.gh))//��ѯ�Ĺ����ж�Ӧ��ʦ 
		{
			printf("���֣�%s ƽ��������%.2lf\n",th2.name,th2.av);
			no+=1;
		}
    }
	if(no==0)//���빤�Ŵ����ϵͳ���޴˹���
	{
	 printf("ϵͳ���޴˽�ʦ��Ϣ!\n");	
	} 
    fclose(fp);
	fclose(fpt);
	system("pause");
	menu_js();
} 
void js_xx()//���빤�Ų�ѯ��ʦ������Ϣ 
{
	system("cls") ;//��������
	struct teacher linshi={0};
    printf("��������Ҫ��ѯ�Ľ�ʦ������:\n");
    scanf("%s",linshi.gh);
    FILE *fp=fopen("jwcdata.txt","r");
	FILE *fpt=fopen("temp.tmp", "w");
	struct teacher th2={};
	int no=0;
	while(fscanf(fp,"%s %s %s %s %s %lf %lf %lf",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,&th2.rs,&th2.av,&th2.sum)!=EOF) //��������ʱ�˳�ѭ�� 
    {
		if(!strcmp(linshi.gh,th2.gh))//��ѯ�Ĺ����ж�Ӧ��ʦ 
		{
			printf("���֣�%s ���ţ�%s �Ա�%s ��ϵ�绰��%s �γ̣�%s ����������%.0lf �����ܺͣ�%.2lf\n",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,th2.rs,th2.sum);
			no+=1;
		}
   }
	if(no==0)//���빤�Ŵ����ϵͳ���޴˹���
	{
	 printf("ϵͳ���޴˽�ʦ��Ϣ!\n");	
	} 
    fclose(fp);
	fclose(fpt);
	system("pause");
	menu_js();
}
void menu_xs()//ѧ���˵���˵�
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------ѧ����----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|-------------1.�˺ŵ���--------------|\n");
	printf("\t\t\t\t|-------------2.�˺�ע��--------------|\n");
	printf("\t\t\t\t|-------------0.�������˵�------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:xs_dr();break;
		case 2:xs_zc();break;
		case 0:menu();break;
		default:
			printf("�������󣬽���3s�󷵻ز˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			menu_xs();
			break;
	}  
}
/*���������û��˺�������ļ�*/ 
void Create_File()
{
    FILE *fp;
    if ((fp = fopen("users.txt","rb"))==NULL)                 /*������ļ�������*/
    {
        if ((fp = fopen("users.txt","wb+"))==NULL)
        {
            printf("�޷������ļ���\n");
            exit(0);
            
        }
    }
}

void xs_dr()//����-ѧ������ 
{/*��¼ϵͳ*/ 
    system("cls") ;//��������
    students a,b;//����ṹ��The_users����
    FILE *fp;
    printf("��ӭ������¼���棡\n");
    Sleep(1000);
    fp = fopen("users.txt","ab+");
    fread(&b, sizeof(struct student), 1, fp); //����һ���ṹ���ַ��� д��b
    printf("�������˺�\n");
    scanf("%s",&a.gh);   
             while (1)
           {   
	           if (strcmp(a.gh, b.gh)==0)         //����д��û���
	           {
	               break;       
	           }
	           else 
	           {
	               if (!feof(fp))  //����ļ�û�ж���                            
	            
	               {
	                   fread(&b, sizeof(struct student), 1, fp);
	               }
	               else
	               {
	                   printf("���û��������ڣ����������룡\n");
					   Sleep(500); 
					   printf("�������˺�\n");
					   scanf("%s",&a.gh);         
	               }
	           }
       }
       printf("����������\n");
       	scanf("%s",&a.pwd); 
    do{   
	       
		if (strcmp(a.pwd, b.pwd)==0)            /*�������ƥ��*/
	           
	       {  
	          fclose(fp);
	          xs=b;
	          printf("��¼�ɹ�,��ӭʹ��!");
	          Sleep(200);
	          menu_xs2();
	          return;
	          }
	       else  
	       {    printf("���벻��ȷ!��������������\n");
	       		scanf("%s",&a.pwd);         
	       }
	}while(strcmp(a.pwd, b.pwd)==0);
} 
void xs_zc()//����-ѧ��ע�� 
{/*ע���˺�*/   
         students a,b;//�ṹ�� The_users ����������
         FILE *fp;
         char temp[20];
         int count = 0;
         printf("��ӭ����ע����棡\n");
         Sleep(1000);
         fp = fopen("users.txt","ab+");
         fread(&b, sizeof(struct student), 1, fp); //����һ���ṹ���ַ��� ��b
          printf("�������˺�\n");
         scanf("%s",&a.gh);
         while (1)
         {    
             if (strcmp(a.gh, b.gh)) /*������������*/
             {
                 if (!feof(fp))    /*���δ���ļ�β*/                                        
                 {
                     fread(&b, sizeof(struct student), 1, fp);
                 }
                 else
                     break;
             }
             else
             {   
                 printf("���û����Ѵ��ڣ�������ע�ᣡ\n"); 
                 Sleep(1000);
                 fclose(fp);
                 xs_zc();   
             }
         }
         printf("������������\n");
         scanf("%s",&a.name);
         printf("�������Ա�(f(Ů)/m(��))��\n");
         scanf(" %c",&a.sex);
         do{
         	if(a.sex != 'f' && a.sex != 'm'){
			 	printf("�Ա�����������������룡\n");
		        scanf("%c",&a.sex);
			 }
		 }while(a.sex != 'f' && a.sex != 'm');
		 getchar();
         printf("������绰���룺\n");
         scanf("%ld",&a.tel);
         printf("����������\n");
         scanf(" %s",&a.pwd);
         printf("��ȷ������\n");
         scanf(" %s",&temp);
		 do{
         	if(!strcmp(a.pwd,temp)){
         		fp = fopen("users.txt","ab+");
         		 a.pj=0;
		         fwrite(&a, sizeof(struct student), 1, fp);
		         printf("�˺�ע��ɹ������������¼����\n"); 
		         fclose(fp);
		         Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			     break;
			 }else{
			 	printf("�������벻ƥ�䣡���������룡\n");
		         scanf("%s",&a.pwd);
		         printf("��ȷ������\n");
		         scanf("%s",&temp);
			 }
		 }while(1);
		 xs_dr();
}
void menu_xs2()//ѧ���˲˵� 
{
	system("cls") ;//��������
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|------��ӭ�����ʦ���۹���ϵͳ-------|\n");
	printf("\t\t\t\t|---------------ѧ����----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|---------1.���н�ʦ����--------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	printf("\t\t\t\t|---------0.�������˵�----------------|\n");
	printf("\t\t\t\t|-------------------------------------|\n");
	int num_menu=0;
	scanf("%d",&num_menu);//�������֣�������0~3����ʾ�󷵻�ԭ�˵� 
	switch(num_menu)
	{
		case 1:pj_xj();break;
		case 0:menu();break;
		default:
			printf("�������󣬽���3s�󷵻ز˵�!\n");
			Sleep(3000);//˯�ߣ��ú���Ķ��������У�3000=3s 
			menu_xs2();
			break;
	} 
}
void pj_xj()//����-ѧ������ 
{
	system("cls"); 
	if(xs.pj==0)
	{
		printf("��ѧ���������ۣ�\n");
		printf("���۽�һ�Σ���������ģ�\n");
		printf("2s�����ζԽ�ʦ�������ۣ�\n");
		Sleep(2000);
		FILE *fp=fopen("jwcdata.txt","r");//�򿪽�ʦ�ļ� 
		FILE *fpt=fopen("temp.tmp", "w");//������ʱ�ļ��������޸���Ϣ 
		FILE *fp2=fopen("users.txt","rb");//��ѧ���ļ� 
		FILE *fpt2=fopen("user.tmp","wb");//������ʱ�ļ��������޸���Ϣ 
		struct teacher th2={};
		while(fscanf(fp,"%s %s %s %s %s %lf %lf %lf",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,&th2.rs,&th2.av,&th2.sum)!=EOF)//��������ʱ�˳�ѭ�� 
		{
			printf("%s��ʦ��",th2.name);
			int pj_num=0;
			scanf("%d",&pj_num);
			printf("\n");
			th2.rs+=1;
			th2.sum+=pj_num;
			th2.av=th2.sum/th2.rs;
			fprintf(fpt,"%s %s %s %s %s %lf %lf %lf\n",th2.name,th2.gh,th2.sex,th2.tel,th2.kc,th2.rs,th2.av,th2.sum);
		}
		xs.pj=1;
		students xs2={};
		while(!feof(fp2))//��������ʱ�˳�ѭ�� 
		{
			fread(&xs2, sizeof(struct student),1, fp2); 
			if(strcmp(xs.gh,xs2.gh)==0)
			{
				fwrite(&xs, sizeof(struct student),1, fpt2);//���Ϲ�������ʱ���������ϢΪ�޸ĺ�� 
			}
			else
			{
				fwrite(&xs2, sizeof(struct student),6, fpt2);//������ʱ������ԭ��Ϣ 
			}
		}
		fclose(fp);
		fclose(fpt);
		fclose(fp2);
		fclose(fpt2);
		remove("jwcdata.txt");//���Ƴ�ԭ�ļ� 
	    rename("temp.tmp","jwcdata.txt");//�����ļ����� 
	    remove("users.txt");//���Ƴ�ԭ�ļ� 
	    rename("user.tmp","users.txt");//�����ļ����� 
		printf("��������ɣ�\n"); 
		printf("����󷵻ز˵�!");
		Sleep(3000);
		menu_xs2(); 
	}
	else
	{
		printf("���ѽ��й����ۣ�\n");
		printf("����󷵻ز˵�!");
		Sleep(3000);
		menu_xs2(); 
	}
} 
