; undefined FUN_080badb0(void)
; entry 0x80badb0  size 20 bytes

080BADB0: 00b5         push {lr}
080BADB2: 044a         ldr r2,[0x080badc4]
080BADB4: 417b         ldrb r1,[r0,#0xd]
080BADB6: 8900         lsl r1,r1,#0x2
080BADB8: 8918         add r1,r1,r2
080BADBA: 0968         ldr r1,[r1,#0x0]
080BADBC: 6ef0e0f8     bl 0x08128f80
080BADC0: 01bc         pop {r0}
080BADC2: 0047         bx r0
