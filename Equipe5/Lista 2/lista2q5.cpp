#include<stdio.h>
void FindNext(int,int,int,int,int,int);

int main(){
	FindNext(0,0,0,0,0,0);
	
}
void FindNext(int var1,int var2,int var3,int var4,int var5,int var6){
	var1++;
	if(var1 >99){
		var1=0;
		var2++;
	}
		if(var2 >99){
		var2=0;
		var3++;
	}
		if(var3 >99){
		var3=0;
		var4++;
	}
		if(var4 >99){
		var4=0;
		var5++;
	}
		if(var5 >99){
		var5=0;
		var6++;
	}
		if(var6 >99){
		return;
	}
	printf("%d %d %d %d %d %d\n",var1,var2,var3,var4,var5,var6);
	FindNext(var1,var2,var3,var4,var5,var6);
}
