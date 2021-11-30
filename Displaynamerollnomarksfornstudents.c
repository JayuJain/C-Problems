#include <stdio.h>
#include <stdlib.h>
struct student{
    char sname[40];
    char sid[10];
    int t;
};
int sort(int n,struct student sr[60]){

    int i,j;
    struct student temp;
    for(i=1;i<=n-1;i++){
    for(j=1;j<=n-i;j++){
        if(sr[j].t<sr[j+1].t){
            temp=sr[j];
            sr[j]=sr[j+1];
            sr[j+1]=temp;

        }
    }

    }
}

int main()
{
    int n,i,j;
    struct student sr[60];
    printf("Enter total number of student:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
    printf("%d Enter student name:",i);
    scanf("%s",sr[i].sname);
    printf("\nEnter student ID:");
    scanf("%s",sr[i].sid);
    printf("Enter total pcm marks:",i);
    scanf("%d",&sr[i].t);
    }
    sort(n,sr);

    printf("SR.  Name     StuID     Total marks");
    for(i=1;i<=n;i++){
    printf("\n%d    %s        %s         %d",i,sr[i].sname,sr[i].sid,sr[i].t);
    }
    return 0;
}
