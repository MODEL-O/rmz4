; undefined FUN_08090b50(void)
; entry 0x8090b50  size 20 bytes

08090B50: 00b5         push {lr}
08090B52: 044a         ldr r2,[0x08090b64]
08090B54: 017c         ldrb r1,[r0,#0x10]
08090B56: 8900         lsl r1,r1,#0x2
08090B58: 8918         add r1,r1,r2
08090B5A: 0968         ldr r1,[r1,#0x0]
08090B5C: 98f010fa     bl 0x08128f80
08090B60: 01bc         pop {r0}
08090B62: 0047         bx r0
