; undefined FUN_080c2bd0(void)
; entry 0x80c2bd0  size 20 bytes

080C2BD0: 00b5         push {lr}
080C2BD2: 044a         ldr r2,[0x080c2be4]
080C2BD4: 417b         ldrb r1,[r0,#0xd]
080C2BD6: 8900         lsl r1,r1,#0x2
080C2BD8: 8918         add r1,r1,r2
080C2BDA: 0968         ldr r1,[r1,#0x0]
080C2BDC: 66f0d0f9     bl 0x08128f80
080C2BE0: 01bc         pop {r0}
080C2BE2: 0047         bx r0
