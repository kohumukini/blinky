// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_vector.h>

int main() {
    bn::core::init(); 
    bn::backdrop::set_color(bn::color(20, 20, 31));
    bn::vector<bn::color, 128> history; 

    history.push_back(bn::color(20, 20, 31));
    while (true) {
        if (bn::keypad::up_held() && !history.empty()) {
            bn::color next_color = history.front();
            bn::backdrop::set_color(next_color);
            
            history.erase(history.begin());
        } else {
            if (bn::keypad::a_pressed()) {
                bn::backdrop::set_color(bn::color(31,21,22)); 
                if (!history.full()) history.push_back(bn::color(31,21,22)); 
            }
            if (bn::keypad::b_pressed()) {
                bn::backdrop::set_color(bn::color(18,31,18)); 
                if (!history.full()) history.push_back(bn::color(18,31,18)); 
            }
        }

        bn::core::update();
    }
}