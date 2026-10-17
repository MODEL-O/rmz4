; undefined FUN_080953a8(void)
; entry 0x80953a8  size 20 bytes

080953A8: 00b5         push {lr}
080953AA: 044a         ldr r2,[0x080953bc]
080953AC: 417b         ldrb r1,[r0,#0xd]
080953AE: 8900         lsl r1,r1,#0x2
080953B0: 8918         add r1,r1,r2
080953B2: 0968         ldr r1,[r1,#0x0]
080953B4: 93f0e4fd     bl 0x08128f80
080953B8: 01bc         pop {r0}
080953BA: 0047         bx r0
