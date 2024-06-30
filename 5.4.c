#include <stdio.h>
#include <math.h>
/*
函数功能：龙贝格法求积分
输入参数：
	double a-积分下限; 	double b-积分上限，要求b>a; 	double eps-积分精度; 	double (*f)(double x)-被积函数
返回值：
	函数返回一个积分值
*/
double romb(double a,double b,double eps,double (*f)(double x))
{ 
	int m,n,i,k;
	double y[10],h,ep,p,x,s,q;
	h=b-a;
	y[0]=h*((*f)(a)+(*f)(b))/2.0;
	m=1; n=1; ep=eps+1.0;
	while ((ep>=eps)&&(m<=9))
	{ 
		p=0.0;
		for (i=0;i<=n-1;i++)
		{ 
			x=a+(i+0.5)*h; 	p=p+(*f)(x);
		}
		p=(y[0]+h*p)/2.0; 	s=1.0;
		for (k=1;k<=m;k++)
		{ 
			s=4.0*s; 	q=(s*p-y[k-1])/(s-1.0); 	y[k-1]=p;  p=q;
		}
		ep=fabs(q-y[m-1]);
		m=m+1; y[m-1]=q; n=n+n; h=h/2.0;
	}
	return(q);
}
//被积函数
double func(double x)
{ 
	double y;
	y=x/(4.0+x*x);
	return(y);
}
double func2(double x)
{ 
	double y;
	y=(1/(1+25*x*x));
	return(y);
}
double func3(double x)
{ 
	double y;
	y=(log(1+x)/(1+x*x));
	return(y);
}
double func4(double x)
{ 
	double y;
	y=x*cos(x)*cos(30*x);
	return(y);
}
void main()
{ 
	double a,b,eps,t;
	double func(double);//被积函数原型说明
	a=0.0; b=1.0; eps=0.000001;
	t=romb(a,b,eps,func);//调用龙贝格积分函数对被积函数f积分
	printf("(1)t=%e\n",t);
	a=-1.0; b=1.0; eps=0.000001;
	t=romb(a,b,eps,func2);//调用龙贝格积分函数对被积函数f积分
	printf("(2)t=%e\n",t);
	a=0.0; b=1.0; eps=0.000001;
	t=romb(a,b,eps,func3);//调用龙贝格积分函数对被积函数f积分
	printf("(3)t=%e\n",t);
	a=-1.0; b=6.283185; eps=0.000001;
	t=romb(a,b,eps,func4);//调用龙贝格积分函数对被积函数f积分
	printf("(4)t=%e\n2021440877郑欣宇",t);
	printf("\n");
}

