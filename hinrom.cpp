#include "iostream"
#include "cmath"
#include "string"
using namespace std;
int main()
{
	/* code */
	int ent;
	int a;
	int b;
	int h;
	int t;
	int u;
	int m;
	int d;
	int c;
	int l;
	int x;
	int v;
	int i;
	int previ;
	int prex;
	int prevxi;
	int prevcx;
	int prevmc;
	int prevx;
	int prevc;
	int prec;
	int prem;
	int z;
	string rnum;
	string k;

a = 0;
b = 0;
h = 0;
t = 0;
u = 0;
m = 0;
d = 0;
c = 0;
l = 0;
x = 0;
v = 0;
i = 0;
previ = 0;
prex = 0;
prevxi = 0;
prevcx = 0;
prevmc = 0;
prevx = 0;
prevc = 0;
prec = 0;
prem = 0;
ent=0;
	cout<<"What do you want to do?"<<endl<<"1) Convert Hindu-arabic to Roman numerals"<<endl<<"2) Convert Roman to Hindu-Arabic numerals"<<endl;
	cin >> ent;

	if (ent==1)
	{
		/* code */
	//Manan Doshi
	//works till 4999
	cout<<"Enter number to convert to roman numerals"<<endl;
	cin>>a;
		


		//Arange by value system, m takes the value of 1000s place, h hundreds place etc...
		m = (a-(a%1000))/1000;
		h = ((a%1000)-((a%1000)%100))/100;
		t = (((a%1000)%100)-(((a%1000)%100)%10))/10;
		u = (((a%1000)%100)%10);

			//to test, use the code in next comment
			//cout<<m<<endl<<h<<endl<<t<<endl<<u<<endl;
			

			//units place convert
			if (u<4)
			{
				i=u;
				//i refers to the no. of i's in the converted no.
			}
			
			else if (u==4)
			{
				previ=1;
				v=1;
				//v refers to no. of v's and previ refers to the i before the v(max is 1, but beauty)
			}
			
			else if (u==5)
			{
				v=1;
			}
			
			else if (u>5 and u<9)
			{
				i = u-5;
				v=1;
			}

			else if (u==9)
			{
				prevxi=1;
				prex = 1;
				//prevxi refers to the no. of is before the x(of course, max is one, so it is more like boolean, but it would look ugly when others are int)
				//prex refers to the no. of x's from which i is subtracted(again, max 1)
			}
			
			
			
			


			//Tens
			//Same pattern followed throughout
			if (t<4)
			{
				x=t;
			}
			else if (t==4)
			{
				prevx=1;
				l=1;
			}
			else if (t==5)
			{
				l=1;
			}
			else if (t>5 and t<9)
			{
				x = t-5;
				l=1;
			}
			else if (t==9)
			{
				prevcx=1;
				prec = 1;
			}





			//hundrerds
			if (h<4)
			{
				c=h;
			}
			else if (h==4)
			{
				prevc=1;
				d=1;
			}
			else if (h==5)
			{
				d=1;
			}
			else if (h>5 and h<9)
			{
				c = h-5;
				d=1;
			}
			else if (h==9)
			{
				prevmc=1;
				prem = 1;
			}



			//Instead of converting every segment to string and adding, i just loop couted.
			for (z = 0; z < m; ++z)
			{
				cout<<"M";
			}
			for (z = 0; z < prevmc; ++z)
			{
				cout<<"C";
			}
			for (z = 0; z < prem; ++z)
			{
				cout<<"M";
			}
			for (z = 0; z < prevc; ++z)
			{
				cout<<"C";

			}
			for (z = 0; z < d; ++z)
			{
				cout<<"D";

			}
			for (z = 0; z < c; ++z)
			{
				cout<<"C";

			}
			for (z = 0; z < prevcx; ++z)
			{
				cout<<"X";

			}
			for (z = 0; z < prec; ++z)
			{
				cout<<"C";

			}
			for (z = 0; z < prevx; ++z)
			{
				cout<<"X";

			}
			for (z = 0; z < l; ++z)
			{
				cout<<"L";

			}
			for (z = 0; z < x; ++z)
			{
				cout<<"X";

			}
			for (z = 0; z < prevxi; ++z)
			{
				cout<<"I";

			}
			for (z = 0; z < prex; ++z)
			{
				cout<<"X";

			}
			for (z = 0; z < previ; ++z)
			{
				cout<<"I";

			}
			for (z = 0; z < v; ++z)
			{
				cout<<"V";

			}
			for (z = 0; z < i; ++z)
			{
				cout<<"I";

			}
cout<<endl;


	
}
else if (ent==2)
{
	rnum = "";
a = 0;
	//Manan Doshi
	//works till 4999
	cout<<"Enter Roman number to convert to Hindu-Arabic(Normal) Numerals"<<endl;
	cin>>k;
		

		for (int a = 0; a < 5000; ++a)
		{
			previ = 0;
b = 0;
h = 0;
t = 0;
u = 0;
m = 0;
d = 0;
c = 0;
l = 0;
x = 0;
v = 0;
i = 0;
prex = 0;
prevxi = 0;
prevcx = 0;
prevmc = 0;
prevx = 0;
prevc = 0;
prec = 0;
prem = 0;
rnum = "";
		
		//Arange by value system, m takes the value of 1000s place, h hundreds place etc...
		m = (a-(a%1000))/1000;
		h = ((a%1000)-((a%1000)%100))/100;
		t = (((a%1000)%100)-(((a%1000)%100)%10))/10;
		u = (((a%1000)%100)%10);

			//to test, use the code in next comment
			//cout<<m<<endl<<h<<endl<<t<<endl<<u<<endl;
			

			//units place convert
			if (u<4)
			{
				i=u;
				//i refers to the no. of i's in the converted no.
			}
			
			else if (u==4)
			{
				previ=1;
				v=1;
				//v refers to no. of v's and previ refers to the i before the v(max is 1, but beauty)
			}
			
			else if (u==5)
			{
				v=1;
			}
			
			else if (u>5 and u<9)
			{
				i = u-5;
				v=1;
			}

			else if (u==9)
			{
				prevxi=1;
				prex = 1;
				//prevxi refers to the no. of is before the x(of course, max is one, so it is more like boolean, but it would look ugly when others are int)
				//prex refers to the no. of x's from which i is subtracted(again, max 1)
			}
			
			
			
			


			//Tens
			//Same pattern followed throughout
			if (t<4)
			{
				x=t;
			}
			else if (t==4)
			{
				prevx=1;
				l=1;
			}
			else if (t==5)
			{
				l=1;
			}
			else if (t>5 and t<9)
			{
				x = t-5;
				l=1;
			}
			else if (t==9)
			{
				prevcx=1;
				prec = 1;
			}





			//hundrerds
			if (h<4)
			{
				c=h;
			}
			else if (h==4)
			{
				prevc=1;
				d=1;
			}
			else if (h==5)
			{
				d=1;
			}
			else if (h>5 and h<9)
			{
				c = h-5;
				d=1;
			}
			else if (h==9)
			{
				prevmc=1;
				prem = 1;
			}



			//Instead of converting every segment to string and adding, i just loop couted.
			for (z = 0; z < m; ++z)
			{
				//cout<<"M";
				rnum = rnum + "M";
			}
			for (z = 0; z < prevmc; ++z)
			{
				//cout<<"C";
				rnum = rnum + "C";
			}
			for (z = 0; z < prem; ++z)
			{
				//cout<<"M";
				rnum = rnum + "M";
			}
			for (z = 0; z < prevc; ++z)
			{
				//cout<<"C";
				rnum = rnum + "C";

			}
			for (z = 0; z < d; ++z)
			{
				//cout<<"D";
				rnum = rnum + "D";

			}
			for (z = 0; z < c; ++z)
			{
				//cout<<"C";
				rnum = rnum + "C";

			}
			for (z = 0; z < prevcx; ++z)
			{
				//cout<<"X";
				rnum = rnum + "X";


			}
			for (z = 0; z < prec; ++z)
			{
				//cout<<"C";
				rnum = rnum + "C";

			}
			for (z = 0; z < prevx; ++z)
			{
				//cout<<"X";
				rnum = rnum + "X";

			}
			for (z = 0; z < l; ++z)
			{
				//cout<<"L";
				rnum = rnum + "L";

			}
			for (z = 0; z < x; ++z)
			{
				//cout<<"X";
				rnum = rnum + "X";

			}
			for (z = 0; z < prevxi; ++z)
			{
				//cout<<"I";
				rnum = rnum + "I";

			}
			for (z = 0; z < prex; ++z)
			{
				//cout<<"X";
				rnum = rnum + "X";

			}
			for (z = 0; z < previ; ++z)
			{
				//cout<<"I";
				rnum = rnum + "I";

			}
			for (z = 0; z < v; ++z)
			{
				//cout<<"V";
				rnum = rnum + "V";

			}
			for (z = 0; z < i; ++z)
			{
				//cout<<"I";
				rnum = rnum + "I";

			}

			if (rnum==k)
			{
				cout<<a<<endl;
				a=5001;
			}
//cout<<endl<<rnum<<endl;

}

return 0;
}
