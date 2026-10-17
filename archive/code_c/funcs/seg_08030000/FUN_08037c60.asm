; undefined FUN_08037c60(void)
; entry 0x8037c60  size 48 bytes

08037C60: 00b5         push {lr}
08037C62: 021c         add r2,r0,#0x0
08037C64: a220         mov r0,#0xa2
08037C66: 4000         lsl r0,r0,#0x1
08037C68: 1118         add r1,r2,r0
08037C6A: 0878         ldrb r0,[r1,#0x0]
08037C6C: 0128         cmp r0,#0x1
08037C6E: 05d9         bls 0x08037c7c
08037C70: 8020         mov r0,#0x80
08037C72: 4000         lsl r0,r0,#0x1
08037C74: 1118         add r1,r2,r0
08037C76: 0020         mov r0,#0x0
08037C78: 0870         strb r0,[r1,#0x0]
08037C7A: 07e0         b 0x08037c8c
08037C7C: 0448         ldr r0,[0x08037c90]
08037C7E: 0978         ldrb r1,[r1,#0x0]
08037C80: 8900         lsl r1,r1,#0x2
08037C82: 0918         add r1,r1,r0
08037C84: 0968         ldr r1,[r1,#0x0]
08037C86: 101c         add r0,r2,#0x0
08037C88: f1f07af9     bl 0x08128f80
08037C8C: 01bc         pop {r0}
08037C8E: 0047         bx r0
