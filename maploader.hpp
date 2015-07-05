//tile map loader
#include <fstream>
#include <iostream>
#include <exception>
#include <vector>
class map{
public:
	char ** objects;
	map(std::string location,int x,int y){
		objects = new char* [x-1];
		for (int i=0; i<x; i++){
			objects[i]= new char [y-1];
		}
		std::ifstream file(location);
		if ( !file ){
			std::cout << "File not found.";
			system("pause");
			exit( 1 );
		}
		char ch;
		try{
			for(int y_pos=0; y_pos<y; y_pos++){
				for(int x_pos=0; x_pos<x; x_pos++){
					file.get(ch);
					if (ch=='\n'){
						file.get(ch);
					}
					std::cout << ch << " ";
					objects[x_pos][y_pos]=ch;
				}
				std::cout << std::endl;
			}	
		}catch(std::exception& e){
			std::cout << e.what();
		}
		file.close();
	}
};
