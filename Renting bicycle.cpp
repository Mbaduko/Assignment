#include <iostream>
int payment(int a,int b);
int main()
{   
	int s_time,e_time;
	bool check_data;
	Again:
	std::cout<<"when have you started(0-23):\n";
	std::cin>>s_time;
	std::cout<<"enter the ending time(1-24):\n";
	std::cin>>e_time;
	(s_time>=0 && s_time<=23&&e_time>=1&&e_time<=24)?check_data=1:check_data=0;
	if(check_data==0) 
	{
		std::cout<<"Incorrect input please try again\n";
		goto Again;	
	}

		std::cout<<"Pay:"<<payment(s_time,e_time)<<"\t Please";
		return 0;
}



int payment(int a,int b)
{
	int Amount=0;
		for(;;)
	{
		
	
	if (a>=0 && a<7)
	{
		if(b>=0 && b<7)
		{
	
			Amount+=(b-a)*500;
			break;
		}
	
		else
		{
			Amount+=(7-a)*500;
			a=7;
		}
	}
	
	
	
	
	else if(a>=7 && a<14)
	{
		if(b>=7&& b<14)
		{
	
			Amount+=(b-a)*1000;
			break;
		}
	
		else
		{
			Amount+=(14-a)*1000;
			a=14;
		}
	}
	
	
	
	else if(a>=14&& a<19)
	{
		if(b>=14&& b<19)
		{
	
			Amount+=(b-a)*1500;
			break;
		}
	
		else
		{
			Amount+=(19-a)*1500;
			a=19;
		}
	}
	
	
	
		else if(a>=19 && a<21)
	{
		if(b>=19 && b<21)
		{
	
			Amount+=(b-a)*1000;
			break;
		}
	
		else
		{
			Amount+=(21-a)*1000;
			a=21;
		}
	}
	
	
	
	
	
		else if(a>=21 && a<24)
	{
		if(b>=21&& b<=24)
		{
	
			Amount+=(b-a)*500;
			break;
		}
	
		else
		{
			Amount+=(24-a)*500;
			a=23;
		}
	}
}

return(Amount);

}


	



