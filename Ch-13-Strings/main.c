#include "exs.h"
#include "prs.h"

/* This is the main file to run the tasks of chapter 13.
 * A task can be either an exercise (ex) or a programming project (pr).
 * For this chapter, the possible tasks are:
 * Exercises: 2, 3, 4, 6, 8, 10, 14, 15, 16
 * Projects: 1, 4, 6
 * Please set the task type and number to specify a task.
*/

#define TASK_TYPE ex
#define TASK_NUM 2
#define TASK_JOIN(t, i) t##i()
#define TASK(t, i) TASK_JOIN(t, i)

int main(void) {
    TASK(TASK_TYPE, TASK_NUM);
}
