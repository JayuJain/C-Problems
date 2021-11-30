#include <stdio.h>
#include <stdlib.h>
//WAP to read 100 integers from 1 to 100 print integers in descending order of frequency
int main()
{
    int a[101],i,j,no,l[11],f[11],temp,count,n;
    printf("Enter the number of integers you want to input:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&no);
     if(no>=1 && no<=10){
        a[i]=no;
     }
     else{
        printf("\n Error");
     }
    }
    for(i=1;i<=10;i++){
    l[i]=i;
    f[i]=0;count=0;
        for(j=1;j<=n;j++){
            if(l[i]==a[j]){
                count++;
            }
        }
        f[i]=count;
    }
    for(j=1;j<=9;j++){
     for(i=1;i<=10-j;i++){
        if(f[i]<f[i+1]){
            temp=f[i];
            f[i]=f[i+1];
            f[i+1]=temp;
            temp=l[i];
            l[i]=l[i+1];
            l[i+1]=temp;
        }
    }
    }

    for(i=1;i<=10;i++){
    printf("\n%3d %3d",l[i],f[i]);
    }

    return 0;
}
