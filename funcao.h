//Bubble sort
void bs(int *v,int n)
{
	int i, j, aux;
	for(i=0; i<(n-1); i++)
	{
		for (j=(i+1); j<(n);j++)
		{
			if(v[i] > v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}

//Selection sort
void ss(int *v, int n)
{
	int j,i, m, t;
	
	for(i=0; i<(n-1); i++)
	{
		m=i;
		for(j=(i+1); j<n; j++)
		{
			if(v[j] < v[m])
			{
				m=j;
			}
				if(i!=m)
				{
					t=v[i];
					v[i]=v[m];
					v[m]=t;
				}
				
		}
	}
}

//Insertion sort
void is(int *v, int n)
{
	int i, j, a;
	
	for(i=1; i<n; i++)
	{
		a=v[i];
		for(j=i; (j>0) && (a<v[j-1]); j--)
		{
			v[j]=v[j-1];
		}
		v[j]=a;
	}
}

