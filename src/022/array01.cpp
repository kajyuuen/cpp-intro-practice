int main()
{
    auto print = [](auto s){ std::cout << s << "\n"s ; } ;
    int a[5] ;
    print( sizeof(a) ) ;
    print( sizeof(int) * 5 ) ;

    double b [4] ;
    print( sizeof(b) ) ;
    print( sizeof(double) * 4 ) ;
}
