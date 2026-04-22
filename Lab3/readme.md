# Требования:
* riscv64-unknown-elf-gcc (с поддержкой rv32)
* qemu-system-riscv64
* make


Сборка и запуск:

make && make qemu

Для отладки make debug

Для задания свободных слотов в массиве таймеров при сборке написать:
make MAX_SOFT_TIMERS=n
где n - количество слотов

Ожидаемый вывод:
=== sw_timer demo started ===
timers armed, entering idle loop
ONESHOT  timer fired
MULTISHOT timer fired
PERIODIC timer fired
MULTISHOT timer fired
PERIODIC timer fired
MULTISHOT timer fired
PERIODIC timer fired
PERIODIC timer fired

И далее Periodic будет бесконечное количество раз