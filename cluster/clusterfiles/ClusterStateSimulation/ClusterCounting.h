/*
 *  ClusterCounting.h
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 10/09/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

/*
 *  Cluster.h
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 22/08/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CLUSTERCOUNTING_H
#define CLUSTERCOUNTING_H


#include "qbit.h"



class ClusterCounting{
public:
	ClusterCounting();
	void add_qbit(int add);
	bool memberqbit_entanglementvalue(int j);
	int get_length();
	
private:
	bool memberqbits[N];
	int length;
	
	
};
#endif
