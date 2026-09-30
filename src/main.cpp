// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

int main() {
    bn::core::init(); 
    while (true) {
        bn::backdrop::set_color(bn::color(20,20,31));
        bn::core::update();
        bn::backdrop::set_color(bn::color(11,11,0)); 
        bn::core::update(); 
    }
}