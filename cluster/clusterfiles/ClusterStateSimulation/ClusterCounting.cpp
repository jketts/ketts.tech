/*
 *  ClusterCounting.cpp
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 10/09/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "ClusterCounting.h"
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;


#include "ClusterCounting.h"


//Public

ClusterCounting::ClusterCounting(){ 
	
	for (int i=0; i<N; i++) {
		memberqbits[i] = 0;}
	
	
}

void ClusterCounting::add_qbit(int add){
	
	memberqbits[add] = 1;
	
}

int ClusterCounting::get_length() {

	int clength=0;
	
	for ( int i = 0; i<N; i++){
		
		if (memberqbit_entanglementvalue(i) == 1){clength++;}
	
		
		}

 length = clength;
 return clength;

}
	



 



bool ClusterCounting::memberqbit_entanglementvalue(int j) {	return memberqbits[j];}
