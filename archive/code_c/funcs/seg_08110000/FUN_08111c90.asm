; undefined FUN_08111c90(void)
; entry 0x8111c90  size 20 bytes

08111C90: 00b5         push {lr}
08111C92: 044a         ldr r2,[0x08111ca4]
08111C94: 4179         ldrb r1,[r0,#0x5]
08111C96: 8900         lsl r1,r1,#0x2
08111C98: 8918         add r1,r1,r2
08111C9A: 0968         ldr r1,[r1,#0x0]
08111C9C: 17f070f9     bl 0x08128f80
08111CA0: 01bc         pop {r0}
08111CA2: 0047         bx r0
