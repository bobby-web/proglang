#include<stdio.h>
int g[20][20];
int v,e;
int d[20],p[20],visited[20];

void creategraph()
{
    int a,b,w,i,j;
    printf("ENTER NO. OF VERTICES");
    scanf("%d",&v);
    printf("ENTER NO. OF EDGES");
    scanf("%d",&e);
    for(i=1; i<=v; i++)
        for(j=1; j<=v; j++)
            g[i][j]=0;
    for(i=1; i<=e; i++)
        {
            printf("ENTER EGDE INFORMATION");
            scanf("%d",&a);
            scanf("%d",&b);
            printf("ENTTER WEIGHT OF EDGE");
            scanf("%d",&w);
            g[a][b]=g[b][a]=w;
        }
}
void dij()
{
    int current,mincost=0,i,min;
    int source,dest,dc;
    printf("ENTER SOURCE VERTEX");
    scanf("%d",&source);
    printf("ENTER DESTINATION VERTEX");
    scanf("%d",&dest);
    current=source;
    visited[current]=1;
    d[current]=0;
    while(current!=dest)
        {
            dc=d[current];
            for(i=1; i<=v; i++)
                {
                    if(g[current][i]!=0 && visited[i]!=1)
                        if(g[current][i]+dc<d[i])
                            {
                                d[i]=g[current][i]+dc;
                                p[i]=current;
                            }
                }
            min=32767;
            for(i=1; i<=v; i++)
                {
                    if(visited[i]!=1 && d[i]<min)
                        {
                            min=d[i];
                            current=i;
                        }
                }
            visited[current]=i;
        }
    printf("shortest distance between %d and %d =%d\n",source,dest,d[dest]);
}

void main()
{
    int i;
    creategraph();
    for(i=1; i<=v; i++)
        {
            visited[i]=p[i]=0;
            d[i]=32767;
        }
    dij();
}