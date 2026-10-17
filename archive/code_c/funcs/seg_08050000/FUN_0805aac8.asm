; undefined FUN_0805aac8(void)
; entry 0x805aac8  size 20 bytes

0805AAC8: 00b5         push {lr}
0805AACA: 044a         ldr r2,[0x0805aadc]
0805AACC: 817b         ldrb r1,[r0,#0xe]
0805AACE: 8900         lsl r1,r1,#0x2
0805AAD0: 8918         add r1,r1,r2
0805AAD2: 0968         ldr r1,[r1,#0x0]
0805AAD4: cef054fa     bl 0x08128f80
0805AAD8: 01bc         pop {r0}
0805AADA: 0047         bx r0
