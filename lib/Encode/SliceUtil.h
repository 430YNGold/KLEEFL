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
#include <map>
#include <string>

namespace klee {

class SliceUtil {

public:
		//FIXME cache {std::vector<Event*> events, unsigned eventPosition?, string variable, Event* event?}

		//preprocessing
		//get variable from event (just have one variable)
		static std::vector<std::string> getVariablesFromEvent(Event* event);
		//From the Path get the Eventlist which is end with the slicePoint
		static std::vector<Event*> getEventList(Event* slicePoint, std::vector<Event*> events);

		//get sliced Events
		static std::vector<Event*> getControlFlowSlices(std::vector<std::string> variables, std::vector<Event*> events);
		static std::vector<Event*> getDataFlowSlices(std::vector<std::string> variables, std::vector<Event*> events);
		static std::vector<Event*> mergeSlices(std::vector<Event*> eventsA, std::vector<Event*> eventsB);
		static std::vector<Event*> dynamicBackWardSlices(Event* slicePoint, std::vector<Event*> events); // including dataFlow and control flow.

		//FIXME optimized; involved in cache,
		static std::vector<Event*> getCachesFormSlices(std::vector<Event*> events);

		//test
/*		void dumpForDataFlowSlices();
		void dumpForControlFlowSlices();*/
};

}

#endif /* LIB_ENCODE_SLICEUTIL_H_ */
