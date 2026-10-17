; undefined FUN_0800f7b8(void)
; entry 0x800f7b8  size 24 bytes

0800F7B8: 00b5         push {lr}
0800F7BA: 031c         add r3,r0,#0x0
0800F7BC: 9a7b         ldrb r2,[r3,#0xe]
0800F7BE: 002a         cmp r2,#0x0
0800F7C0: 04d1         bne 0x0800f7cc
0800F7C2: 0348         ldr r0,[0x0800f7d0]
0800F7C4: 0349         ldr r1,[0x0800f7d4]
0800F7C6: 0160         str r1,[r0,#0x0]
0800F7C8: 501c         add r0,r2,#0x1
0800F7CA: 9873         strb r0,[r3,#0xe]
0800F7CC: 01bc         pop {r0}
0800F7CE: 0047         bx r0
