unsigned int Onbit(unsinged int iNO, int iPos)
{
	unsigned int imask=0X00000001;
	unsigned int iret=0;
	unsigned int imask=0X00000001<<(iPos-1);
	iret=iNO | imask;
	
	return iret;
	
}