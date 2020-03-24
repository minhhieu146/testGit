char s1[105], s2[105], s3[105], s4[105];
int main(){
	scanf("%s %s %s %s", &s1, &s2, &s3, &s4);
	int a = s1[0] - 48, b = s2[0] - 48, c = s3[0] - 48, d = s4[0] - 48;
	if(a < b)
	{
		if(b < c)
		{
			if(c < d) printf("D C B A");
			else printf("D C A B");
		}
		if(b > c)
		{
			if(c < a)
			{
				if(c > d) printf("B A C D");
				else printf("B A D C");
			}
			else
			{
				if(a > d) printf("C A B D");
				else printf("D A B C");
			}
		}
	}
	else
	{
		if(b > c)
		{
			if(c < d) printf("A B D C");
			else printf("A B C D");
		}
		else
		{
			if(c > a)
			{
				if(d > c) printf("B A C D");
				else
				{
					if(a > d) printf("C A D B");
					else printf("B A D C");
				}
			}
			else
			{
				if(b < c)
				{
					if(c > d) printf("A B C D");
					else
					{
						if(b > d) printf("A B D C");
						else printf("A C D B");
					}
				}
			}
		}
	}
}
