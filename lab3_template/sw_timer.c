#include "sw_timer.h"

#define MTIME_ADDR      0x0200BFF8
#define MTIMECMP_ADDR   0x02004000

typedef struct {
	enum sw_timer_type_t;
	long ticks_period;
	long ticks;
	void (*callback)(const char*);
	bool is_active;
	unsigned long times_to_shot;
} sw_timer_t

static sw_timer_t timers[MAX_SOFT_TIMERS];
static uint64_t resolution = 0;
static volatile uint64_t * const mtime = (volatile uint64_t *)MTIME_ADDR;
static volatile uint64_t * const mtimecmp = (volatile uint64_t *)MTIMECMP_ADDR;

int sw_timer_init(unsigned long resolution)
{

}

sw_timer_handle_t sw_timer_add(unsigned long ticks, sw_timer_type_t type, unsigned long times_to_shot, timer_callback_t callback_fun, void *arg)
{

}

bool sw_timer_is_active(sw_timer_handle_t index)
{

}

static void update_hardware_timer(void)
{

}

void sw_timer_irq_handler(void)
{

}
