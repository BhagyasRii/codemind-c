#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i,l,d,v,c,w;
    d=0;
    c=1;
    v=1;
    w=0;
    fgets(s,200,stdin);
    l=strlen(s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
        else if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
            c++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
        	d++;
		}
		else
		{
			w++;
		}
    }
    
    printf("Vowels: %d
",v-1);
    printf("Consonants: %d
",c-1);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
    return 0;
}