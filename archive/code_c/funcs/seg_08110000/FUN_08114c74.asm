; undefined FUN_08114c74(void)
; entry 0x8114c74  size 20 bytes

08114C74: 00b5         push {lr}
08114C76: 044a         ldr r2,[0x08114c88]
08114C78: 8178         ldrb r1,[r0,#0x2]
08114C7A: 8900         lsl r1,r1,#0x2
08114C7C: 8918         add r1,r1,r2
08114C7E: 0968         ldr r1,[r1,#0x0]
08114C80: 14f07ef9     bl 0x08128f80
08114C84: 01bc         pop {r0}
08114C86: 0047         bx r0
