; undefined FUN_0801e5bc(void)
; entry 0x801e5bc  size 50 bytes

0801E5BC: 00b5         push {lr}
0801E5BE: 0268         ldr r2,[r0,#0x0]
0801E5C0: 0348         ldr r0,[0x0801e5d0]
0801E5C2: 1118         add r1,r2,r0
0801E5C4: 0348         ldr r0,[0x0801e5d4]
0801E5C6: 8142         cmp r1,r0
0801E5C8: 06d8         bhi 0x0801e5d8
0801E5CA: 0320         mov r0,#0x3
0801E5CC: 19e0         b 0x0801e602
0801E5D8: 0349         ldr r1,[0x0801e5e8]
0801E5DA: 5018         add r0,r2,r1
0801E5DC: 0349         ldr r1,[0x0801e5ec]
0801E5DE: 8842         cmp r0,r1
0801E5E0: 06d8         bhi 0x0801e5f0
0801E5E2: 0220         mov r0,#0x2
0801E5E4: 0de0         b 0x0801e602
0801E5F0: 024b         ldr r3,[0x0801e5fc]
0801E5F2: d018         add r0,r2,r3
0801E5F4: 8842         cmp r0,r1
0801E5F6: 03d9         bls 0x0801e600
0801E5F8: 0020         mov r0,#0x0
0801E5FA: 02e0         b 0x0801e602
0801E600: 0120         mov r0,#0x1
0801E602: 02bc         pop {r1}
0801E604: 0847         bx r1
