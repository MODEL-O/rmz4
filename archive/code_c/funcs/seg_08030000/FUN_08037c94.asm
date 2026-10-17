; undefined FUN_08037c94(void)
; entry 0x8037c94  size 24 bytes

08037C94: 00b5         push {lr}
08037C96: 054a         ldr r2,[0x08037cac]
08037C98: 054b         ldr r3,[0x08037cb0]
08037C9A: c118         add r1,r0,r3
08037C9C: 0978         ldrb r1,[r1,#0x0]
08037C9E: 8900         lsl r1,r1,#0x2
08037CA0: 8918         add r1,r1,r2
08037CA2: 0968         ldr r1,[r1,#0x0]
08037CA4: f1f06cf9     bl 0x08128f80
08037CA8: 01bc         pop {r0}
08037CAA: 0047         bx r0
