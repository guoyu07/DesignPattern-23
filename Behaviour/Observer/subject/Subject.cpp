/*
 * Subject.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#include <algorithm>
#include "Subject.h"

using namespace subject;

Subject::Subject()
{
	// TODO Auto-generated constructor stub

}

Subject::~Subject()
{
	// TODO Auto-generated destructor stub
}

void Subject::registerObserver(observer::Observer * observer_)
{
	m_obsCol.push_back(observer_);
}

void Subject::unregisterObserver(observer::Observer * observer_)
{
	m_obsCol.erase(std::remove(m_obsCol.begin(), m_obsCol.end(), observer_), m_obsCol.end());
}

void Subject::notify(const std::string & str)
{
	for(const auto & obs : m_obsCol)
		obs->notify(str);
}
