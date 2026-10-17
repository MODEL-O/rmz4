; undefined FUN_080b5ad4(void)
; entry 0x80b5ad4  size 20 bytes

080B5AD4: 00b5         push {lr}
080B5AD6: 044a         ldr r2,[0x080b5ae8]
080B5AD8: 417b         ldrb r1,[r0,#0xd]
080B5ADA: 8900         lsl r1,r1,#0x2
080B5ADC: 8918         add r1,r1,r2
080B5ADE: 0968         ldr r1,[r1,#0x0]
080B5AE0: 73f04efa     bl 0x08128f80
080B5AE4: 01bc         pop {r0}
080B5AE6: 0047         bx r0
