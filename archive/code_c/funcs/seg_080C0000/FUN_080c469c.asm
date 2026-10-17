; undefined FUN_080c469c(void)
; entry 0x80c469c  size 20 bytes

080C469C: 00b5         push {lr}
080C469E: 044a         ldr r2,[0x080c46b0]
080C46A0: 417b         ldrb r1,[r0,#0xd]
080C46A2: 8900         lsl r1,r1,#0x2
080C46A4: 8918         add r1,r1,r2
080C46A6: 0968         ldr r1,[r1,#0x0]
080C46A8: 64f06afc     bl 0x08128f80
080C46AC: 01bc         pop {r0}
080C46AE: 0047         bx r0
