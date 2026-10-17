; undefined FUN_080661b8(void)
; entry 0x80661b8  size 70 bytes

080661B8: f0b5         push {r4,r5,r6,r7,lr}
080661BA: 4746         mov r7,r8
080661BC: 80b4         push {r7}
080661BE: d023         mov r3,#0xd0
080661C0: 5b18         add r3,r3,r1
080661C2: 9c46         mov r12,r3
080661C4: 0e4d         ldr r5,[0x08066200]
080661C6: d200         lsl r2,r2,#0x3
080661C8: 5319         add r3,r2,r5
080661CA: 1b68         ldr r3,[r3,#0x0]
080661CC: f024         mov r4,#0xf0
080661CE: e401         lsl r4,r4,#0x7
080661D0: e418         add r4,r4,r3
080661D2: a046         mov r8,r4
080661D4: 6346         mov r3,r12
080661D6: 1b68         ldr r3,[r3,#0x0]
080661D8: 9c46         mov r12,r3
080661DA: 6646         mov r6,r12
080661DC: 4644         add r6,r8
080661DE: d431         add r1,#0xd4
080661E0: 0435         add r5,#0x4
080661E2: 5219         add r2,r2,r5
080661E4: 1268         ldr r2,[r2,#0x0]
080661E6: 8024         mov r4,#0x80
080661E8: 2402         lsl r4,r4,#0x8
080661EA: 1219         add r2,r2,r4
080661EC: 0968         ldr r1,[r1,#0x0]
080661EE: 8f18         add r7,r1,r2
080661F0: 0660         str r6,[r0,#0x0]
080661F2: 4760         str r7,[r0,#0x4]
080661F4: 08bc         pop {r3}
080661F6: 9846         mov r8,r3
080661F8: f0bc         pop {r4,r5,r6,r7}
080661FA: 04bc         pop {r2}
080661FC: 1047         bx r2
