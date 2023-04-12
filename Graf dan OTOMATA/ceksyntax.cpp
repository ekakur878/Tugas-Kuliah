#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Following code is Designed for checking code in given Limitations of C CODE ....
#define max_line_length 100 //Maximum length of line of C Code.
#define max_line_in_file 1000 //Maximum Lines in C Code.

//User defined Types..
typedef struct{
	int line_no;
	int line_len;
	char line_type[25]; 
	char line_text[max_line_length]; 
} codeline_t; //To find number of lines and text in it its type.

//For keywords..
typedef struct{
	char key[100];
} types;

types key_word[] = {"break","case","switch","for","while","do",
"if","else","enum","typedef;","void","const","default","return","sizeof","int","char","float","long",
"double"};
types store[1000];


typedef struct
{
	char datatype[100];
} f_count;

f_count datatype_count[]={"int","char","float","double","long",};

f_count stor[1000];


typedef struct {
	char func[1000];
}func_count ;
func_count function[]={"int","float","char","void"};
func_count prototype[1000];
func_count total_function[1000];


typedef struct {
	int  line_function;
}line ;
line functio[100];

// Counting of C built in function..
typedef struct{
	char fun_call[100];
}c_type;

c_type c_built_in[]={"printf","scanf","getchar","putchar","getche","strcpy","strncpy","strcmp",
		"strncmp","fscanf","strstr","strchar","strlen","gets","puts","abs",
		"pow","toupper","tolower","isalpha","islower","isupper","clock"};
		
		
// global variables..

codeline_t *ccode, *ccode_ws;

// Functions Prototypes...


//function prototypes
int read_c_code_from_file (const char *filename); // Const data to a non const pointer for keeping file name constant
void braces_check(int nooflines,int ba[max_line_length],int ca[max_line_length]);
void count_keywords(int nooflines);
void humanerror(int nooflines);
void commented_lines(int nooflines);
void functions_C(int nooflines);
void count_lib(int nooflines);

// Main .. Excecution of Code begins From here.

int main()
{
	int nooflines;
	int ba[max_line_length],ca[max_line_length]; // Arrays for braces Check, send to func.
	char ch;
	
	ccode = (codeline_t *) malloc(max_line_in_file * sizeof(codeline_t)); //allocates Space for global variable;
	ccode_ws = (codeline_t *) malloc(max_line_in_file * sizeof(codeline_t)); //allocates Space for global variable;
	
	// Filing Begins ..
	
	nooflines = read_c_code_from_file("Test program.txt"); //<<<---Enter file name here
	if(nooflines==-1)
	{
		printf("Error reading File, Kindly Check the File name You provided\n");
		return 0;
	}
	printf("\n\n\t\t\t\tOUTPUT REPORT\n\n");
	system("color f3");
	printf("Total lines in code are %d\n",nooflines);
	
	
	printf("\nPress Enter to check Braces\n");
	ch = getchar();
	if(ch=='\n')
	{
		braces_check(nooflines,ba,ca); // Call to function of Braces.
	}
	
	
	printf("\n\nPress Enter to check how many keywords in text file\n");
	ch=getchar();
    if(ch=='\n')
    {
    	count_keywords(nooflines); //call to function of keywords count.
	}
	
	
	printf("\n\nPress Enter to check human error of semicolon(;) in text file\n");
	ch=getchar();
    if(ch=='\n')
    {
    	humanerror(nooflines); // call to functon of human error
	}
	
	printf("\n\nPress Enter to check no. of commented lines in text file\n");
	ch=getchar();
	if(ch=='\n')
	{
		commented_lines(nooflines); // call to function of checking commented lines
    }
	
	printf("\n\n\nPress Enter to check no. of C builtin func's called\n");
	ch=getchar();
	if(ch=='\n')
	{
		functions_C(nooflines); // call to c built in func counting.
	}
	
	printf("\n\n\nPress Enter to check no. of C Libraries included\n");
	ch=getchar();
	if(ch=='\n')
	{
		count_lib(nooflines); // call to c built in func counting.
	}
	
}


// Function Filing Code .. Reading C code from file.

int read_c_code_from_file(const char *filename)
{
	FILE *ptr;
	char buf[max_line_length]; // max length for reading File ..
	int line = 1, i=0; //line=1 to start reading from line 1 as there is no line zero in file.
	codeline_t *c; //codeline_t is user define data type defined above while *c is pointer to it.
	
	ptr = fopen(filename,"r");
	if(!ptr)
	{
		return -1; //Just returns -1 for all kinds of errors regarding opening C CODE .
	}
	
	while(fgets(buf,max_line_length,ptr)!=NULL)
	{
		ccode[i].line_no = line;
		strcpy(ccode[i].line_text,buf);
		ccode[i].line_len = strlen(buf);
		line++; //increment in line number.
		i++; //increment in looping variable
	}
	
	line--; //To adjust the total line.
	fclose(ptr);
	return line;
}
//End of filing function...

//Function for checking 3 types of Brasis

void braces_check(int nooflines,int ba[100],int ca[100])
{
	int i,a=0,j=0,c=0,b=0; 
	// curly braces
	for (i = 0; i < nooflines; i++ )
	 {
	 	
		for(j=0;j<ccode[i].line_len;j++)
		{
			if(ccode[i].line_text[j]=='{')
			{
				a=a+1;
				ba[b]=i+1;
				b++;
			}
			else if(ccode[i].line_text[j]=='}')
			{
				a=a-1;
				ca[c]=i+1;
				c++;
				
			}
		}			
	}
	if(a==0)
	{
		printf("No {} error of braces\n");
	}
	else if(a>0)
	{
		for(i=0;i<a;i++)
		{
		printf("extra { is at line %d\n",ba[b-i-1]);	
		}	
	}
	else if(a<0)
	{
		for(i=-1;i>=a;i--)
		{
		printf("extra } is at line %d\n",ca[c+i]);
		}
	}

	// small braces
	i,a=0,j=0,c=0,b=0; 
		for (i = 0; i < nooflines; i++ )
	 {
	 	
		for(j=0;j<ccode[i].line_len;j++)
		{
			if(ccode[i].line_text[j]=='(')
			{
				a=a+1;
				ba[b]=i+1;
				b++;
			}
			else if(ccode[i].line_text[j]==')')
			{
				a=a-1;
				ca[c]=i+1;
				c++;
				
			}
		}			
	}
	if(a==0)
	{
		printf("No () error of braces\n");
	}
	if(a>0)
	{
		for(i=0;i<a;i++)
		{
		printf("extra ( is at line %d\n",ba[b-i-1]);	
		}	
	}
	else if(a<0)
	{
		for(i=-1;i>=a;i--)
		{
		printf("extra ) is at line %d\n",ca[c+i]);
		}
	}

		// square braces
	i,a=0,j=0,c=0,b=0; 
		for (i = 0; i < nooflines; i++ )
	 {
	 	
		for(j=0;j<ccode[i].line_len;j++)
		{
			if(ccode[i].line_text[j]=='[')
			{
				a=a+1;
				ba[b]=i+1;
				b++;
			}
			else if(ccode[i].line_text[j]==']')
			{
				a=a-1;
				ca[c]=i+1;
				c++;
				
			}
		}			
	}
	if(a==0)
	{
		printf("No [] error of braces\n");
	}
	if(a>0)
	{
		for(i=0;i<a;i++)
		{
		printf("extra [ is at line %d\n",ba[b-i-1]);	
		}	
	}
	else if(a<0)
	{
		for(i=-1;i>=a;i--)
		{
		printf("extra ] is at line %d\n",ca[c+i]);
		}
	}	
}

//function of counting keywords...
void count_keywords(int nooflines)
{
	int k=0,l=0,lenk,z,count=0,i,j=0,n=0,m,p,t;
    int breaks=0,cases=0,mains=0,enums=0,consts=0,defaults=0,dos=0,returns=0;
    int sizeofs=0,switchs=0,typedefs=0,voids=0,whiles=0,elses=0,fors=0,ifs=0;
    int ints=0,floats=0,chars=0,longs=0,doubles=0;
  	for(p=0;p<19;p++)
	{
	  
	    for (i = 0; i < nooflines; i++ )
		{
	 	
			for(j=0;j<ccode[i].line_len;j++)
			{
					
				if(ccode[i].line_text[j]==key_word[p].key[0])
			{
				t=strlen(key_word[p].key);
				z=1;
				for(l=1;l<t;l++)
				{
					if(ccode[i].line_text[j+l]==key_word[p].key[l])
					{
						
					z++;	
					}
					else
					{
						break;
					}
					
				}
				
				j=j+z;
				
				if(z==t)	
				{
					
					if(ccode[i].line_text[j]=='\n' || ccode[i].line_text[j]==32|| ccode[i].line_text[j]=='\0' || ccode[i].line_text[j]=='('  || ccode[i].line_text[j]=='{' )	
					{
						strcpy(store[n].key,key_word[p].key);
						n++;	
					}
				}
				
				else
				{
						while(ccode[i].line_text[j]!=32 )
						{
							j++;
								if(j==ccode[i].line_len-1)
								{
								break;
								}
						}
				}
			}  

		}
	}
}
	
	for(m=0;m<n;m++)
	{
		if(strcmp(key_word[0].key,store[m].key)==0)
		{
			breaks++;
		}
		
		if(strcmp(key_word[1].key,store[m].key)==0)
		{
			cases++;
		}
		
		if(strcmp(key_word[2].key,store[m].key)==0)
		{
			switchs++;
		}
		
		if(strcmp(key_word[3].key,store[m].key)==0)
		{
			fors++;
		}
		if(strcmp(key_word[4].key,store[m].key)==0)
		{
			whiles++;
		}
		if(strcmp(key_word[5].key,store[m].key)==0)
		{
			dos++;
		}
		if(strcmp(key_word[6].key,store[m].key)==0)
		{
			ifs++;
		}
		if(strcmp(key_word[7].key,store[m].key)==0)
		{
			elses++;
		}
		if(strcmp(key_word[8].key,store[m].key)==0)
		{
			enums++;
		}
		if(strcmp(key_word[9].key,store[m].key)==0)
		{
			typedefs++;
		}
		if(strcmp(key_word[10].key,store[m].key)==0)
		{
			consts++;
		}
		if(strcmp(key_word[11].key,store[m].key)==0)
		{
			defaults++;
		}
	
		if(strcmp(key_word[12].key,store[m].key)==0)
		{
			voids++;
	}
		if(strcmp(key_word[13].key,store[m].key)==0)
		{
			returns++;
		}
		if(strcmp(key_word[14].key,store[m].key)==0)
		{
			sizeofs++;
		}
		if(strcmp(key_word[15].key,store[m].key)==0)
		{
			ints++;
		}
		if(strcmp(key_word[16].key,store[m].key)==0)
		{
			floats++;
		}
		if(strcmp(key_word[17].key,store[m].key)==0)
		{
			chars++;
		}
		if(strcmp(key_word[18].key,store[m].key)==0)
		{
			longs++;
		}
		if(strcmp(key_word[19].key,store[m].key)==0)
		{
			doubles++;
		}
		
	}

	printf("number of break = %d\n",breaks);
	printf("number of case = %d\n",cases);
	printf("number of switch = %d\n",switchs);
	printf("number of for = %d\n",fors);
	printf("number of while = %d\n",whiles);
	printf("number of do = %d\n",dos);
	printf("number of if = %d\n",ifs);
	printf("number of else = %d\n",elses);
	printf("number of enum = %d\n",enums);
	printf("number of typedef = %d\n",typedefs);
	printf("number of void = %d\n",voids);
	printf("number of const = %d\n",consts);
	printf("number of default = %d\n",defaults);
	printf("number of returns = %d\n",returns);
	printf("number of sizeof = %d\n",sizeofs);

	printf("\n\nNumber of data type words used in text file\n ");
	
	printf("\nNumber of Int's in text file are %d",ints);
	printf("\nNumber of char's in text file are %d",chars);
	printf("\nNumber of float's in text file are %d",floats);
	printf("\nNumber of long's in text file are %d",longs);
	printf("\nNumber of doubles's in text file are %d",doubles);	

}

// function for checking ; after loops n conditions and such human error.
void humanerror(int nooflines)
{	int i=0,j=0,h=0;
	int f[max_line_length],w[max_line_length],f2[max_line_length],d[max_line_length],l[max_line_length];
	int a=0,b=0,c=0,u=0,k=0;
	for(i=0;i< nooflines;i++)
	{
		for(j=0;j<ccode[i].line_len;j++)
		{
			
			//for loop mistakes
			if(ccode[i].line_text[j]=='f')
			{
				j++;
					if(ccode[i].line_text[j]=='o')
						{
							j++;
							if(ccode[i].line_text[j]=='r')
							{
								j++;
								if(ccode[i].line_text[j]=='(')
								{
									j++;
									
									for(h=j;h<ccode[i].line_len;h++)
									{
										if(ccode[i].line_text[h]==')')
										{
											j++;
											if(ccode[i].line_text[h+1]==';')
											{
												f[a]=i+1;
												a++;
												break;
											}
										}
									}
				}
				}
				}
			}
			
			// while loop mistakes
			else if(ccode[i].line_text[j]=='w')
			{
				j++;
				if(ccode[i].line_text[j]=='h')
				{
					j++;
					if(ccode[i].line_text[j]=='i')
					{
						j++;
						if(ccode[i].line_text[j]=='l')
						{
							j++;
							if(ccode[i].line_text[j]=='e')
							{
								j++;
								if(ccode[i].line_text[j]=='(')
								{
									j++;
									for(h=0;h<ccode[i].line_len;h++)
									{
										if(ccode[i].line_text[h]==')')
										{
											if(ccode[i].line_text[h+1]==';')
											{
												w[b]=i+1;
												b++;
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//for misatakes after if
			else if (ccode[i].line_text[j]=='i')
			{
				j++;
				if(ccode[i].line_text[j]=='f')
				{
					j++;
					for(h=0;h<ccode[i].line_len;h++)
					{
						if(ccode[i].line_text[h]==')')
						{
							if(ccode[i].line_text[h+1]==';')
							{
								f2[c]=i+1;
								c++;
								break;
							}
						}
					}
				}
			}
			// for misatkes after do
			else if (ccode[i].line_text[j]=='d')
			{
				j++;
				if(ccode[i].line_text[j]=='o')
				{
					j++;
							if(ccode[i].line_text[j]==';')
							{
								d[u]=i+1;
								u++;
								break;
							}
						
					}
			}
			//error after else
			else if(ccode[i].line_text[j]=='e')
			{
				j++;
				if(ccode[i].line_text[j]=='l')
				{
					j++;
					if(ccode[i].line_text[j]=='s')
					{
						j++;
						if(ccode[i].line_text[j]=='e')
						{
							j++;
							if(ccode[i].line_text[j]==';')
							{
								l[k]==i+1;
								k++;
								break;
							}
						}
					}
				}
			}
			
			
		}
	}
	
	int m=0;
	
	if(a==0 && b==0 && c==0 && u==0 && k==0)
	{
		printf("No human Error in code !");
	}
	else
	{
	for(m=0;m<a;m++)
	{
		printf("\nExtra Semicolon after for loop in line %d",f[m]);
	}
	
	for(m=0;m<b;m++)
	{
		printf("\nExtra Semicolon after while loop in line %d",w[m]);
	}
	
	for(m=0;m<c;m++)
	{
		printf("\nExtra Semicolon after if statment in line %d",f2[m]);
	}
	
	for(m=0;m<u;m++)
	{
		printf("\nExtra Semicolon after do statement in line %d",d[m]);
	}
	
	for(m=0;m<k;m++)
	{
		printf("\nExtra Semicolon after else statement in line %d",l[m]);
	}	
}
}

// function for checking skipped lines in code;
void commented_lines(int nooflines)
{
	int i=0,j=0,k=0,m=0,g[100],h=0;
	
	for(i=0;i<nooflines;i++)
	{
		for(j=0;j<ccode[i].line_len;j++)
		{
			if(ccode[i].line_text[j]=='/')
			{
				j++;
				if(ccode[i].line_text[j]=='/')
				{
					g[h]=i+1;
					h++;
				}
			}
			}
	}
	if(h==0)
	{
		printf("\nNo lines commented\n");
	}
	else
	{
	for(m=0;m<h;m++)
	{
		printf("\nLine %d is commented",g[m]);
	}
}
}

void functions_C(int nooflines)
{
 int i,j,k,l,z,t,p,q,func=0;
  for(p=0;p<23;p++)
    {
   		  for(i=0;i<nooflines;i++)
   		 {
    		for(j=0;j<ccode[i].line_len;j++)
    		{
    			if(ccode[i].line_text[j]==c_built_in[p].fun_call[0])
				{
					t=strlen(c_built_in[p].fun_call);
					z=1;
					for(l=1;l<t;l++)
					{
						if(ccode[i].line_text[j+l]==c_built_in[p].fun_call[l])
						{
							z++;	
						}
						else
						{
						break;
						}	
					
					}
					j=j+t; 
					q=j;
					if(z==t)
					{
						 if(ccode[i].line_text[q]=='(')
    					{
    						q++;
    						while(ccode[i].line_text[q]!=')')
    						{
    							q++;
    							
   							}	
   							q++;
   							if(ccode[i].line_text[q]==';')
    						{
    								func++;
							}
						}
					}
					else
					{
						z=0;
					}		
				}	
			}
		}
	}
		printf("\n\nTotal number of c built in functions call are %d\n",func);			
}

// func for counting libraries 
void count_lib(int nooflines)
{
	int i=0,j=0,lib=0;
	
	for(i=0;i< nooflines;i++)
	{
		for(j=0;j<ccode[i].line_len;j++)
		{
			if(ccode[i].line_text[j]=='#')
			{
				j++;
				if(ccode[i].line_text[j]=='i')
				{
					j++;
					if(ccode[i].line_text[j]=='n')
					{
						j++;
						if(ccode[i].line_text[j]=='c')
						{
							j++;
							if(ccode[i].line_text[j]=='l')
							{
								j++;
								if(ccode[i].line_text[j]=='u')
								{
									j++;
									if(ccode[i].line_text[j]=='d')
									{
										j++;
										{
											if(ccode[i].line_text[j]=='e')
											{
												j++;
												if(ccode[i].line_text[j]=='<')
												{
													j++;
											
													while(ccode[i].line_text[j]!='.')
													{
														j++;
													}
													j++;
													if(ccode[i].line_text[j]=='h')
													{
														lib++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("\nTotal number of included libraries are %d\n",lib);
}

