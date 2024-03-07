#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int a[]={0,1,2};
    char b[]="ABC";
    float c[]={1.1,1.2,1.3};
    fp=fopen("a.bin","wb+");
    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);
    fseek(fp,0,SEEK_SET);
    int ra[3];
    char rb[3];
    float rc[3];
    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),3,fp);
    fread(rc,sizeof(float),3,fp);
    for(int i=0;i<3;i++){
        printf("%d ",ra[i]);
        if(i==2)printf("\n");
    }
     for(int i=0;i<3;i++){
        printf("%c ",rb[i]);
        if(i==2)printf("\n");
    }
    for(int i=0;i<3;i++){
        printf("%f ",rc[i]);
    }
}
