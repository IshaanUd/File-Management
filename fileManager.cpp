#include<iostream>
#include <memory>
#include <fstream>
#include <string>

class FileSource{

public:


     // file opener
 FileSource(const std::string& filename) {
        file.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);

        if (!file.is_open()) {
            throw std::runtime_error("Could not open file.");
        }
     }
     
     //destructor for the file opener (file closer)
  ~FileSource(){
   if (file.is_open()) {
            file.close();
        }
  }

   void write(const std::string& data) {
        if (file.is_open()) {
            file << data;
        }
    }

   void read(){

            std::string line;
            std::string content = ""; // initalise default contents to 

            if(file.is_open()){    
                 while(getline(file,line)){
                    content  += line + "\n";  // 
                 }
            }
   }



private:
    std::fstream file;   // privately declared file variable
};




class FileManager{
    



};

int main(){


    return 0;
}