#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_ESC, KC_LCTL, KC_LSFT, KC_Y, KC_H, KC_SPC, 
		ALT_T(KC_Q), KC_A, KC_Z, KC_U, KC_J, LT(1, KC_N), 
		KC_W, KC_S, GUI_T(KC_X), KC_I, KC_K, KC_M, 
		KC_E, KC_D, KC_C, KC_O, KC_L, KC_COMM, 
		KC_R, KC_F, LT(3, KC_V), KC_P, KC_MINS, KC_DOT, 
		KC_T, KC_G, LT(2, KC_B), KC_BSPC, KC_ENT, KC_SPC),

	KEYMAP(
		KC_TAB, KC_LCTL, KC_LSFT, KC_6, KC_PLUS, KC_TRNS, 
		KC_1, KC_EXLM, KC_TRNS, KC_7, KC_MINS, KC_TRNS, 
		KC_2, KC_AT, KC_TRNS, KC_8, KC_ASTR, KC_TRNS, 
		KC_3, KC_HASH, KC_TRNS, KC_9, KC_SLSH, KC_TRNS, 
		KC_4, KC_DLR, KC_TRNS, KC_0, KC_EQL, KC_TRNS, 
		KC_5, KC_PERC, KC_TRNS, KC_BSPC, KC_ENT, KC_SPC),

	KEYMAP(
		KC_TAB, KC_LCTL, KC_LSFT, KC_F6, KC_LEFT, KC_TRNS, 
		KC_F1, KC_LBRC, KC_UNDS, KC_F7, KC_DOWN, KC_TRNS, 
		KC_F2, KC_RBRC, KC_PIPE, KC_F8, KC_UP, KC_TRNS, 
		KC_F3, KC_BSLS, KC_CIRC, KC_F9, KC_RGHT, KC_TRNS, 
		KC_F4, KC_SCLN, KC_TILD, KC_F10, KC_QUES, KC_TRNS, 
		KC_F5, KC_COLN, KC_TRNS, RESET, KC_ENT, KC_SPC),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_RPRN, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
