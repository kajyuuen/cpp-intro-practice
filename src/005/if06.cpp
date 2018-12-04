int main()
{
    auto x = ""s;

    if ( "a"s < "b"s )
    { x = "a"s ; }
    else
    { x = "b"s ; }

    std::cout << x ;
}