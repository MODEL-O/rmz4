; undefined FUN_080192f0(void)
; entry 0x80192f0  size 64 bytes

080192F0: 70b5         push {r4,r5,r6,lr}
080192F2: 051c         add r5,r0,#0x0
080192F4: ae7b         ldrb r6,[r5,#0xe]
080192F6: 002e         cmp r6,#0x0
080192F8: 17d1         bne 0x0801932a
080192FA: e96d         ldr r1,[r5,#0x5c]
080192FC: 0904         lsl r1,r1,#0x10
080192FE: 090d         lsr r1,r1,#0x14
08019300: 4b00         lsl r3,r1,#0x1
08019302: 0b4c         ldr r4,[0x08019330]
08019304: 1b19         add r3,r3,r4
08019306: 1a88         ldrh r2,[r3,#0x0]
08019308: 0a48         ldr r0,[0x08019334]
0801930A: 1040         and r0,r2
0801930C: 0222         mov r2,#0x2
0801930E: 1043         orr r0,r2
08019310: 1880         strh r0,[r3,#0x0]
08019312: 8900         lsl r1,r1,#0x2
08019314: 0834         add r4,#0x8
08019316: 0919         add r1,r1,r4
08019318: 0e60         str r6,[r1,#0x0]
0801931A: c320         mov r0,#0xc3
0801931C: c000         lsl r0,r0,#0x3
0801931E: e864         str r0,[r5,#0x4c]
08019320: c020         mov r0,#0xc0
08019322: 6864         str r0,[r5,#0x44]
08019324: a87b         ldrb r0,[r5,#0xe]
08019326: 0130         add r0,#0x1
08019328: a873         strb r0,[r5,#0xe]
0801932A: 70bc         pop {r4,r5,r6}
0801932C: 01bc         pop {r0}
0801932E: 0047         bx r0
