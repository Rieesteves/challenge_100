#include<iostream>

 using namespace std;

 
int isVowel (char c);
int isConsonant (char c);
int isDigit (char c);
int isWhitespace (char c);

int main ()
{
  
char str[500];
  
int V = 0, C = 0, D = 0, W = 0, i;
  
 
cout << "Enter a string\n";
  
gets (str);
  
 
for (i = 0; str[i] != '\0'; i++)
    {
      
if (isVowel (str[i]))
	{
	  
V++;
	
}
      else if (isConsonant (str[i]))
	{
	  
C++;
	
}
      else if (isDigit (str[i]))
	{
	  
D++;
	
}
      else if (isWhitespace (str[i]))
	{
	  
W++;
}
}
  
cout << "Vowels: " << V << endl;
  
cout << "Consonants: " << C << endl;
  
cout << "Digits: " << D << endl;
  
cout << "White spaces: " << W << endl;
  
return 0;

}

int
isVowel (char c)
{
  
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A'
       || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
      
return 1;
    
}
  else
    {
      
return 0;
    
}

}


 
int
isConsonant (char c)
{
  
if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) && !isVowel (c))
    {
      
return 1;
    
}
  else
    {
      
return 0;
    
}

}


 
int
isDigit (char c)
{
  
if (c >= '0' && c <= '9')
    {
      
return 1;
    
}
  else
    {
      
return 0;
    
}

}


 
int
isWhitespace (char c)
{
  
if (c == ' ')
    {
      
return 1;
    
}
  else
    {
      
return 0;
    
}

}
