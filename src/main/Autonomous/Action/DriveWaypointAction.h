/* Action using the waypoint follower to follow 
   paths during autonomous with a tank robot. 
*/

#include <CORERobotLib.h>

#include <WaypointFollower/WaypointFollower.h>

using namespace CORE;

class DriveWaypointAction : public COREAutonAction {
    public:
        explicit DriveWaypointAction(Path path);
        void ActionInit() override;
        actionStatus Action() override;
        void ActionEnd() override;
    private:
        Path m_path;
        bool m_reversed;
        double m_tolerance;
        double m_maxAccel;
        double m_maxAngAccel;
        bool m_gradualStop;
        double m_lookahead;
        bool m_resetPosition;
        Position2d m_startPos;
}