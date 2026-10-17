; undefined FUN_080f536c(void)
; entry 0x80f536c  size 50 bytes

080F536C: 10b5         push {r4,lr}
080F536E: 041c         add r4,r0,#0x0
080F5370: 0b49         ldr r1,[0x080f53a0]
080F5372: 207c         ldrb r0,[r4,#0x10]
080F5374: 8000         lsl r0,r0,#0x2
080F5376: 4018         add r0,r0,r1
080F5378: 0168         ldr r1,[r0,#0x0]
080F537A: 201c         add r0,r4,#0x0
080F537C: 33f000fe     bl 0x08128f80
080F5380: 0849         ldr r1,[0x080f53a4]
080F5382: 607a         ldrb r0,[r4,#0x9]
080F5384: 8000         lsl r0,r0,#0x2
080F5386: 4018         add r0,r0,r1
080F5388: 0121         mov r1,#0x1
080F538A: e160         str r1,[r4,#0xc]
080F538C: 0068         ldr r0,[r0,#0x0]
080F538E: 4068         ldr r0,[r0,#0x4]
080F5390: 6061         str r0,[r4,#0x14]
080F5392: 201c         add r0,r4,#0x0
080F5394: 00f008f8     bl 0x080f53a8
080F5398: 10bc         pop {r4}
080F539A: 01bc         pop {r0}
080F539C: 0047         bx r0
