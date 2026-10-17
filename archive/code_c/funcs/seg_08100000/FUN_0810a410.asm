; undefined FUN_0810a410(void)
; entry 0x810a410  size 70 bytes

0810A410: 30b5         push {r4,r5,lr}
0810A412: 051c         add r5,r0,#0x0
0810A414: 0906         lsl r1,r1,#0x18
0810A416: 0c0e         lsr r4,r1,#0x18
0810A418: 0f48         ldr r0,[0x0810a458]
0810A41A: 0068         ldr r0,[r0,#0x0]
0810A41C: fbf670f8     bl 0x08005500
0810A420: 031c         add r3,r0,#0x0
0810A422: 002b         cmp r3,#0x0
0810A424: 13d0         beq 0x0810a44e
0810A426: 191c         add r1,r3,#0x0
0810A428: 2531         add r1,#0x25
0810A42A: 0022         mov r2,#0x0
0810A42C: 1020         mov r0,#0x10
0810A42E: 0870         strb r0,[r1,#0x0]
0810A430: 0a49         ldr r1,[0x0810a45c]
0810A432: 0120         mov r0,#0x1
0810A434: 5872         strb r0,[r3,#0x9]
0810A436: 4868         ldr r0,[r1,#0x4]
0810A438: 0068         ldr r0,[r0,#0x0]
0810A43A: 5861         str r0,[r3,#0x14]
0810A43C: 0020         mov r0,#0x0
0810A43E: 1a84         strh r2,[r3,#0x20]
0810A440: 191c         add r1,r3,#0x0
0810A442: 2231         add r1,#0x22
0810A444: 0870         strb r0,[r1,#0x0]
0810A446: 9d62         str r5,[r3,#0x28]
0810A448: 1c74         strb r4,[r3,#0x10]
0810A44A: ff20         mov r0,#0xff
0810A44C: 5874         strb r0,[r3,#0x11]
0810A44E: 181c         add r0,r3,#0x0
0810A450: 30bc         pop {r4,r5}
0810A452: 02bc         pop {r1}
0810A454: 0847         bx r1
