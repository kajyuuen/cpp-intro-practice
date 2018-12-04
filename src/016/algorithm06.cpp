auto all_of = [](auto first, auto last, auto pred)
{
    for(auto iter = first; iter != last; ++iter)
    {
        if(pred(*iter) == false){
            return false ;
        }
    }
    return true ;
}

auto any_of = [](auto first, auto last, auto pred)
{
    for(auto iter = first; iter != last; ++iter)
    {
        if(pred(*iter))
        {
            return true ;
        }
    }
    return false ;
}

auto none_of = [](auto first, auto last, auto pred)
{
    for(auto iter=first; iter != last; ++iter)
    {
        if(pred(*iter)){
            return false ;
        }
    }
    return true ;
}