#include <fstream>
#include <iostream>
#include <iomanip>

double mapper(double x){
	x = ( x*3 - 7 )/4;
    return x;	
}

int main()
{
	std::ifstream file("data.txt");
	if(file.fail())
	{
		std::cerr <<"errore nell'apertura del file" << std::endl;
		return 1;
	}

    double valore;
	double x;
	
	std::string filename = "result.txt";
	std::ofstream ofs(filename);
	int i=0;
	if ( ofs.is_open() ) {
		ofs << "# N Mean\n";
		double somma=0.0;
		double media;
		while (file >> valore) {
			x = mapper(valore);
			somma = somma + x;
			media = somma/(i+1);
		    ofs << i+1 <<" " << std::scientific << std::setprecision(16) << media << std::endl ;
			i++;
		}
		ofs.close();
	}					
	
	
    return 0;
}


		
		
		
		


