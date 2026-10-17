; undefined FUN_080f2230(void)
; entry 0x80f2230  size 28 bytes

080F2230: 00b5         push {lr}
080F2232: 064a         ldr r2,[0x080f224c]
080F2234: 417a         ldrb r1,[r0,#0x9]
080F2236: 8900         lsl r1,r1,#0x2
080F2238: 8918         add r1,r1,r2
080F223A: 0122         mov r2,#0x1
080F223C: c260         str r2,[r0,#0xc]
080F223E: 0968         ldr r1,[r1,#0x0]
080F2240: 4968         ldr r1,[r1,#0x4]
080F2242: 4161         str r1,[r0,#0x14]
080F2244: fff7dcff     bl 0x080f2200
080F2248: 01bc         pop {r0}
080F224A: 0047         bx r0
