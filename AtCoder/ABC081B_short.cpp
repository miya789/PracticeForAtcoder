#include<iostream>
int n,v,w;
main(){
	std::cin >> n;
	while(n--)std::cin >> v,w|=v;
	std::cout << __builtin_ctz(w);

	int n,a,r=99;
	std::cin>>n;
	while(n--)std::cin>>a,r=std::min(r,__builtin_ctz(a));
	std::cout<<r;
}
