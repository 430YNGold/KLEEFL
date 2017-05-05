/*
 * Slice.cpp
 *
 *  Created on: Apr 25, 2017
 *      Author: why
 */
#include "SliceUtil.h"

using namespace std;
namespace klee
{

vector<std::string> SliceUtil::getVariablesFromEvent(Event* event)
{

}

vector<Event*> SliceUtil::getEventList(Event* slicePoint,
		std::vector<Event*> events)
{

}

vector<Event*> SliceUtil::getControlFlowSlices(
		std::vector<std::string> variables, std::vector<Event*> events)
{
}

vector<Event*> SliceUtil::getDataFlowSlices(
		std::vector<std::string> variables, std::vector<Event*> events)
{
}

vector<Event*> SliceUtil::mergeSlices(vector<Event*> eventsA,
		vector<Event*> eventsB)
{

}

vector<Event*> SliceUtil::dynamicBackWardSlices(Event* slicePoint,
		vector<Event*> events)
{
}

}
