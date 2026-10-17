; undefined FUN_080c4ec4(void)
; entry 0x80c4ec4  size 20 bytes

080C4EC4: 00b5         push {lr}
080C4EC6: 044a         ldr r2,[0x080c4ed8]
080C4EC8: 417b         ldrb r1,[r0,#0xd]
080C4ECA: 8900         lsl r1,r1,#0x2
080C4ECC: 8918         add r1,r1,r2
080C4ECE: 0968         ldr r1,[r1,#0x0]
080C4ED0: 64f056f8     bl 0x08128f80
080C4ED4: 01bc         pop {r0}
080C4ED6: 0047         bx r0
