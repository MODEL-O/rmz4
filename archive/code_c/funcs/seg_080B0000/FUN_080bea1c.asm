; undefined FUN_080bea1c(void)
; entry 0x80bea1c  size 20 bytes

080BEA1C: 00b5         push {lr}
080BEA1E: 044a         ldr r2,[0x080bea30]
080BEA20: 417b         ldrb r1,[r0,#0xd]
080BEA22: 8900         lsl r1,r1,#0x2
080BEA24: 8918         add r1,r1,r2
080BEA26: 0968         ldr r1,[r1,#0x0]
080BEA28: 6af0aafa     bl 0x08128f80
080BEA2C: 01bc         pop {r0}
080BEA2E: 0047         bx r0
