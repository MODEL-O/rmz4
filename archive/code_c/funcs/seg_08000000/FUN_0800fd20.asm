; undefined FUN_0800fd20(void)
; entry 0x800fd20  size 18 bytes

0800FD20: 00b5         push {lr}
0800FD22: 011c         add r1,r0,#0x0
0800FD24: 887b         ldrb r0,[r1,#0xe]
0800FD26: 0028         cmp r0,#0x0
0800FD28: 01d1         bne 0x0800fd2e
0800FD2A: 0130         add r0,#0x1
0800FD2C: 8873         strb r0,[r1,#0xe]
0800FD2E: 01bc         pop {r0}
0800FD30: 0047         bx r0
