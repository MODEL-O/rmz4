; undefined FUN_0801e484(void)
; entry 0x801e484  size 60 bytes

0801E484: 00b5         push {lr}
0801E486: 031c         add r3,r0,#0x0
0801E488: 1a68         ldr r2,[r3,#0x0]
0801E48A: 0948         ldr r0,[0x0801e4b0]
0801E48C: 8242         cmp r2,r0
0801E48E: 0cdd         ble 0x0801e4aa
0801E490: 0848         ldr r0,[0x0801e4b4]
0801E492: 1118         add r1,r2,r0
0801E494: 0848         ldr r0,[0x0801e4b8]
0801E496: 8142         cmp r1,r0
0801E498: 07d9         bls 0x0801e4aa
0801E49A: 5968         ldr r1,[r3,#0x4]
0801E49C: 0748         ldr r0,[0x0801e4bc]
0801E49E: 8142         cmp r1,r0
0801E4A0: 0edc         bgt 0x0801e4c0
0801E4A2: e120         mov r0,#0xe1
0801E4A4: 0003         lsl r0,r0,#0xc
0801E4A6: 8242         cmp r2,r0
0801E4A8: 0add         ble 0x0801e4c0
0801E4AA: 0720         mov r0,#0x7
0801E4AC: 11e0         b 0x0801e4d2
0801E4C0: 1968         ldr r1,[r3,#0x0]
0801E4C2: 0248         ldr r0,[0x0801e4cc]
0801E4C4: 8142         cmp r1,r0
0801E4C6: 03dc         bgt 0x0801e4d0
0801E4C8: 0020         mov r0,#0x0
0801E4CA: 02e0         b 0x0801e4d2
0801E4D0: 0120         mov r0,#0x1
0801E4D2: 02bc         pop {r1}
0801E4D4: 0847         bx r1
