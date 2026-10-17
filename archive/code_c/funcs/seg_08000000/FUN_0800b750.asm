; undefined FUN_0800b750(void)
; entry 0x800b750  size 18 bytes

0800B750: 00b5         push {lr}
0800B752: 011c         add r1,r0,#0x0
0800B754: 887b         ldrb r0,[r1,#0xe]
0800B756: 0028         cmp r0,#0x0
0800B758: 01d1         bne 0x0800b75e
0800B75A: 0130         add r0,#0x1
0800B75C: 8873         strb r0,[r1,#0xe]
0800B75E: 01bc         pop {r0}
0800B760: 0047         bx r0
