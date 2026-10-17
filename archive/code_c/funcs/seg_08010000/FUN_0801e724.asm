; undefined FUN_0801e724(void)
; entry 0x801e724  size 44 bytes

0801E724: 00b5         push {lr}
0801E726: 021c         add r2,r0,#0x0
0801E728: 5168         ldr r1,[r2,#0x4]
0801E72A: 0248         ldr r0,[0x0801e734]
0801E72C: 8142         cmp r1,r0
0801E72E: 03dd         ble 0x0801e738
0801E730: 0320         mov r0,#0x3
0801E732: 12e0         b 0x0801e75a
0801E738: 1168         ldr r1,[r2,#0x0]
0801E73A: 0248         ldr r0,[0x0801e744]
0801E73C: 8142         cmp r1,r0
0801E73E: 03dd         ble 0x0801e748
0801E740: 0220         mov r0,#0x2
0801E742: 0ae0         b 0x0801e75a
0801E748: 0248         ldr r0,[0x0801e754]
0801E74A: 8142         cmp r1,r0
0801E74C: 04dc         bgt 0x0801e758
0801E74E: 0020         mov r0,#0x0
0801E750: 03e0         b 0x0801e75a
0801E758: 0120         mov r0,#0x1
0801E75A: 02bc         pop {r1}
0801E75C: 0847         bx r1
