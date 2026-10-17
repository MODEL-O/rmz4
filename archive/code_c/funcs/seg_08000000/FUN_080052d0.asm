; undefined FUN_080052d0(void)
; entry 0x80052d0  size 72 bytes

080052D0: f0b5         push {r4,r5,r6,r7,lr}
080052D2: 4746         mov r7,r8
080052D4: 80b4         push {r7}
080052D6: 071c         add r7,r0,#0x0
080052D8: 0e1c         add r6,r1,#0x0
080052DA: 141c         add r4,r2,#0x0
080052DC: 2025         mov r5,#0x20
080052DE: 6d42         rsb r5,r5
080052E0: 2540         and r5,r4
080052E2: aa08         lsr r2,r5,#0x2
080052E4: 0c48         ldr r0,[0x08005318]
080052E6: 8046         mov r8,r0
080052E8: 0240         and r2,r0
080052EA: 301c         add r0,r6,#0x0
080052EC: 391c         add r1,r7,#0x0
080052EE: 23f177fc     bl 0x08128be0
080052F2: 1f22         mov r2,#0x1f
080052F4: 2240         and r2,r4
080052F6: 002a         cmp r2,#0x0
080052F8: 09d0         beq 0x0800530e
080052FA: 7019         add r0,r6,r5
080052FC: 7919         add r1,r7,r5
080052FE: 9208         lsr r2,r2,#0x2
08005300: 4346         mov r3,r8
08005302: 1a40         and r2,r3
08005304: 8023         mov r3,#0x80
08005306: db04         lsl r3,r3,#0x13
08005308: 1a43         orr r2,r3
0800530A: 23f16bfc     bl 0x08128be4
0800530E: 08bc         pop {r3}
08005310: 9846         mov r8,r3
08005312: f0bc         pop {r4,r5,r6,r7}
08005314: 01bc         pop {r0}
08005316: 0047         bx r0
