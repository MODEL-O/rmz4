; undefined FUN_080ac87c(void)
; entry 0x80ac87c  size 20 bytes

080AC87C: 00b5         push {lr}
080AC87E: 044a         ldr r2,[0x080ac890]
080AC880: 817b         ldrb r1,[r0,#0xe]
080AC882: 8900         lsl r1,r1,#0x2
080AC884: 8918         add r1,r1,r2
080AC886: 0968         ldr r1,[r1,#0x0]
080AC888: 7cf07afb     bl 0x08128f80
080AC88C: 01bc         pop {r0}
080AC88E: 0047         bx r0
