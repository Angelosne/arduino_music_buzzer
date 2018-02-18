# arduino_music_buzzer
A template for writing music on arduino

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
Range: c2 - c6 (to be tested)

Pauses:
The letter p can be used for pause as any other note.

BPM:
The BPM can be changed where it is declared


example:
w(d4)
It will play the note d4 for 4 beats
