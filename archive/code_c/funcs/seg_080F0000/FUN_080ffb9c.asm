; undefined FUN_080ffb9c(void)
; entry 0x80ffb9c  size 20 bytes

080FFB9C: 00b5         push {lr}
080FFB9E: 044a         ldr r2,[0x080ffbb0]
080FFBA0: 417b         ldrb r1,[r0,#0xd]
080FFBA2: 8900         lsl r1,r1,#0x2
080FFBA4: 8918         add r1,r1,r2
080FFBA6: 0968         ldr r1,[r1,#0x0]
080FFBA8: 29f0eaf9     bl 0x08128f80
080FFBAC: 01bc         pop {r0}
080FFBAE: 0047         bx r0
