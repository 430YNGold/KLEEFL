/*
 * Slice.h
 *
 *  Created on: Apr 25, 2017
 *      Author: why
 */

#ifndef LIB_ENCODE_SLICE_H_
#define LIB_ENCODE_SLICE_H_

#include "Trace.h"
#include "Event.h"
#include <vector>

namespace klee {

class Slices {
	private:
		Event* slicePointEvent;
		Trace* trace;
		std::vector<Event*> events;
	public:
		Slices(Event* event, Trace* trace);
		std::vector<Event*> getControlFlowSlices(Event &event);
		std::vector<Event*> getDataFlowSlices(Event &event);
		std::vector<Event*> mergeSlices(std::vector<Event*> eventsA, std::vector<Event*> eventsB);
		std::vector<Event*> dynamicBackWardSlices();
		void dumpForDataFlowSlices();
		void dumpForControlFlowSlices();

};

}



#endif /* LIB_ENCODE_SLICE_H_ */
