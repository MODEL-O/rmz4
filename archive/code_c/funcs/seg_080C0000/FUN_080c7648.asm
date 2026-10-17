; undefined FUN_080c7648(void)
; entry 0x80c7648  size 20 bytes

080C7648: 00b5         push {lr}
080C764A: 044a         ldr r2,[0x080c765c]
080C764C: 017c         ldrb r1,[r0,#0x10]
080C764E: 8900         lsl r1,r1,#0x2
080C7650: 8918         add r1,r1,r2
080C7652: 0968         ldr r1,[r1,#0x0]
080C7654: 61f094fc     bl 0x08128f80
080C7658: 01bc         pop {r0}
080C765A: 0047         bx r0
