#include <DriveWaypointAction.h>

#include <utility>
#include <Robot.h>

DriveWaypointAction::DriveWaypointAction(Path path) {
    m_path = std::move(path);
    m_reversed = false;
    m_tolerance = 0.25;
    m_maxAccel = 40;
    m_maxAngAccel = 0.25;
    m_gradualStop = true;
    m_lookahead = 24.0;
    m_resetPosition = false;
}

void DriveWaypointAction::ActionInit() {

}

void DriveWaypointAction::ActionStatus DriveWaypointAction::Action() {

}

void DriveWaypointAction::ActionEnd() {
    
}