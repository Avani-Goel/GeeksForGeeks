long int HashMe (unordered_set<string> myset, string str){

    auto fn=myset.hash_function();
    return (fn(str));

}
