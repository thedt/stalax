#ifdef PHYSICS
#include <btBulletDynamicsCommon.h>

extern btDbvtBroadphase* broadphase;
extern btDefaultCollisionConfiguration* collisionConfiguration;
extern btCollisionDispatcher* dispatcher;
extern btSequentialImpulseConstraintSolver* solver;

extern btDiscreteDynamicsWorld* dynamicsWorld;

extern void G_Physics_Init();
extern void G_Physics_Shutdown();
#endif
