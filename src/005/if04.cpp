int main()
{
    auto a = "dog"s ;
    auto b = "dog"s ;
    auto c = "cat"s ;

    if ( a == b )
    {
        std::cout << "a == b\n"s ;
    }
    else
    {
        std::cout << "a != b\n"s ;
    }

    if ( a == c )
    {
        std::cout << "a == c\n"s ;
    }
    else
    {
        std::cout << "a != c\n"s ;
    }
}