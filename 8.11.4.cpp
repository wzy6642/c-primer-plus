#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	int c;					//读入字符的ASCII 
	char cr;				//读入字符 
	long n_chars = 0L;		//字符数 
	int n_words = 0; 		//单词数
	float average = 0;		//每个单词中的平均字母数 
	bool inword = false;	//如果c在一个单词中，则inword等于true
	printf("Enter text to be analyzed (Ctrl+Z to terminate): \n");
	while((c = getchar()) != EOF) 
	{
		cr = (char)c;
		if(cr != ' ' && cr != '\n' && !ispunct(cr))
			n_chars++;
		if(!isspace(cr) && !inword)
		{
			inword = true;	//开始一个新单词
			n_words++;		//统计单词 
		}
		if(isspace(cr) && inword)
			inword = false;	//到达单词的尾部 
	}
	average = (float)n_chars / n_words; 
	printf("characters = %ld, words = %ld, average = %.3f", n_chars, n_words, average);
	return 0; 
}
