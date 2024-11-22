

int main(){
    std::cout << "hello"s << "\n";

    std::cout
        << "int\n"
	<< "size\t" << sizeof(int) << "\n"s
        << "min\t" << std::numeric_limits<int>::min() << "\n"s
        << "max\t" << std::numeric_limits<int>::max()  << "\n"s
        << "min-1\t" << std::numeric_limits<int>::min() - 1 << "\n"s
        << "max+1\t" << std::numeric_limits<int>::max() + 1 << "\n"s
    ;
}




