; undefined FUN_080c84ec(void)
; entry 0x80c84ec  size 20 bytes

080C84EC: 00b5         push {lr}
080C84EE: 044a         ldr r2,[0x080c8500]
080C84F0: 417b         ldrb r1,[r0,#0xd]
080C84F2: 8900         lsl r1,r1,#0x2
080C84F4: 8918         add r1,r1,r2
080C84F6: 0968         ldr r1,[r1,#0x0]
080C84F8: 60f042fd     bl 0x08128f80
080C84FC: 01bc         pop {r0}
080C84FE: 0047         bx r0
