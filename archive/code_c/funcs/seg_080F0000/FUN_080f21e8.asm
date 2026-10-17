; undefined FUN_080f21e8(void)
; entry 0x80f21e8  size 20 bytes

080F21E8: 00b5         push {lr}
080F21EA: 044a         ldr r2,[0x080f21fc]
080F21EC: 017c         ldrb r1,[r0,#0x10]
080F21EE: 8900         lsl r1,r1,#0x2
080F21F0: 8918         add r1,r1,r2
080F21F2: 0968         ldr r1,[r1,#0x0]
080F21F4: 36f0c4fe     bl 0x08128f80
080F21F8: 01bc         pop {r0}
080F21FA: 0047         bx r0
