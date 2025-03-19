#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>


std::vector<double> mapper(double x, int size){
	for (int i=0; i<size; i++){
		x[i]= (x[i]*3-7)/4;
    }
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
	
	std::vector<double> numeri; 
    double valore;
    int size=0;
    while (file >> valore) { 
        numeri.push_back(valore);
		size++;
    }
	for (int i=0; i<size; i++){
			
		    std::cout << std::scientific << std::setprecision(16) <<numeri[i] << std::endl;
		}
	
	std::cout << size << std::endl;
	/*
	double x[size];
    x = mapper(valore,size);
	
	
	std::string filename = "result.txt";
	std::ofstream ofs(filename);
	if ( ofs.is_open() ) {
		ofs << "# N Mean\n" << std::endl;
		double somma=0.0;
		double media;
		for (int i=0; i<size; i++){
			somma = somma + x[i];
			media = somma/(i+1);
		    ofs << i+1 << media << std::endl ;
		}
		ofs.close();
	}					
	
		*/
			
    return 0;
}


		
		
		
		