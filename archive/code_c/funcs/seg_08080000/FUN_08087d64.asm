; undefined FUN_08087d64(void)
; entry 0x8087d64  size 20 bytes

08087D64: 00b5         push {lr}
08087D66: 044a         ldr r2,[0x08087d78]
08087D68: 817b         ldrb r1,[r0,#0xe]
08087D6A: 8900         lsl r1,r1,#0x2
08087D6C: 8918         add r1,r1,r2
08087D6E: 0968         ldr r1,[r1,#0x0]
08087D70: a1f006f9     bl 0x08128f80
08087D74: 01bc         pop {r0}
08087D76: 0047         bx r0
