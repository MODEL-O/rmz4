; undefined FUN_080c29f0(void)
; entry 0x80c29f0  size 20 bytes

080C29F0: 00b5         push {lr}
080C29F2: 044a         ldr r2,[0x080c2a04]
080C29F4: 017c         ldrb r1,[r0,#0x10]
080C29F6: 8900         lsl r1,r1,#0x2
080C29F8: 8918         add r1,r1,r2
080C29FA: 0968         ldr r1,[r1,#0x0]
080C29FC: 66f0c0fa     bl 0x08128f80
080C2A00: 01bc         pop {r0}
080C2A02: 0047         bx r0
