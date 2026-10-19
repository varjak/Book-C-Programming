#include "exs.h"
#include "prs.h"

/* This is the main file to run the tasks of chapter 12.
 * A task can be either an exercise (ex) or a programming project (pr).
 * For this chapter, the possible tasks are:
 * Exercises: 2, 4, 6, 13, 14, 15
 * Projects: 1, 3
 * Please set the task type and number to specify a task.
*/

#define TASK_TYPE ex
#define TASK_NUM 2
#define TASK_JOIN(t, i) t##i()
#define TASK(t, i) TASK_JOIN(t, i)

int main(void) {
    TASK(TASK_TYPE, TASK_NUM);
}
