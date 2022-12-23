#include <stdio.h>
int main()
{
    char t_table[100][100];
    char c_sym,c_state;
    int i,j,n_sym,n_state;
    printf("Enter the no. symbols in alphabets set \n");
    scanf("%d",&n_sym);
    printf("Enter the no. states \n");
    scanf("%d",&n_state);
    printf("enter transition table::\n");
    for(i=0;i<n_state+1;i++)
    {
    	for(j=0;j<n_sym+2;j++)
    	{
    	scanf("\n");
    	scanf("%c",&t_table[i][j]);
    	}
    }
    for(i=0;i<n_state+1;i++)
    {
    	for(j=0;j<n_sym+2;j++)
    	{    
    	printf("%c \t",t_table[i][j]); 
    	}
    printf("\n");
    }
    printf("Enter the string \n");
    scanf("\n");
    c_state=t_table[1][0];
    while((c_sym=getchar())!='\n')
    {
    printf("on %c state applying symbol %c ",c_state,c_sym);
    i=1;
    	while(c_state!=t_table[i][0])
    	i++;
    	j=1;
    	while(c_sym!=t_table[0][j])
    	j++;
    	c_state=t_table[i][j];
    	printf("goes to %c \n",c_state);
    }
    i=1;
    while((c_state!=t_table[i][0]))
    i++;
    if(t_table[i][n_sym+1]=='F')
    	printf("\n\n Accepted \n\n");
    else
    	printf("\n\n Not accepted \n\n");
	return 0;
}
