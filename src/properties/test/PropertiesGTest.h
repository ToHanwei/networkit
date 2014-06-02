/*
 * PropertiesGTest.h
 *
 *  Created on: 03.06.2013
 *      Author: cls
 */

#ifndef NOGTEST

#ifndef PROPERTIESGTEST_H_
#define PROPERTIESGTEST_H_

#include <gtest/gtest.h>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
#include <fstream> // for ofstream
#include <string>
#include <list>

#include "../ClusteringCoefficient.h"
#include "../ApproximateClusteringCoefficient_Hoske.h"
#include "../ExactClusteringCoefficient_Hoske.h"
#include "../ApproximateClusteringCoefficient_Brueckner.h"
#include "../Centrality_Hoske.h"
#include "../GlobalClusteringCoefficient_Ritter.h"
#include "../ApproximateClusteringCoefficient_Ritter.h"
#include "../CoreDecomposition.h"
#include "../../graph/GraphGenerator.h"
#include "../../graph/Print_Hoske.h"
#include "../../properties/GraphProperties.h"
#include "../../properties/ConnectedComponents.h"
#include "../../io/METISGraphReader.h"


namespace NetworKit {

class PropertiesGTest: public testing::Test {
public:
	PropertiesGTest();
	virtual ~PropertiesGTest();
};

} /* namespace NetworKit */
#endif /* PROPERTIESGTEST_H_ */

#endif /* NOGTEST */