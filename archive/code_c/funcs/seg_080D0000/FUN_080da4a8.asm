; undefined FUN_080da4a8(void)
; entry 0x80da4a8  size 48 bytes

080DA4A8: 10b5         push {r4,lr}
080DA4AA: 041c         add r4,r0,#0x0
080DA4AC: a17a         ldrb r1,[r4,#0xa]
080DA4AE: 0220         mov r0,#0x2
080DA4B0: 0843         orr r0,r1
080DA4B2: a072         strb r0,[r4,#0xa]
080DA4B4: 201c         add r0,r4,#0x0
080DA4B6: 11f059fd     bl 0x080ebf6c
080DA4BA: 0749         ldr r1,[0x080da4d8]
080DA4BC: 607a         ldrb r0,[r4,#0x9]
080DA4BE: 8000         lsl r0,r0,#0x2
080DA4C0: 4018         add r0,r0,r1
080DA4C2: 0121         mov r1,#0x1
080DA4C4: e160         str r1,[r4,#0xc]
080DA4C6: 0068         ldr r0,[r0,#0x0]
080DA4C8: 4068         ldr r0,[r0,#0x4]
080DA4CA: 6061         str r0,[r4,#0x14]
080DA4CC: 201c         add r0,r4,#0x0
080DA4CE: 00f005f8     bl 0x080da4dc
080DA4D2: 10bc         pop {r4}
080DA4D4: 01bc         pop {r0}
080DA4D6: 0047         bx r0
