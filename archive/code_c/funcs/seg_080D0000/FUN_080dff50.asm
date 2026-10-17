; undefined FUN_080dff50(void)
; entry 0x80dff50  size 20 bytes

080DFF50: 00b5         push {lr}
080DFF52: 044a         ldr r2,[0x080dff64]
080DFF54: 017c         ldrb r1,[r0,#0x10]
080DFF56: 8900         lsl r1,r1,#0x2
080DFF58: 8918         add r1,r1,r2
080DFF5A: 0968         ldr r1,[r1,#0x0]
080DFF5C: 49f010f8     bl 0x08128f80
080DFF60: 01bc         pop {r0}
080DFF62: 0047         bx r0
