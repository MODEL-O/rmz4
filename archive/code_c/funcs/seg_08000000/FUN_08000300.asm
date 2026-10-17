; undefined FUN_08000300(void)
; entry 0x8000300  size 40 bytes

08000300: f0b4         push {r4,r5,r6,r7}
08000302: 4446         mov r4,r8
08000304: 4d46         mov r5,r9
08000306: 5646         mov r6,r10
08000308: 5f46         mov r7,r11
0800030A: f0b4         push {r4,r5,r6,r7}
0800030C: 7346         mov r3,lr
0800030E: 0360         str r3,[r0,#0x0]
08000310: 6b46         mov r3,sp
08000312: 0b60         str r3,[r1,#0x0]
08000314: 9546         mov sp,r2
08000316: f0bc         pop {r4,r5,r6,r7}
08000318: bb46         mov r11,r7
0800031A: b246         mov r10,r6
0800031C: a946         mov r9,r5
0800031E: a046         mov r8,r4
08000320: f0bc         pop {r4,r5,r6,r7}
08000322: 08bc         pop {r3}
08000324: 9e46         mov lr,r3
08000326: 7047         bx lr
