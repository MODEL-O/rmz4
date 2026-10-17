; undefined FUN_0801e7cc(void)
; entry 0x801e7cc  size 30 bytes

0801E7CC: 00b5         push {lr}
0801E7CE: 0168         ldr r1,[r0,#0x0]
0801E7D0: 0248         ldr r0,[0x0801e7dc]
0801E7D2: 8142         cmp r1,r0
0801E7D4: 04dd         ble 0x0801e7e0
0801E7D6: 0220         mov r0,#0x2
0801E7D8: 0be0         b 0x0801e7f2
0801E7E0: 0248         ldr r0,[0x0801e7ec]
0801E7E2: 8142         cmp r1,r0
0801E7E4: 04dc         bgt 0x0801e7f0
0801E7E6: 0020         mov r0,#0x0
0801E7E8: 03e0         b 0x0801e7f2
0801E7F0: 0120         mov r0,#0x1
0801E7F2: 02bc         pop {r1}
0801E7F4: 0847         bx r1
