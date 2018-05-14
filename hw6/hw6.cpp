#include "hw6.h"
#include <cmath>


int ipow (int base , int exp ) {

	    return static_cast <int >( pow ( double ( base ) , double ( exp )));
}

double my_min(double * arr, int len) {
	    
	int i = 0; double min = *arr;
	        
	while ( i < len) {
			       
		if (*arr < min) {
					          
		min = *arr;
						                
		}
				       
	i++; arr++;
					        
	}
		    
	return min;
}

double angle (double x, double y)           {
	    
	double PI = 3.14159265;
	
	double result = (atan(y/x) * 180 / PI);
	
	if ( x < 0) {
	    
	    return (result + 180);
	    
	}
	
	if ( y < 0 ) {
	    
	    return (result + 360);
	    
	}
	        
	return result;  

}

char * my_strcpy(char * destination, char * source) {
	    

	char *zero_value = destination;
	        
	while( (*destination++ = *source++) != '\0' );
		    
	return zero_value;
		    
		    
}

int my_strcmp(const char * str1, const char * str2) {
	    
	while (*str1 != '\0')       {
		            
		if ( *str2 == '\0') {
				                
			return 1;
						       
		}
			            
		if ( *str2 > *str1) {
					                
			return -1;
							           
		}
				            
		if (*str1 > *str2) {
						                
			return 1;
								            
		}
		
		
		str1++;
		
		str2++;
							            
	}
	        
	if ( *str2 != '\0') {
			        
		return -1;
				        
	}
		    
	return 0;

		        
}

