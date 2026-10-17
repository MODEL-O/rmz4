; undefined FUN_0801e790(void)
; entry 0x801e790  size 44 bytes

0801E790: 00b5         push {lr}
0801E792: 021c         add r2,r0,#0x0
0801E794: 1168         ldr r1,[r2,#0x0]
0801E796: 0648         ldr r0,[0x0801e7b0]
0801E798: 8142         cmp r1,r0
0801E79A: 13dd         ble 0x0801e7c4
0801E79C: 0548         ldr r0,[0x0801e7b4]
0801E79E: 8142         cmp r1,r0
0801E7A0: 0edc         bgt 0x0801e7c0
0801E7A2: 5168         ldr r1,[r2,#0x4]
0801E7A4: 0448         ldr r0,[0x0801e7b8]
0801E7A6: 8142         cmp r1,r0
0801E7A8: 08dd         ble 0x0801e7bc
0801E7AA: 0320         mov r0,#0x3
0801E7AC: 0be0         b 0x0801e7c6
0801E7BC: 0220         mov r0,#0x2
0801E7BE: 02e0         b 0x0801e7c6
0801E7C0: 0120         mov r0,#0x1
0801E7C2: 00e0         b 0x0801e7c6
0801E7C4: 0020         mov r0,#0x0
0801E7C6: 02bc         pop {r1}
0801E7C8: 0847         bx r1
