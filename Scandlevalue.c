#include<stdio.h>
void main()
{
	int i,j,flag,conter,pontr,ans;
	int mat[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the value : ");
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nThe matrix is /..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][0] > mat[i][j+1] && mat[i][0] > mat[i][j+2])
			{
				conter=mat[i][j+1]+mat[i][j+2];
				if(mat[i][0] == conter)
				{
					flag=conter;
					pontr=i;
				}
			}
			if(mat[i][1] > mat[i][j] && mat[i][1] > mat[i][j+2])
			{
				conter=mat[i][j]+mat[i][j+2];
				if(mat[i][1] == conter)
				{
					flag=conter;
					pontr=i;
				}
			}
			if(mat[i][2] > mat[i][j+1] && mat[i][2] > mat[i][j])
			{
				conter=mat[i][j+1]+mat[i][j];
				if(mat[i][2] == conter)
				{
					flag=conter;
					pontr=i;
				}
			}
		}
	}
	for(pontr=0;pontr<3;pontr++)
	{
		if(mat[pontr]<mat[pontr+1]&&mat[pontr]<mat[pontr+2])
		{
			ans=flag;
		}
		if(mat[pontr]<mat[pontr-1]&&mat[pontr]<mat[pontr+1])
		{
			ans=flag;
		}
		if(mat[pontr]<mat[pontr-1]&&mat[pontr]<mat[pontr-2])
		{
			ans=flag;
		}
	}
	printf("\nThe scandle Value is ... %d",ans);
}
