Добавил функцию:

void display_current_result(int add){

    if(currentNum + add >= maxResult){
        uint8_t ost = maxResult - currentNum;
        currentNum = add - ost;
    }else{
        currentNum += add;
    }

    uint32_t led_mask = currentNum & 0x3F;
    GPIO0->OUT = ~led_mask; 
}


и в main подправил:

case '1':
    display_current_result(1);
    break;
case '2':
    display_current_result(2);
    break;
case '3':
    display_current_result(3);
    break;
case '4':
    display_current_result(4);
    break;
case '5':
    display_current_result(5);
    break;
case '6':
    display_current_result(6);
    break;
case '7':
    display_current_result(7);
    break;
case '8':
    display_current_result(8);
    break;
case '9':
    display_current_result(9);
    break;
default:
    continue;
            

Получился бинарный калькулятор на диодах.

в Makefile:
RISCV_NAME ?= riscv64-unknown-elf
RISCV_PATH ?= /usr

