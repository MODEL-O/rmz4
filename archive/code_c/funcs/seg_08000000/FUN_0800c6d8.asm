; undefined FUN_0800c6d8(void)
; entry 0x800c6d8  size 62 bytes

0800C6D8: 10b5         push {r4,lr}
0800C6DA: 82b0         sub sp,#0x8
0800C6DC: 0001         lsl r0,r0,#0x4
0800C6DE: 000c         lsr r0,r0,#0x10
0800C6E0: 0901         lsl r1,r1,#0x4
0800C6E2: 0d4b         ldr r3,[0x0800c718]
0800C6E4: 0914         asr r1,r1,#0x10
0800C6E6: 0a1c         add r2,r1,#0x0
0800C6E8: 5a32         add r2,#0x5a
0800C6EA: 1204         lsl r2,r2,#0x10
0800C6EC: 0b4c         ldr r4,[0x0800c71c]
0800C6EE: 0243         orr r2,r0
0800C6F0: 0092         str r2,[sp,#0x0]
0800C6F2: 019a         ldr r2,[sp,#0x4]
0800C6F4: 1a40         and r2,r3
0800C6F6: 0123         mov r3,#0x1
0800C6F8: 1a43         orr r2,r3
0800C6FA: 2240         and r2,r4
0800C6FC: 8023         mov r3,#0x80
0800C6FE: 5b02         lsl r3,r3,#0x9
0800C700: 1a43         orr r2,r3
0800C702: 0192         str r2,[sp,#0x4]
0800C704: 0004         lsl r0,r0,#0x10
0800C706: 0014         asr r0,r0,#0x10
0800C708: 6a46         mov r2,sp
0800C70A: faf72ffe     bl 0x0800736c
0800C70E: 02b0         add sp,#0x8
0800C710: 10bc         pop {r4}
0800C712: 01bc         pop {r0}
0800C714: 0047         bx r0
