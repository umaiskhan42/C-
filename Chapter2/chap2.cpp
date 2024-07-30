#include<iostream>

void doPrint(){

	std::cout<<"This will print"<<std::endl;
}
int main(){

	doPrint();

	return 0;
}


#include<iostream>
int doPrint(){
	std::cout<< "Enter any number ";
	int x{};
	std::cin>>x;

	return x;
}
int main(){
	std::cout<<"Program Starts: "<<std::endl;
	int y{doPrint()};
	std::cout<<y;
	return 0;
}