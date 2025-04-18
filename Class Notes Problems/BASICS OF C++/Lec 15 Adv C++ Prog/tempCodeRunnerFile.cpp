

    while (temp)
    {
        rem=temp%10;
        temp=temp/10;
        cout<<rem<<" ";
        rem=pow(rem,dig);
        cout<<rem<<" ";