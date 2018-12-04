struct fractional
{
    int num ;
    int denom ;
} ;

fractional add( fractional & l, fractional & r)
{
    if(l.denom == r.denom)
        return fractional{ l.num + r.num, l.denom } ;

    return fractional{ l.num * r.denom + r.num * l.denom, l.denom * r.denom } ;
}


int main()
{
    fractional a{1, 1} ;
    fractional b = add(a, a) ;
    fractional c = add(a, b) ;
}