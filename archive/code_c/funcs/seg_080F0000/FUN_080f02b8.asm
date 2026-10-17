; undefined FUN_080f02b8(void)
; entry 0x80f02b8  size 48 bytes

080F02B8: 10b5         push {r4,lr}
080F02BA: 041c         add r4,r0,#0x0
080F02BC: a17a         ldrb r1,[r4,#0xa]
080F02BE: 0220         mov r0,#0x2
080F02C0: 0843         orr r0,r1
080F02C2: a072         strb r0,[r4,#0xa]
080F02C4: 201c         add r0,r4,#0x0
080F02C6: 2cf7e9fc     bl 0x0801cc9c
080F02CA: 0749         ldr r1,[0x080f02e8]
080F02CC: 607a         ldrb r0,[r4,#0x9]
080F02CE: 8000         lsl r0,r0,#0x2
080F02D0: 4018         add r0,r0,r1
080F02D2: 0121         mov r1,#0x1
080F02D4: e160         str r1,[r4,#0xc]
080F02D6: 0068         ldr r0,[r0,#0x0]
080F02D8: 4068         ldr r0,[r0,#0x4]
080F02DA: 6061         str r0,[r4,#0x14]
080F02DC: 201c         add r0,r4,#0x0
080F02DE: fdf773fa     bl 0x080ed7c8
080F02E2: 10bc         pop {r4}
080F02E4: 01bc         pop {r0}
080F02E6: 0047         bx r0
