/*
 * Subject.h
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#ifndef SUBJECT_SUBJECT_H_
#define SUBJECT_SUBJECT_H_

#include <vector>
#include "../observer/Observer.h"

using namespace std;

namespace subject
{

	class Subject
	{
	public:
		Subject();
		virtual ~Subject();

		void registerObserver(observer::Observer * observer_);
		void unregisterObserver(observer::Observer * observer_);

		void notify(const std::string & str);

	private:
		vector<observer::Observer*> m_obsCol;
	};

} /* namespace subject */

#endif /* SUBJECT_SUBJECT_H_ */
