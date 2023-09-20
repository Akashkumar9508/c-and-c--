//branch statement

	/*work -> divide -> branches -> called -> case -> follow break -> and wrong input -> default 
	Syntax :
		switch(constant expression)
		{
			case casename:
							codes;
							break;
			case casename:
							codes;
							break;
			case casename:
							codes;
							break;
					default:
							wrong codes;
		}*/
		//check a character is vowel or consonants.
		#include <stdio.h>
		void main()
		{
			char c;
			printf("Enter a character : ");
			scanf("%c",&c);
			switch(c)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
							printf("vowel");
					break;
					default:
						printf("consonants");
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		