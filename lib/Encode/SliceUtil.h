/*
 * SliceUtil.h
 *
 *  Created on: Apr 25, 2017
 *      Author: why
 */

#ifndef LIB_ENCODE_SLICEUTIL_H_
#define LIB_ENCODE_SLICEUTIL_H_

#include "Trace.h"
#include "Event.h"
#include <vector>

namespace klee {

class SliceUtil {

public:
		SliceUtil();

		//get variable from event (just have one variable)
		std::string getVariableFromEvent(Event* event);

		//get Events
		std::vector<Event*> getControlFlowSlices(Event* slicePoint, Trace* trace);
		std::vector<Event*> getDataFlowSlices(Event* slicePoint, Trace* trace);
		std::vector<Event*> mergeSlices(std::vector<Event*> eventsA, std::vector<Event*> eventsB);
		std::vector<Event*> dynamicBackWardSlices(Event* slicePoint, Trace* trace); // including dataFlow and control flow.

		//test
		void dumpForDataFlowSlices();
		void dumpForControlFlowSlices();

};

}

#endif /* LIB_ENCODE_SLICEUTIL_H_ */
