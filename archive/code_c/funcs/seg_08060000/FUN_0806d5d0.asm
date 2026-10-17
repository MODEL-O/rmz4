; undefined FUN_0806d5d0(void)
; entry 0x806d5d0  size 38 bytes

0806D5D0: 00b5         push {lr}
0806D5D2: 021c         add r2,r0,#0x0
0806D5D4: 907b         ldrb r0,[r2,#0xe]
0806D5D6: 0028         cmp r0,#0x0
0806D5D8: 01d1         bne 0x0806d5de
0806D5DA: 0130         add r0,#0x1
0806D5DC: 9073         strb r0,[r2,#0xe]
0806D5DE: 9069         ldr r0,[r2,#0x18]
0806D5E0: 417a         ldrb r1,[r0,#0x9]
0806D5E2: 0123         mov r3,#0x1
0806D5E4: 181c         add r0,r3,#0x0
0806D5E6: 0840         and r0,r1
0806D5E8: 0028         cmp r0,#0x0
0806D5EA: 02d0         beq 0x0806d5f2
0806D5EC: 0020         mov r0,#0x0
0806D5EE: 5373         strb r3,[r2,#0xd]
0806D5F0: 9073         strb r0,[r2,#0xe]
0806D5F2: 01bc         pop {r0}
0806D5F4: 0047         bx r0
