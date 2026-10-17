; undefined FUN_08084c68(void)
; entry 0x8084c68  size 20 bytes

08084C68: 00b5         push {lr}
08084C6A: 044a         ldr r2,[0x08084c7c]
08084C6C: 417b         ldrb r1,[r0,#0xd]
08084C6E: 8900         lsl r1,r1,#0x2
08084C70: 8918         add r1,r1,r2
08084C72: 0968         ldr r1,[r1,#0x0]
08084C74: a4f084f9     bl 0x08128f80
08084C78: 01bc         pop {r0}
08084C7A: 0047         bx r0
