; undefined FUN_080723d8(void)
; entry 0x80723d8  size 20 bytes

080723D8: 00b5         push {lr}
080723DA: 044a         ldr r2,[0x080723ec]
080723DC: 817b         ldrb r1,[r0,#0xe]
080723DE: 8900         lsl r1,r1,#0x2
080723E0: 8918         add r1,r1,r2
080723E2: 0968         ldr r1,[r1,#0x0]
080723E4: b6f0ccfd     bl 0x08128f80
080723E8: 01bc         pop {r0}
080723EA: 0047         bx r0
