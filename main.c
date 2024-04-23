/**
 * @file main.c
 * @author Josué Pagán (j.pagan@upm.es)
 * @author Román Cárdenas (r.cardenas@upm.es)
 * @brief Main file of the program.
 * @date 01-01-2024
 *
 */

/* Standard C includes */
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/* HW dependent includes */
#include "port_system.h"

/* Other includes */
#include <fsm.h>

#define BLINK_T_MS 2000 /*!< Blink LED period in ms */

/**
 * @brief Main function. Entry point of the program.
 *
 * @return int Status of the execution.
 */
int main()
{
    port_system_init();

    while (1)
    {
    }
    return 0;
}
