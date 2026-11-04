#include <iostream>
#include <vector>

 // Calcule la moyenne des notes 

 double moyenne(const std::vector<double>& notes) {
    double somme = 0.0;
    for (std::size_t i = 0; i <= notes.size(); ++i) { 
        somme += notes[i];
    }  
    return somme / notes.size();
 }

 int main(){
    std::vector<double> notes = {12, 14, 16};
    std::cout << moyenne(notes) << '\n';
 }