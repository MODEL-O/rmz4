; undefined FUN_080b8880(void)
; entry 0x80b8880  size 20 bytes

080B8880: 00b5         push {lr}
080B8882: 044a         ldr r2,[0x080b8894]
080B8884: 417b         ldrb r1,[r0,#0xd]
080B8886: 8900         lsl r1,r1,#0x2
080B8888: 8918         add r1,r1,r2
080B888A: 0968         ldr r1,[r1,#0x0]
080B888C: 70f078fb     bl 0x08128f80
080B8890: 01bc         pop {r0}
080B8892: 0047         bx r0
