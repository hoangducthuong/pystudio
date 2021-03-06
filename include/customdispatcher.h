//---------------------------------------------------------------------------
#ifndef CustomDispatcherH
#define CustomDispatcherH
//---------------------------------------------------------------------------

#include <QString>

/** \def DISPATCHER_CUSTOM_VERSION
  *  @brief User Dispatcher version. */
#define DISPATCHER_CUSTOM_VERSION   0x0100
/******************************************************************************/
// limites des requetes, connexions, configuration du port.

/** \def NB_SUB_SYSTEMS
  *  @brief Number of sub systems to manage. */
#define NB_SUB_SYSTEMS 6

/** \def DISPATCHER_RAWEMITTER_PORT
  *  @brief Dispatcher TCP/IP raw emitter port. */
#define DISPATCHER_RAW_EMITTER_PORT 9946

/******************************************************************************/

/** \def DEFAULT_BACKUP_FILE_SIZE
  *  @brief Backup file size. */
#define DEFAULT_BACKUP_FILE_SIZE 52428800

/******************************************************************************/
/** \def MAX_SUBSYS_TM_SIZE
  *  @brief Maximal TM message field size. */
#define MAX_SUBSYS_TM_SIZE 2500

/******************************************************************************/
/** \def MAX_SUBSYSTEM_RATE
  *  @brief Maximal TM message field size. */
#define MAX_SUBSYSTEM_RATE 20000000ULL

/** \def DISPATCHER_KERNEL_LOOP_PER_SECOND
  *  @brief Nombre d'execution de la boucle principale*/
#define DISPATCHER_KERNEL_LOOP_PER_SECOND 100


// start includes dispatcher Wizard DON'T TOUCH
#define INDEX_OF_MULTINETQUICMANAGER 0
#define MULTINETQUICMANAGER_ID 2
#define INDEX_OF_SWITCHES 1
#define SWITCHES_ID 3
#define INDEX_OF_IMACRT1 2
#define IMACRT1_ID 4
#define INDEX_OF_IMACRT2 3
#define IMACRT2_ID 5
#define INDEX_OF_IMACRT3 4
#define IMACRT3_ID 6
#define INDEX_OF_IMACRT4 5
#define IMACRT4_ID 7
const unsigned char subsystemIds[NB_SUB_SYSTEMS] = {MULTINETQUICMANAGER_ID ,SWITCHES_ID ,IMACRT1_ID ,IMACRT2_ID ,IMACRT3_ID ,IMACRT4_ID };
#define SUBSYSTEM_NAMES_STR  QString("MultiNetQuicManager,Switches,IMACRT1,IMACRT2,IMACRT3,IMACRT4")
#define SUBSYSTEM_NAME_BY_ID(id) (id == MULTINETQUICMANAGER_ID)?QString("MultiNetQuicManager"):(id == SWITCHES_ID)?QString("Switches"):(id == IMACRT1_ID)?QString("IMACRT1"):(id == IMACRT2_ID)?QString("IMACRT2"):(id == IMACRT3_ID)?QString("IMACRT3"):(id == IMACRT4_ID)?QString("IMACRT4"):QString("unknown subsytem")
// stop includes dispatcher Wizard DON'T TOUCH

#define NUM_CLIENT_CONNECT 15

#define MAX_NB_REQUEST_PER_CLIENT 10

#define DISPATCHER_SERVER_PORT 3002

#endif




