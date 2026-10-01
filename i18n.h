// i18n.h — Sprachdateien für das RideToWooshHID Web-UI
// ---------------------------------------------------------------------
// Klassisches i18n-Pattern (index.html + Sprachdateien), nur dass die
// Sprachdateien hier aus dem PROGMEM serviert werden — so braucht der ESP
// kein Dateisystem und das UI läuft offline am Access-Point.
//
// Ausgeliefert unter:
//   GET /i18n/en.json   (Default / Primärsprache)
//   GET /i18n/de.json
//
// Das UI lädt die Datei per fetch() und füllt alle [data-i18n]-Elemente.
// Neue Sprache = neue Datei + Eintrag im Sprach-Umschalter in webui.h.
#pragma once
#include <Arduino.h>

// ---------------------------- English (default) ----------------------
const char LANG_EN_JSON[] PROGMEM = R"I18N(
{
  "tag": "Controller Bridge",
  "back": "Back",
  "skip": "Skip to main content",
  "langLabel": "Language",
  "reconnecting": "Reconnecting to device…",
  "controller_hint": "Press buttons on your Ride — the pressed one lights up. Levers light at ~40% deflection.",
  "ctrl": { "dpad": "D-Pad", "buttons": "Buttons", "shifters": "Shifters", "shiftUp": "Shift ▲", "shiftDn": "Shift ▼", "aux": "Aux" },
  "nav": {
    "controller":{ "t": "Controller", "d": "Live button map" },
    "mapping":  { "t": "Key Mapping", "d": "Assign a keyboard key to every button" },
    "history":  { "t": "History",     "d": "Last 50 button presses" },
    "devices":  { "t": "Devices",     "d": "Connected input & output" },
    "settings": { "t": "Settings",    "d": "Language & info" }
  },
  "conn": {
    "in": "Input · Ride",
    "out": "Output · Keyboard",
    "disc": "disconnected",
    "connected": "connected",
    "searching": "searching…",
    "inFb": "Ride connected",
    "outFb": "Keyboard host",
    "hostNote": "Bluetooth address of the connected host (apps can't expose its name)."
  },
  "live": {
    "lbl": "Live — pressed button",
    "kbd": "Keyboard",
    "noKey": "(no key mapped)",
    "idle": "Press a button on your Ride…"
  },
  "setup": {
    "title": "Get started",
    "kbd": "Pair “RideToWooshHID” as a keyboard in your device's Bluetooth settings",
    "ride": "Turn on the Ride (disconnect it from the Zwift app first)",
    "remap": "Open Key Mapping and assign your keys",
    "done": "All set — you're ready to ride."
  },
  "led": {
    "t": "Status LED",
    "on": "On",
    "off": "Off",
    "br": "Brightness",
    "hint": "Green: Ride + keyboard connected · Yellow blink: searching Ride · Blue blink: pair the keyboard · Red blink: nothing connected · White flash: key press · Double red blink: battery low. Saved immediately on the device."
  },
  "presets": {
    "label": "Quick presets",
    "hint": "A starting point — review and Save."
  },
  "groups": {
    "dpad": "D-Pad",
    "action": "Action Buttons",
    "left": "Left Handlebar",
    "right": "Right Handlebar",
    "levers": "Steering levers (analog)"
  },
  "btn": {
    "LEFT_BTN": "D-Pad Left",
    "UP_BTN": "D-Pad Up",
    "RIGHT_BTN": "D-Pad Right",
    "DOWN_BTN": "D-Pad Down",
    "A_BTN": "A",
    "B_BTN": "B",
    "Y_BTN": "Y",
    "Z_BTN": "Z",
    "SHFT_UP_L_BTN": "Shift Paddle Up",
    "SHFT_DN_L_BTN": "Shift Paddle Down",
    "AUX_L_BTN": "Brake button (left)",
    "SHFT_UP_R_BTN": "Shift Paddle Up",
    "SHFT_DN_R_BTN": "Shift Paddle Down",
    "AUX_R_BTN": "Brake button (right)",
    "STEER_LL_BTN": "Left lever ◀",
    "STEER_LR_BTN": "Left lever ▶",
    "STEER_RL_BTN": "Right lever ◀",
    "STEER_RR_BTN": "Right lever ▶"
  },
  "picker": {
    "title": "Assign a key",
    "hint": "Tap a key — or press one on a connected keyboard.",
    "letters": "Letters",
    "numbers": "Numbers",
    "special": "Special",
    "clear": "Clear (no key)",
    "cancel": "Cancel"
  },
  "save": "Save",
  "saveChanges": "Save changes",
  "saved": "Saved ✓",
  "unsaved": "Unsaved changes",
  "reload": "Revert",
  "discard": "Discard unsaved changes?",
  "conflict": "Same key used more than once",
  "history_empty": "Nothing pressed yet.",
  "tap_to_assign": "Tap to assign a key",
  "hint": "Tap a field to assign a key (works on phones too) — or press a key on a connected keyboard. Empty = the button does nothing. MyWhoosh shifts with I (up) and K (down) by default; Zwift uses the arrow keys. After saving, the mapping stays on the device.",
  "settings_lang": "Language",
  "settings_langHint": "Stored only in this browser — not on the device.",
  "settings_about": "About",
  "settings_aboutText": "Reads the Zwift Ride controller over BLE and emits freely configurable keystrokes as a BLE keyboard. Open-source DIY project."
}
)I18N";

// ---------------------------- Deutsch --------------------------------
const char LANG_DE_JSON[] PROGMEM = R"I18N(
{
  "tag": "Controller-Bridge",
  "back": "Zurück",
  "skip": "Zum Inhalt springen",
  "langLabel": "Sprache",
  "reconnecting": "Verbindung wird wiederhergestellt…",
  "controller_hint": "Drücke Knöpfe an der Ride — die gedrückte leuchtet. Hebel leuchten ab ~40 % Ausschlag.",
  "ctrl": { "dpad": "Steuerkreuz", "buttons": "Tasten", "shifters": "Schalten", "shiftUp": "Schalt ▲", "shiftDn": "Schalt ▼", "aux": "Zusatz" },
  "nav": {
    "controller":{ "t": "Controller", "d": "Live-Tastenbild" },
    "mapping":  { "t": "Tastenbelegung", "d": "Jedem Knopf eine Taste zuweisen" },
    "history":  { "t": "Verlauf",        "d": "Letzte 50 Tastendrücke" },
    "devices":  { "t": "Geräte",         "d": "Verbundener Ein- & Ausgang" },
    "settings": { "t": "Einstellungen",  "d": "Sprache & Info" }
  },
  "conn": {
    "in": "Eingang · Ride",
    "out": "Ausgang · Tastatur",
    "disc": "getrennt",
    "connected": "verbunden",
    "searching": "suche…",
    "inFb": "Ride verbunden",
    "outFb": "Tastatur-Host",
    "hostNote": "Bluetooth-Adresse des verbundenen Hosts (Apps geben den Namen nicht preis)."
  },
  "live": {
    "lbl": "Live — gedrückter Knopf",
    "kbd": "Tastatur",
    "noKey": "(keine Taste belegt)",
    "idle": "Drücke einen Knopf an der Ride…"
  },
  "setup": {
    "title": "Erste Schritte",
    "kbd": "„RideToWooshHID” am Endgerät in den Bluetooth-Einstellungen als Tastatur koppeln",
    "ride": "Ride einschalten (vorher in der Zwift-App trennen)",
    "remap": "Tastenbelegung öffnen und Tasten zuweisen",
    "done": "Alles bereit — auf geht's."
  },
  "led": {
    "t": "Status-LED",
    "on": "An",
    "off": "Aus",
    "br": "Helligkeit",
    "hint": "Grün: Ride + Tastatur verbunden · Gelb blinkt: Ride wird gesucht · Blau blinkt: Tastatur koppeln · Rot blinkt: nichts verbunden · Weißer Blitz: Tastendruck · Rotes Doppelblinken: Akku schwach. Wird sofort auf dem Gerät gespeichert."
  },
  "presets": {
    "label": "Schnell-Presets",
    "hint": "Ein Startpunkt — prüfen und Speichern."
  },
  "groups": {
    "dpad": "Steuerkreuz",
    "action": "Aktionstasten",
    "left": "Lenker Links",
    "right": "Lenker Rechts",
    "levers": "Lenkhebel (analog)"
  },
  "btn": {
    "LEFT_BTN": "Steuerkreuz Links",
    "UP_BTN": "Steuerkreuz Hoch",
    "RIGHT_BTN": "Steuerkreuz Rechts",
    "DOWN_BTN": "Steuerkreuz Runter",
    "A_BTN": "A",
    "B_BTN": "B",
    "Y_BTN": "Y",
    "Z_BTN": "Z",
    "SHFT_UP_L_BTN": "Schalt-Paddle Hoch",
    "SHFT_DN_L_BTN": "Schalt-Paddle Runter",
    "AUX_L_BTN": "Bremsknopf (links)",
    "SHFT_UP_R_BTN": "Schalt-Paddle Hoch",
    "SHFT_DN_R_BTN": "Schalt-Paddle Runter",
    "AUX_R_BTN": "Bremsknopf (rechts)",
    "STEER_LL_BTN": "Hebel links ◀",
    "STEER_LR_BTN": "Hebel links ▶",
    "STEER_RL_BTN": "Hebel rechts ◀",
    "STEER_RR_BTN": "Hebel rechts ▶"
  },
  "picker": {
    "title": "Taste zuweisen",
    "hint": "Taste antippen — oder auf einer verbundenen Tastatur drücken.",
    "letters": "Buchstaben",
    "numbers": "Zahlen",
    "special": "Spezial",
    "clear": "Löschen (keine Taste)",
    "cancel": "Abbrechen"
  },
  "save": "Speichern",
  "saveChanges": "Änderungen speichern",
  "saved": "Gespeichert ✓",
  "unsaved": "Ungespeicherte Änderungen",
  "reload": "Verwerfen",
  "discard": "Ungespeicherte Änderungen verwerfen?",
  "conflict": "Taste mehrfach verwendet",
  "history_empty": "Noch nichts gedrückt.",
  "tap_to_assign": "Zum Zuweisen tippen",
  "hint": "Tippe ein Feld an, um eine Taste zuzuweisen (geht auch am Handy) — oder drücke eine Taste auf einer verbundenen Tastatur. Leer = der Knopf macht nichts. MyWhoosh schaltet standardmäßig mit I (hoch) und K (runter); Zwift nutzt die Pfeiltasten. Nach dem Speichern bleibt die Belegung auf dem Gerät.",
  "settings_lang": "Sprache",
  "settings_langHint": "Nur in diesem Browser gespeichert — nicht auf dem Gerät.",
  "settings_about": "Über",
  "settings_aboutText": "Liest den Zwift Ride Controller per BLE und gibt frei konfigurierbare Tastendrücke als BLE-Tastatur aus. Open-Source-DIY-Projekt."
}
)I18N";
