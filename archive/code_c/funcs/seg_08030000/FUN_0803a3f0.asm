; undefined FUN_0803a3f0(void)
; entry 0x803a3f0  size 50 bytes

0803A3F0: 10b5         push {r4,lr}
0803A3F2: 8446         mov r12,r0
0803A3F4: 0904         lsl r1,r1,#0x10
0803A3F6: 0c0c         lsr r4,r1,#0x10
0803A3F8: 817f         ldrb r1,[r0,#0x1e]
0803A3FA: 0902         lsl r1,r1,#0x8
0803A3FC: 7030         add r0,#0x70
0803A3FE: 0078         ldrb r0,[r0,#0x0]
0803A400: 0843         orr r0,r1
0803A402: a042         cmp r0,r4
0803A404: 0ad0         beq 0x0803a41c
0803A406: b720         mov r0,#0xb7
0803A408: 4000         lsl r0,r0,#0x1
0803A40A: 6044         add r0,r12
0803A40C: 0278         ldrb r2,[r0,#0x0]
0803A40E: 0548         ldr r0,[0x0803a424]
0803A410: 6044         add r0,r12
0803A412: 0378         ldrb r3,[r0,#0x0]
0803A414: 6046         mov r0,r12
0803A416: 211c         add r1,r4,#0x0
0803A418: e2f7d6fd     bl 0x0801cfc8
0803A41C: 10bc         pop {r4}
0803A41E: 01bc         pop {r0}
0803A420: 0047         bx r0
