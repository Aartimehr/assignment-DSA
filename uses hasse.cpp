int main()
{
int n,number;
cin>>n;
string name;
unordered_map<strin,int>marks;
for(int i=0;i<n;i++)
{
cin>>name>>number;
marks[name] = number;
}
cout<<"mark of yoyoo"<<marks["yoyoo"]<<endl;
cout<<"marks of yobi"<<marks["yobi"]<<endl;
