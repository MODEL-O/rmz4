; undefined FUN_0801e558(void)
; entry 0x801e558  size 40 bytes

0801E558: 00b5         push {lr}
0801E55A: 0168         ldr r1,[r0,#0x0]
0801E55C: 0248         ldr r0,[0x0801e568]
0801E55E: 8142         cmp r1,r0
0801E560: 04dd         ble 0x0801e56c
0801E562: 0320         mov r0,#0x3
0801E564: 13e0         b 0x0801e58e
0801E56C: 0248         ldr r0,[0x0801e578]
0801E56E: 8142         cmp r1,r0
0801E570: 04dd         ble 0x0801e57c
0801E572: 0220         mov r0,#0x2
0801E574: 0be0         b 0x0801e58e
0801E57C: 0248         ldr r0,[0x0801e588]
0801E57E: 8142         cmp r1,r0
0801E580: 04dc         bgt 0x0801e58c
0801E582: 0020         mov r0,#0x0
0801E584: 03e0         b 0x0801e58e
0801E58C: 0120         mov r0,#0x1
0801E58E: 02bc         pop {r1}
0801E590: 0847         bx r1
