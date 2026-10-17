; undefined FUN_080002dc(void)
; entry 0x80002dc  size 34 bytes

080002DC: f0b5         push {r4,r5,r6,r7,lr}
080002DE: 4446         mov r4,r8
080002E0: 4d46         mov r5,r9
080002E2: 5646         mov r6,r10
080002E4: 5f46         mov r7,r11
080002E6: f0b4         push {r4,r5,r6,r7}
080002E8: 6c46         mov r4,sp
080002EA: 1c60         str r4,[r3,#0x0]
080002EC: 8e46         mov lr,r1
080002EE: 9546         mov sp,r2
080002F0: f0bc         pop {r4,r5,r6,r7}
080002F2: bb46         mov r11,r7
080002F4: b246         mov r10,r6
080002F6: a946         mov r9,r5
080002F8: a046         mov r8,r4
080002FA: f0bc         pop {r4,r5,r6,r7}
080002FC: 7047         bx lr
