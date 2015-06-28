/*****************************************************************/
/**	File	: calccomm.c										**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2015.06.28										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calccomm.h"


/*****************************************************************/
/**	Function: CalcTrim											**/
/**	Summary	: Calculator Trim head and tail space				**/
/**	Param	: char* str : string before trim					**/
/**			: Length of string before trim						**/
/**	Return	: Length of string after trim head and tail space	**/
/**	author	: wangchunchun										**/
/**	date	: 2015.06.28										**/
/*****************************************************************/
int CalcTrim(char* pstr, int len)
{
	int i = 0;
	int j = 0;
	int lenAfterTrim;
	
	/* variable initialization */
	lenAfterTrim = len;

	/* Check Parameter */
	if ( (char *)NULL == pstr )
	{
		DEBUG_LOG("pstr is NULL");
		return CALC_RETURN_ERRER;
	}
	
	/* Remove tail space */
	i = len - 1;
	while (isspace(pstr[i]) && i >= 0)
	{
		lenAfterTrim--;
		i--;
	}
	
	/* Remove head space */
	i = 0;
	while (isspace(pstr[i]) && i < len)
	{
		i++;
	}
	
	/* change string array */
	for (j = 0; j < lenAfterTrim && j+i < lenAfterTrim; j++)
	{
		pstr[j] = pstr[j + i];
	}
	lenAfterTrim -= i;
	
	return lenAfterTrim;
}

