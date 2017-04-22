/*
 *  qbit.cpp
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 21/08/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "Cluster.h"
#include "qbit.h"
#include <iostream>
#include <cmath>

using namespace std;

Qbit::Qbit(){
    for (int i=0; i<N; i++) {
		entanglements[i] = 0;}
	position = 0;
}

bool Qbit::entanglement_value(int j){return entanglements[j];}

bool Qbit::TypeIfusion(int x){ 
	int type1check = 0;
	
	for (int i=0; i<N; i++){ type1check = type1check + entanglements[i];}
	
	cout << " type1check " << type1check << endl;
	
	if (type1check < 2 ) {entanglements[x] = 1;
		return 1;
	}
	else {
		return 0;
	}

}


void Qbit::set_position(int pos){ position = pos;}

int Qbit::position_value(){return position;}
