; undefined FUN_0810d410(void)
; entry 0x810d410  size 46 bytes

0810D410: 70b5         push {r4,r5,r6,lr}
0810D412: 4646         mov r6,r8
0810D414: 40b4         push {r6}
0810D416: 82b0         sub sp,#0x8
0810D418: 0468         ldr r4,[r0,#0x0]
0810D41A: 4568         ldr r5,[r0,#0x4]
0810D41C: 0e68         ldr r6,[r1,#0x0]
0810D41E: 4968         ldr r1,[r1,#0x4]
0810D420: 8846         mov r8,r1
0810D422: 0092         str r2,[sp,#0x0]
0810D424: 0193         str r3,[sp,#0x4]
0810D426: 201c         add r0,r4,#0x0
0810D428: 291c         add r1,r5,#0x0
0810D42A: 321c         add r2,r6,#0x0
0810D42C: 4346         mov r3,r8
0810D42E: fff7e3ff     bl 0x0810d3f8
0810D432: 02b0         add sp,#0x8
0810D434: 08bc         pop {r3}
0810D436: 9846         mov r8,r3
0810D438: 70bc         pop {r4,r5,r6}
0810D43A: 02bc         pop {r1}
0810D43C: 0847         bx r1
