struct fractional
{
    // データメンバ
    int num ;
    int denom ;

    // コンストラクタ
    fractional( int num, int denom = 1 )
        : num(num), denom(denom)
    { }

} ;

fractional operator +( fractional & l, fractional & r )
{
    if ( l.denom == r.denom )
        return fractional{ l.num + r.num, l.denom } ;
    else
        return fractional{ l.num * r.denom + r.num * l.denom, l.denom * r.denom } ;
}

fractional operator -( fractional & l, fractional & r )
{
    if ( l.denom == r.denom )
        return fractional{ l.num - r.num, l.denom } ;
    else
        return fractional{ l.num * r.denom - r.num * l.denom, l.denom * r.denom } ;
}

fractional operator *( fractional & l, fractional & r )
{
    return fractional{ l.num * r.num, l.denom * r.denom } ;
}

fractional operator /( fractional & l, fractional & r )
{
    return fractional{ l.num * r.denom, l.denom * r.num } ;
}

int main()
{
    // fractional(int)が呼ばれる
    fractional a = 1 ;

    // fractional(int,int)が呼ばれる
    fractional b(1, 2) ;
    fractional c{1, 2} ;
}