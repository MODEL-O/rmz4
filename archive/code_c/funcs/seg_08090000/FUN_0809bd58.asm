; undefined FUN_0809bd58(void)
; entry 0x809bd58  size 20 bytes

0809BD58: 00b5         push {lr}
0809BD5A: 044a         ldr r2,[0x0809bd6c]
0809BD5C: 017c         ldrb r1,[r0,#0x10]
0809BD5E: 8900         lsl r1,r1,#0x2
0809BD60: 8918         add r1,r1,r2
0809BD62: 0968         ldr r1,[r1,#0x0]
0809BD64: 8df00cf9     bl 0x08128f80
0809BD68: 01bc         pop {r0}
0809BD6A: 0047         bx r0
