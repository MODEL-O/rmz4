; undefined FUN_080a4874(void)
; entry 0x80a4874  size 20 bytes

080A4874: 00b5         push {lr}
080A4876: 044a         ldr r2,[0x080a4888]
080A4878: 017c         ldrb r1,[r0,#0x10]
080A487A: 8900         lsl r1,r1,#0x2
080A487C: 8918         add r1,r1,r2
080A487E: 0968         ldr r1,[r1,#0x0]
080A4880: 84f07efb     bl 0x08128f80
080A4884: 01bc         pop {r0}
080A4886: 0047         bx r0
