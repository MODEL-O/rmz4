; undefined FUN_080ba050(void)
; entry 0x80ba050  size 20 bytes

080BA050: 00b5         push {lr}
080BA052: 044a         ldr r2,[0x080ba064]
080BA054: 417b         ldrb r1,[r0,#0xd]
080BA056: 8900         lsl r1,r1,#0x2
080BA058: 8918         add r1,r1,r2
080BA05A: 0968         ldr r1,[r1,#0x0]
080BA05C: 6ef090ff     bl 0x08128f80
080BA060: 01bc         pop {r0}
080BA062: 0047         bx r0
