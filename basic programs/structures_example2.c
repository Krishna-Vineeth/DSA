EB Bill:
	ID
	name
	units 
	Final_amount
	
	unit>100 amount=5
	unit>200 	amount =7.5
	unit>300 amount=10
	<100 amount=2.5
	others amount=12.5
	0-100===>2.5 if(e[i].unit>0 && e[i].unit<=100) { Final_amount=e[i].unit*2.5}
	100-200===>5
	200-300===>7.5
	300-400==>10
	>400===>12.5