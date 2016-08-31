#ifndef SUBJECT_SUBJECT_H_
#define SUBJECT_SUBJECT_H_

#include <map>
#include <vector>
#include <functional>	// std::function
#include <utility>		// std::forward

#include "../event/Event.h"

/**
 * Subject represents a generic and minimal Subject implementation.
 * Subject don't need knowledge of a Observer implementation.
 * We reduced the dependency and forced working with direct callbacks
 * We can use a combination of std::function and std::bind for anything,
 * here for delegate any method, based on our declared signature.
 *
 * STATUS: unregister missing, thats tricky
 */


class Subject
{
public:
	Subject()=default; 								/// use default ctor
	Subject(const Subject &)=delete;				/// delete copy stor
	Subject& operator=(const Subject &)=delete;		/// delete assign operator

	/**
	 * Method to register events and their callbacks
	 * @param event_ keys of expected event
	 * @param observer_ anything what match with out std::function signature
	 */
	template<typename Observer>
	void registerObserver(const Event& event_, Observer&& observer_)
	{
		m_obsCol[event_].push_back(std::forward<Observer>(observer_));
	}

	/**
	 * Notify registered subcriber
	 * @param event_ keynode which event shall be notified
	 */
	void notify(const Event& event_)
	{
		for(const auto & obs : m_obsCol[event_])
			obs();
	}

private:
	std::map<Event, std::vector<std::function<void()>>> m_obsCol;		/// collection to store keys and all registered events
};


#endif /* SUBJECT_SUBJECT_H_ */
