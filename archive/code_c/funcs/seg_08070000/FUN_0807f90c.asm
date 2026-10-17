; undefined FUN_0807f90c(void)
; entry 0x807f90c  size 40 bytes

0807F90C: 10b5         push {r4,lr}
0807F90E: 021c         add r2,r0,#0x0
0807F910: 0024         mov r4,#0x0
0807F912: 0848         ldr r0,[0x0807f934]
0807F914: 017a         ldrb r1,[r0,#0x8]
0807F916: 8023         mov r3,#0x80
0807F918: 181c         add r0,r3,#0x0
0807F91A: 0840         and r0,r1
0807F91C: 0028         cmp r0,#0x0
0807F91E: 04d1         bne 0x0807f92a
0807F920: d17a         ldrb r1,[r2,#0xb]
0807F922: 181c         add r0,r3,#0x0
0807F924: 0840         and r0,r1
0807F926: 0028         cmp r0,#0x0
0807F928: 00d0         beq 0x0807f92c
0807F92A: 0124         mov r4,#0x1
0807F92C: 201c         add r0,r4,#0x0
0807F92E: 10bc         pop {r4}
0807F930: 02bc         pop {r1}
0807F932: 0847         bx r1
