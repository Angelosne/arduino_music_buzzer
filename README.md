# arduino_music_buzzer
A template for writing music on arduino

You need a buzzer and optionally a button.

D8------+buzzer------GND
D3-------button------GND

Usage:

There is a function for every rhythmic value with accepts one argument, the note.
w = whole note
wd = whole dotted note
h = half note
hd = hald dotted note
q = quarter note
qd = quarter dotted note
e = eighth note
ed = eighth dotted note
s = sixteenth note
sd = sixteenth dotted note

Notes:
The note are represented as usual except of A which is as "h", and then follows the octave number.
There are only flats and no sharps (it may change for better readability).
Range: c2 - c6 (to be tested)

Pauses:
The letter p can be used for pause as any other note.

BPM:
The BPM can be changed where it is declared


example:
w(db4)
It will play the note d4 flat (or c#4) for 4 beats
