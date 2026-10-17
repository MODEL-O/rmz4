; undefined FUN_080ba724(void)
; entry 0x80ba724  size 20 bytes

080BA724: 00b5         push {lr}
080BA726: 044a         ldr r2,[0x080ba738]
080BA728: 417b         ldrb r1,[r0,#0xd]
080BA72A: 8900         lsl r1,r1,#0x2
080BA72C: 8918         add r1,r1,r2
080BA72E: 0968         ldr r1,[r1,#0x0]
080BA730: 6ef026fc     bl 0x08128f80
080BA734: 01bc         pop {r0}
080BA736: 0047         bx r0
