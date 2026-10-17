; undefined FUN_0801e6e0(void)
; entry 0x801e6e0  size 44 bytes

0801E6E0: 00b5         push {lr}
0801E6E2: 0168         ldr r1,[r0,#0x0]
0801E6E4: 0248         ldr r0,[0x0801e6f0]
0801E6E6: 8142         cmp r1,r0
0801E6E8: 04dc         bgt 0x0801e6f4
0801E6EA: 0020         mov r0,#0x0
0801E6EC: 17e0         b 0x0801e71e
0801E6F4: 0248         ldr r0,[0x0801e700]
0801E6F6: 8142         cmp r1,r0
0801E6F8: 04dc         bgt 0x0801e704
0801E6FA: 0120         mov r0,#0x1
0801E6FC: 0fe0         b 0x0801e71e
0801E704: 0348         ldr r0,[0x0801e714]
0801E706: 0918         add r1,r1,r0
0801E708: 0348         ldr r0,[0x0801e718]
0801E70A: 8142         cmp r1,r0
0801E70C: 06d9         bls 0x0801e71c
0801E70E: 0220         mov r0,#0x2
0801E710: 05e0         b 0x0801e71e
0801E71C: 0320         mov r0,#0x3
0801E71E: 02bc         pop {r1}
0801E720: 0847         bx r1
