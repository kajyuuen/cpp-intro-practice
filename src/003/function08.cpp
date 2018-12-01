int main()
{
    auto f = []()
    {
        std::cout << "f is called.\n" ;
        return 0 ;
        std::cout << "f returned zero.\n" ;
    } ;

    auto result = f() ;
}
