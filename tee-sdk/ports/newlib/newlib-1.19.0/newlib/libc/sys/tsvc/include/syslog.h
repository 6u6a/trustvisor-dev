/* Based on IEEE Std 1003.1-2008
   http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/syslog.h.html
*/

#ifndef _SYSLOG_H
#define _SYSLOG_H

/* The <syslog.h> header shall define the following symbolic
   constants, zero or more of which may be OR'ed together to form the
   logopt option of openlog(): */
#define LOG_PID (1<<0) /* Log the process ID with each message. */
#define LOG_CONS (1<<1) /* Log to the system console on error. */
#define LOG_NDELAY (1<<2) /* Connect to syslog daemon immediately. */
#define LOG_ODELAY (1<<3) /* Delay open until syslog() is called. */
#define LOG_NOWAIT (1<<4) /* Do not wait for child processes. */

/* The <syslog.h> header shall define the following symbolic constants
   for use as the facility argument to openlog(): */
#define LOG_KERN 1 /* Reserved for message generated by the system. */
#define LOG_USER 2 /* Message generated by a process. */
#define LOG_MAIL 3 /* Reserved for message generated by mail system. */
#define LOG_NEWS 4 /* Reserved for message generated by news system. */
#define LOG_UUCP 5 /* Reserved for message generated by UUCP system. */
#define LOG_DAEMON 6 /* Reserved for message generated by system daemon. */
#define LOG_AUTH 7 /* Reserved for message generated by authorization daemon. */
#define LOG_CRON 8 /* Reserved for message generated by clock daemon. */
#define LOG_LPR 9 /* Reserved for message generated by printer system. */
#define LOG_LOCAL0 10 /* Reserved for local use. */
#define LOG_LOCAL1 11 /* Reserved for local use. */
#define LOG_LOCAL2 12 /* Reserved for local use. */
#define LOG_LOCAL3 13 /* Reserved for local use. */
#define LOG_LOCAL4 14 /* Reserved for local use. */
#define LOG_LOCAL5 15 /* Reserved for local use. */
#define LOG_LOCAL6 16 /* Reserved for local use. */
#define LOG_LOCAL7 17 /* Reserved for local use. */

/* The <syslog.h> header shall define the following macros for
   constructing the maskpri argument to setlogmask(). The following
   macros expand to an expression of type int when the argument pri is
   an expression of type int: */
#define LOG_MASK(pri) 0
/* A mask for priority pri. */

/* The <syslog.h> header shall define the following symbolic constants
   for use as the priority argument of syslog(): */
#define LOG_EMERG 1/* A panic condition was reported to all processes. */
#define LOG_ALERT 2/* A condition that should be corrected immediately. */
#define LOG_CRIT 3/* A critical condition. */
#define LOG_ERR 4/* An error message. */
#define LOG_WARNING 5/* A warning message. */
#define LOG_NOTICE 6/* A condition requiring special handling. */
#define LOG_INFO 7/* A general information message. */
#define LOG_DEBUG 8/* A message useful for debugging programs. */

/* The following shall be declared as functions and may also be
   defined as macros. Function prototypes shall be provided. */

void  closelog(void);
void  openlog(const char *, int, int);
int   setlogmask(int);
void  syslog(int, const char *, ...);

#endif
