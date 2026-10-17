; undefined FUN_080591dc(void)
; entry 0x80591dc  size 20 bytes

080591DC: 00b5         push {lr}
080591DE: 044a         ldr r2,[0x080591f0]
080591E0: 417b         ldrb r1,[r0,#0xd]
080591E2: 8900         lsl r1,r1,#0x2
080591E4: 8918         add r1,r1,r2
080591E6: 0968         ldr r1,[r1,#0x0]
080591E8: cff0cafe     bl 0x08128f80
080591EC: 01bc         pop {r0}
080591EE: 0047         bx r0
