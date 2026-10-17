; undefined FUN_080bb1f0(void)
; entry 0x80bb1f0  size 20 bytes

080BB1F0: 00b5         push {lr}
080BB1F2: 044a         ldr r2,[0x080bb204]
080BB1F4: 417b         ldrb r1,[r0,#0xd]
080BB1F6: 8900         lsl r1,r1,#0x2
080BB1F8: 8918         add r1,r1,r2
080BB1FA: 0968         ldr r1,[r1,#0x0]
080BB1FC: 6df0c0fe     bl 0x08128f80
080BB200: 01bc         pop {r0}
080BB202: 0047         bx r0
