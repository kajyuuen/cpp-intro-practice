struct fractional
{
    int num ;
    int denom ;
} ;

double value ( fractional &x )
{
    return static_cast<double>(x.num) / static_cast<double>(x.denom) ;
}

int main()
{
    fractional x{1, 2} ;

    std::cout << value(x) ;
}