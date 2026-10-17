; undefined FUN_080e0298(void)
; entry 0x80e0298  size 70 bytes

080E0298: 10b5         push {r4,lr}
080E029A: 041c         add r4,r0,#0x0
080E029C: 3cf7a8fe     bl 0x0801cff0
080E02A0: 606d         ldr r0,[r4,#0x54]
080E02A2: e16d         ldr r1,[r4,#0x5c]
080E02A4: 4018         add r0,r0,r1
080E02A6: 6065         str r0,[r4,#0x54]
080E02A8: a06d         ldr r0,[r4,#0x58]
080E02AA: 216e         ldr r1,[r4,#0x60]
080E02AC: 4018         add r0,r0,r1
080E02AE: a065         str r0,[r4,#0x58]
080E02B0: a06e         ldr r0,[r4,#0x68]
080E02B2: 091a         sub r1,r1,r0
080E02B4: 2166         str r1,[r4,#0x60]
080E02B6: 201c         add r0,r4,#0x0
080E02B8: 7330         add r0,#0x73
080E02BA: 0078         ldrb r0,[r0,#0x0]
080E02BC: 0328         cmp r0,#0x3
080E02BE: 0bd1         bne 0x080e02d8
080E02C0: 0749         ldr r1,[0x080e02e0]
080E02C2: 607a         ldrb r0,[r4,#0x9]
080E02C4: 8000         lsl r0,r0,#0x2
080E02C6: 4018         add r0,r0,r1
080E02C8: 0221         mov r1,#0x2
080E02CA: e160         str r1,[r4,#0xc]
080E02CC: 0068         ldr r0,[r0,#0x0]
080E02CE: 8068         ldr r0,[r0,#0x8]
080E02D0: 6061         str r0,[r4,#0x14]
080E02D2: 201c         add r0,r4,#0x0
080E02D4: fff754fe     bl 0x080dff80
080E02D8: 10bc         pop {r4}
080E02DA: 01bc         pop {r0}
080E02DC: 0047         bx r0
