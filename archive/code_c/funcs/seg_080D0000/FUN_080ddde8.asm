; undefined FUN_080ddde8(void)
; entry 0x80ddde8  size 58 bytes

080DDDE8: 30b5         push {r4,r5,lr}
080DDDEA: 041c         add r4,r0,#0x0
080DDDEC: a56a         ldr r5,[r4,#0x28]
080DDDEE: 3ff7fff8     bl 0x0801cff0
080DDDF2: 606e         ldr r0,[r4,#0x64]
080DDDF4: 011c         add r1,r0,#0x0
080DDDF6: 0138         sub r0,#0x1
080DDDF8: 6066         str r0,[r4,#0x64]
080DDDFA: 0029         cmp r1,#0x0
080DDDFC: 02d0         beq 0x080dde04
080DDDFE: 287b         ldrb r0,[r5,#0xc]
080DDE00: 0128         cmp r0,#0x1
080DDE02: 0bd9         bls 0x080dde1c
080DDE04: 0749         ldr r1,[0x080dde24]
080DDE06: 607a         ldrb r0,[r4,#0x9]
080DDE08: 8000         lsl r0,r0,#0x2
080DDE0A: 4018         add r0,r0,r1
080DDE0C: 0221         mov r1,#0x2
080DDE0E: e160         str r1,[r4,#0xc]
080DDE10: 0068         ldr r0,[r0,#0x0]
080DDE12: 8068         ldr r0,[r0,#0x8]
080DDE14: 6061         str r0,[r4,#0x14]
080DDE16: 201c         add r0,r4,#0x0
080DDE18: fff762fc     bl 0x080dd6e0
080DDE1C: 30bc         pop {r4,r5}
080DDE1E: 01bc         pop {r0}
080DDE20: 0047         bx r0
