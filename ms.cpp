int a, b=0, c=1;
cout<<"Введите число Фибоначчи: "<<endl;
cin>>a; 
for(int i=2;i<=(a-3);i++)
{
        a=b+c;
        b=c;
        c=a+b;
}
cout<<"Число Фибоначчи равно = "<<c<<endl;
