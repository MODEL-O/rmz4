; undefined FUN_08077b44(void)
; entry 0x8077b44  size 20 bytes

08077B44: 00b5         push {lr}
08077B46: 044a         ldr r2,[0x08077b58]
08077B48: 817b         ldrb r1,[r0,#0xe]
08077B4A: 8900         lsl r1,r1,#0x2
08077B4C: 8918         add r1,r1,r2
08077B4E: 0968         ldr r1,[r1,#0x0]
08077B50: b1f016fa     bl 0x08128f80
08077B54: 01bc         pop {r0}
08077B56: 0047         bx r0
