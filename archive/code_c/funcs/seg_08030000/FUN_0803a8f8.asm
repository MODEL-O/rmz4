; undefined FUN_0803a8f8(void)
; entry 0x803a8f8  size 40 bytes

0803A8F8: 00b5         push {lr}
0803A8FA: 0a1c         add r2,r1,#0x0
0803A8FC: 0004         lsl r0,r0,#0x10
0803A8FE: 000c         lsr r0,r0,#0x10
0803A900: 1204         lsl r2,r2,#0x10
0803A902: d20a         lsr r2,r2,#0xb
0803A904: 0649         ldr r1,[0x0803a920]
0803A906: 5218         add r2,r2,r1
0803A908: 0649         ldr r1,[0x0803a924]
0803A90A: 4018         add r0,r0,r1
0803A90C: 0178         ldrb r1,[r0,#0x0]
0803A90E: 4901         lsl r1,r1,#0x5
0803A910: 0548         ldr r0,[0x0803a928]
0803A912: 0918         add r1,r1,r0
0803A914: 101c         add r0,r2,#0x0
0803A916: 0822         mov r2,#0x8
0803A918: eef062f9     bl 0x08128be0
0803A91C: 01bc         pop {r0}
0803A91E: 0047         bx r0
