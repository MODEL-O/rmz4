; undefined FUN_080937a8(void)
; entry 0x80937a8  size 20 bytes

080937A8: 00b5         push {lr}
080937AA: 044a         ldr r2,[0x080937bc]
080937AC: 817b         ldrb r1,[r0,#0xe]
080937AE: 8900         lsl r1,r1,#0x2
080937B0: 8918         add r1,r1,r2
080937B2: 0968         ldr r1,[r1,#0x0]
080937B4: 95f0e4fb     bl 0x08128f80
080937B8: 01bc         pop {r0}
080937BA: 0047         bx r0
