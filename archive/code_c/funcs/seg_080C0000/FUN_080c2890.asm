; undefined FUN_080c2890(void)
; entry 0x80c2890  size 20 bytes

080C2890: 00b5         push {lr}
080C2892: 044a         ldr r2,[0x080c28a4]
080C2894: 017c         ldrb r1,[r0,#0x10]
080C2896: 8900         lsl r1,r1,#0x2
080C2898: 8918         add r1,r1,r2
080C289A: 0968         ldr r1,[r1,#0x0]
080C289C: 66f070fb     bl 0x08128f80
080C28A0: 01bc         pop {r0}
080C28A2: 0047         bx r0
