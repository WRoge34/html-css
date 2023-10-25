#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char ryan1,ryan2,filipe1,filipe2,ruan1,ruan2,heron1,heron2;
    int valor[10];
    int pryan=0,pruan=0,pfilipe=0,pheron=0
    scanf("%c %c %c %c %c %c %c %c",&ryan1,&filipe1,&ruan1,&heron1,&ryan2,&filipe2,&ruan2,&heron2);
    for(int i=0;i<10;i++){
        scanf("%d",valor[i]);
    }
    a=valor[0];
    b=valor[1];
    c=valor[2];
    d=valor[3];
    e=valor[4];
    i=valor[5];
    j=valor[6];
    k=valor[7];
    l=valor[8];
    m=valor[9];

    pryan+=(ryan1*ryan2);
    pfilipe+=(filipe1*filipe2);
    pruan+=(ruan1+ruan2);
    pheron+=(heron1*heron2);

    pryan=pryan%100;
    pfilipe=pfilipe%100;
    pruan=pruan%100;
    pheron=pheron%100;
    
    if(pryan>pfilipe && pryan>pruan && pryan>pheron){
        printf("Ryan %d - Vencedor\n",pryan);
    }else if(pfilipe>pryan && pfilipe>pruan && pfilipe>pheron){
        printf("Filipe %d - Vencedor\n",pfilipe);
    }else if(pruan>pfilipe && pruan>pryan && pruan>pheron){
        printf("Ruan %d - Vencedor\n",pruan);
    }else if(pheron>pfilipe && pheron>pruan && pheron>pryan){
        printf("Heron %d - Vencedor\n",pheron);
    }
    
    if(pryan<pfilipe && pryan<pruan && pryan<pheron){
        printf("Ryan %d - Perdedor\n",pryan);
    }else if(pfilipe<pryan && pfilipe<pruan && pfilipe<pheron){
        printf("Filipe %d - Perdedor\n",pfilipe);
    }else if(pruan<pfilipe && pruan<pryan && pruan<pheron){
        printf("Ruan %d - Perdedor\n",pruan);
    }else if(pheron<pfilipe && pheron<pruan && pheron<pryan){
        printf("Heron %d - Perdedor\n",pheron);
    }

    return 0;
}