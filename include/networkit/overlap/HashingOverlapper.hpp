/*
 * HashingOverlapper.h
 *
 *  Created on: 31.01.2013
 *      Author: Christian Staudt (christian.staudt@kit.edu)
 */

#ifndef HASHINGOVERLAPPER_H_
#define HASHINGOVERLAPPER_H_

#include <functional>

#include <networkit/overlap/Overlapper.hpp>

namespace NetworKit {

/**
 * @ingroup overlap
 * Determines the overlap of multiple partitions by hashing partition identifiers.
 */
class HashingOverlapper: public Overlapper {

public:

	virtual Partition run(const Graph& G, const std::vector<Partition>& clusterings);

};

} /* namespace NetworKit */
#endif /* HASHINGOVERLAPPER_H_ */
