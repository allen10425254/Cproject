#include<iostream> 
using namespace std;
main()
{
	int x[3][3][3];
	for (int i=0;i<2;++i)
	{
		
		cout<<"½Ð¿é¤J"<<i<<"¯x°}:";
		for(int j=0;j<3;++j) 
		{
			
			for(int k=0;k<3;++k)
			{
				cin>>x[i][j][k];
			}	
		}		
	}
	for (int i=0; i<3;++i)
	{
		for(int j=0;j<3;++j){
			x[2][i][j]=0;
		}	
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			
			for(int k=0;k<3;++k){
				x[2][i][j]+=(x[0][i][k]*x[1][k][j]);
			}
		}
	}
		cout<<"µª®×:\n";
		for(int i=0;i<3;++i){
			
			for(int j=0;j<3;++j){
				cout<<x[2][i][j]<<"\t";
			} 
			cout<<"\n";
		}
		
	
	
	
	
	
}
