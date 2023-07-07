#include <iostream>
int main()
{
	std::string gills, forests, ring, convex;
	std::cout<<"\n\n\t\t\t\tYour input must be ~yes or no~ otherwise you will get wrong answern\n";
		std::cout<<"\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout<<"\tDoes your  mushroom have convex cup?\n";
	std::cin>>convex;
	if(convex=="yes")
	{
		std::cout<<"\tDoes your  mushroom grow in forests?\n";
		std::cin>>forests;
		if(forests=="no")
		{
			std::cout<<"\tYour mushroom is Agaric jaunissant\n";
		}
		else
		{
			std::cout<<"\tDoes your  mushroom have ring?\n";
			std::cin>>ring;
			if(ring=="yes")
			{
				std::cout<<"\tYour mushroom is Amanite tuemouche\n";
			}
			else
			{
				std::cout<<"\tYour mushroom is Pied bleu\n";
			}
		}
	}
	else
	{
		std::cout<<"\tDoes your  mushroom have ring?\n";
		std::cin>>ring;
		if(ring=="yes")
		{
			std::cout<<"\tYour mushroom is coprin chevelu\n";
		}
		else
		{
			std::cout<<"\tDoes your  mushroom have gills?\n";
			std::cin>>gills;
			if(gills=="yes")
			{
				std::cout<<"\tYour  mushroom is Girolle?\n";
			}
			else
			{
				std::cout<<"\tYour  mushroom is Cepe bordeaux\n";
			}
		}
		
	}
		
	return 0;
}
