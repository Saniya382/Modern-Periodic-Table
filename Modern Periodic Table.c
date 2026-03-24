#include<stdio.h>
int main(){
	int n;
	int m;
	int a;
	int Exit;
	int Exi;
	
	printf("Welcome to Modern Periodic Table:\n");
	printf("Enter 1 to know about an Element:\n");
	printf("Enter 2 to close the periodic Table:\n");
	printf("ENTER\n");
	scanf("%d",&n);
	
	
	if(n==1){
		printf("Press 3 to search the element by atomic number\n");
		printf("Press 4 to show no interest to search the element:\n");
		printf("ENTER\n");
		scanf("%d",&m);
	
	if(m==3){
		printf("Enter the atomic number(1-10) of element to be searched:");
		scanf("%d",&a);
   	if(a==1)
	{
		printf("Name:Hydrogen\n");
		printf("symbol:H\n");
		printf("Atomic Number:1\n");
		printf("Electronic configuration:1s^1\n");
		printf("Discovered by :Henry Cavendish:\n");
		printf("Charge:+1\n");}
		
	 else if(a==2){
	    printf("Name:Helium\n");
		printf("symbol:He\n");
		printf("Atomic Number:2\n");
		printf("Electronic configuration:1s^2\n");
		printf("Discovered by :Pierre Janssen:\n");
		printf("Charge:+2\n");
	}
	 else if(a==3){
		printf("Name:Lithium\n");
		printf("symbol:L\n");
		printf("Atomic Number:3\n");
		printf("Electronic configuration:1s^2 2s^1\n");
		printf("Discovered by :Johan August Arfwedson:\n");
		printf("Charge:+1\n");
	}
	 else if(a==4){
		printf("Name:Beryllium\n");
		printf("symbol:Be\n");
		printf("Atomic Number:4\n");
		printf("Electronic configuration:1s^2 2s^2\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:\n");
		printf("Charge:+2\n");
	}
	 else if(a==5){
	    printf("Name:Boron\n");
		printf("symbol:B\n");
		printf("Atomic Number:5\n");
		printf("Electronic configuration:1s^2 2s^2 2p^1\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:Louis-Jaques Thenard\n");
		printf("Charge:+3\n");
	}
	else if(a==6){
		printf("Name:carbon\n");
		printf("symbol:C\n");
		printf("Atomic Number:6\n");
		printf("Electronic configuration:1s^2 2s^2 2p^2\n");
		printf("Discovered by :Antoine Lavoisier\n");
		printf("Charge:+4\n");
	}
		else if(a==7){
		printf("Name:Nitrogen\n");
		printf("symbol:N\n");
		printf("Atomic Number:7\n");
		printf("Electronic configuration:1s^2 2s^2 2p^3\n");
		printf("Discovered by :Daniel Rutherford:\n");
		printf("Charge:-3\n");
	}
		else if(a==8){
			printf("Name:Oxygen\n");
		printf("symbol:O\n");
		printf("Atomic Number:8\n");
		printf("Electronic configuration:1s^2 2s^2 2p^4\n");
		printf("Discovered by :Joseph Priestley:\n");
		printf("Charge:-2\n");
	}
	else if(a==9){
			printf("Name:Fluorine\n");
		printf("symbol:F\n");
		printf("Atomic Number:9\n");
		printf("Electronic configuration:1s^2 2s^2 2p^5\n");
		printf("Discovered by :Ferdinand Frederic Henri Moissan:\n");
		printf("Charge:-1\n");
	}
		else if(a==10){
			printf("Name:Neon\n");
		printf("symbol:Ne\n");
		printf("Atomic Number:10\n");
		printf("Electronic configuration:1s^2 2s^2 2p^6\n");
		printf("Discovered by :Sir william Ramsay:\n");
		printf("Charge:0\n");
		}
	}
		
	
		
		else if(m==4){
			printf("Thank you.");
		}
	}
    		
		
		
	    	
	    	
		
			
      	
        
else{

	printf("Do you want to exit?(Yes-No)\n");
	printf("Press 6 for Yes:\n");
	printf("Press 7 for No:\n");
	
	printf("ENTER\n");
	scanf("%d",&Exit);
	if(Exit==6){
		printf("Are you sure you want to close the periodic table?(Yes\no)\n");
		printf("Press 4 for yes\n");
		printf("Press 5 for no\n");
		printf("ENTER\n");
		scanf("%d",&Exi);
		
		if(Exi==4){
			printf("The periodic table has closed\n");
			
		}
		else if(Exi==5){
			printf("Periodic Table has not closed and You can continue to learn more about the elements:\n");
			
			printf("Enter the atomic Number of the element (1-10) to be searched:\n");
			scanf("%d",&a);
		if(a==1){
     	printf("Name:Hydrogen\n");
		printf("symbol:H\n");
		printf("Atomic Number:1\n");
		printf("Electronic configuration:1s^1\n");
		printf("Discovered by :Henry Cavendish:\n");
		printf("Charge:+1\n");
			}
		else if(a==2){
	    printf("Name:Helium\n");
		printf("symbol:He\n");
		printf("Atomic Number:2\n");
		printf("Electronic configuration:1s^2\n");
		printf("Discovered by :Pierre Janssen:\n");
		printf("Charge:+2\n");
	}
	else if(a==3){
		printf("Name:Lithium\n");
		printf("symbol:L\n");
		printf("Atomic Number:3\n");
		printf("Electronic configuration:1s^2 2s^1\n");
		printf("Discovered by :Johan August Arfwedson:\n");
		printf("Charge:+1\n");
	}
	else if(a==4){
		printf("Name:Beryllium\n");
		printf("symbol:Be\n");
		printf("Atomic Number:4\n");
		printf("Electronic configuration:1s^2 2s^2\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:\n");
		printf("Charge:+2\n");
	}
	else if(a==5){
	    printf("Name:Boron\n");
		printf("symbol:B\n");
		printf("Atomic Number:5\n");
		printf("Electronic configuration:1s^2 2s^2 2p^1\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:Louis-Jaques Thenard\n");
		printf("Charge:+3\n");
	}
		else if(a==6){
		printf("Name:carbon\n");
		printf("symbol:C\n");
		printf("Atomic Number:6\n");
		printf("Electronic configuration:1s^2 2s^2 2p^2\n");
		printf("Discovered by :Antoine Lavoisier\n");
		printf("Charge:+4\n");
	}
		else if(a==7){
			printf("Name:Nitrogen\n");
		printf("symbol:N\n");
		printf("Atomic Number:7\n");
		printf("Electronic configuration:1s^2 2s^2 2p^3\n");
		printf("Discovered by :Daniel Rutherford:\n");
		printf("Charge:-3\n");
	}
		else if(a==8){
			printf("Name:Oxygen\n");
		printf("symbol:O\n");
		printf("Atomic Number:8\n");
		printf("Electronic configuration:1s^2 2s^2 2p^4\n");
		printf("Discovered by :Joseph Priestley:\n");
		printf("Charge:-2\n");
	}
		else if(a==9){
			printf("Name:Fluorine\n");
		printf("symbol:F\n");
		printf("Atomic Number:9\n");
		printf("Electronic configuration:1s^2 2s^2 2p^5\n");
		printf("Discovered by :Ferdinand Frederic Henri Moissan:\n");
		printf("Charge:-1\n");
	}
		else if(a==10){
			printf("Name:Neon\n");
		printf("symbol:Ne\n");
		printf("Atomic Number:10\n");
		printf("Electronic configuration:1s^2 2s^2 2p^6\n");
		printf("Discovered by :Sir william Ramsay:\n");
		printf("Charge:0\n");
		}
		
	
		
		
    		
			
		
	    	
	    	
		
			
	}
				
			}
			else {
				printf("Periodic Table has not closed and you can continue to learn more elements\n");
				printf("Enter the atomic number to be sarched:");
				scanf("%d",&a);
				if(a==1){
	    printf("Name:Hydrogen\n");
		printf("symbol:H\n");
		printf("Atomic Number:1\n");
		printf("Electronic configuration:1s^1\n");
		printf("Discovered by :Henry Cavendish:\n");
		printf("Charge:+1\n"); }
		
		
	 else if(a==2){
	    printf("Name:Helium\n");
		printf("symbol:He\n");
		printf("Atomic Number:2\n");
		printf("Electronic configuration:1s^2\n");
		printf("Discovered by :Pierre Janssen:\n");
		printf("Charge:+2\n");
	}
	 else if(a==3){
		printf("Name:Lithium\n");
		printf("symbol:L\n");
		printf("Atomic Number:3\n");
		printf("Electronic configuration:1s^2 2s^1\n");
		printf("Discovered by :Johan August Arfwedson:\n");
		printf("Charge:+1\n");
	}
	else if(a==4){
		printf("Name:Beryllium\n");
		printf("symbol:Be\n");
		printf("Atomic Number:4\n");
		printf("Electronic configuration:1s^2 2s^2\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:\n");
		printf("Charge:+2\n");
	}
	 else if(a==5){
	    printf("Name:Boron\n");
		printf("symbol:B\n");
		printf("Atomic Number:5\n");
		printf("Electronic configuration:1s^2 2s^2 2p^1\n");
		printf("Discovered by :Nicolas-Louis Vauquelin:Louis-Jaques Thenard\n");
		printf("Charge:+3\n");
	}
		else if(a==6){
		printf("Name:carbon\n");
		printf("symbol:C\n");
		printf("Atomic Number:6\n");
		printf("Electronic configuration:1s^2 2s^2 2p^2\n");
		printf("Discovered by :Antoine Lavoisier\n");
		printf("Charge:+4\n");
	}
		else if(a==7){
			printf("Name:Nitrogen\n");
		printf("symbol:N\n");
		printf("Atomic Number:7\n");
		printf("Electronic configuration:1s^2 2s^2 2p^3\n");
		printf("Discovered by :Daniel Rutherford:\n");
		printf("Charge:-3\n");
	}
		else if(a==8){
			printf("Name:Oxygen\n");
		printf("symbol:O\n");
		printf("Atomic Number:8\n");
		printf("Electronic configuration:1s^2 2s^2 2p^4\n");
		printf("Discovered by :Joseph Priestley:\n");
		printf("Charge:-2\n");
	}
		else if(a==9){
			printf("Name:Fluorine\n");
		printf("symbol:F\n");
		printf("Atomic Number:9\n");
		printf("Electronic configuration:1s^2 2s^2 2p^5\n");
		printf("Discovered by :Ferdinand Frederic Henri Moissan:\n");
		printf("Charge:-1\n");
	}
	
		else if(a==10){
			printf("Name:Neon\n");
		printf("symbol:Ne\n");
		printf("Atomic Number:10\n");
		printf("Electronic configuration:1s^2 2s^2 2p^6\n");
		printf("Discovered by :Sir william Ramsay:\n");
		printf("Charge:0\n");
		}
		}
	}

		return 0;
	}
			
			
		
	

