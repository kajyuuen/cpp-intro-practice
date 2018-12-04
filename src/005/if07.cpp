int main()
{
    auto x = ""s;

    if ( "aa"s < "ab"s )
    { x = "aa"s ; }
    else
    { x = "ab"s ; }

    std::cout << x ;
}