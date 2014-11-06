/** \file Hen3Processor.hpp
 *
 * Processor for 3Hen detectors
 */
#ifndef __HEN3PROCESSOR_HPP_
#define __HEN3PROCESSOR_HPP_ 1

#include "EventProcessor.hpp"

class Hen3Processor : public EventProcessor {
public:
    /** Default Constructor */
    Hen3Processor();
    /** Default Destructor */
    ~Hen3Processor(){};
    /** Preprocess the event
     * \param [in] event : the event to preprocess
     * \return true if successful */
    virtual bool PreProcess(RawEvent &event);
    /** Process the event
     * \param [in] event : the event to process
     * \return true if the process was successful */
    virtual bool Process(RawEvent &event);
    /** Declare the plots for the analysis */
    virtual void DeclarePlots(void);
protected:
    /** Find the best beta for a neutron event
     * \param [in] nTime : the neutron time
     * \return the Event data for the bet matching neutron to beta */
    EventData BestBetaForNeutron(double nTime);
    static double const cycleTimePlotResolution_ = 1e-3;//!< Plot resolution for the Cycle time
    static double const diffTimePlotResolution_ = 1e-6;//!< Plot resolution for the time diffs
};
#endif // __HEN3PROCESSOR_H_
