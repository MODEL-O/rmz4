; undefined FUN_080e3090(void)
; entry 0x80e3090  size 48 bytes

080E3090: 10b5         push {r4,lr}
080E3092: 041c         add r4,r0,#0x0
080E3094: 39f7acff     bl 0x0801cff0
080E3098: 201c         add r0,r4,#0x0
080E309A: 7330         add r0,#0x73
080E309C: 0078         ldrb r0,[r0,#0x0]
080E309E: 0328         cmp r0,#0x3
080E30A0: 0bd1         bne 0x080e30ba
080E30A2: 0749         ldr r1,[0x080e30c0]
080E30A4: 607a         ldrb r0,[r4,#0x9]
080E30A6: 8000         lsl r0,r0,#0x2
080E30A8: 4018         add r0,r0,r1
080E30AA: 0221         mov r1,#0x2
080E30AC: e160         str r1,[r4,#0xc]
080E30AE: 0068         ldr r0,[r0,#0x0]
080E30B0: 8068         ldr r0,[r0,#0x8]
080E30B2: 6061         str r0,[r4,#0x14]
080E30B4: 201c         add r0,r4,#0x0
080E30B6: fff72dff     bl 0x080e2f14
080E30BA: 10bc         pop {r4}
080E30BC: 01bc         pop {r0}
080E30BE: 0047         bx r0
