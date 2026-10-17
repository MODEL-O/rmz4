; undefined FUN_080ddcd0(void)
; entry 0x80ddcd0  size 56 bytes

080DDCD0: 10b5         push {r4,lr}
080DDCD2: 041c         add r4,r0,#0x0
080DDCD4: 3ff78cf9     bl 0x0801cff0
080DDCD8: 606d         ldr r0,[r4,#0x54]
080DDCDA: e16d         ldr r1,[r4,#0x5c]
080DDCDC: 4018         add r0,r0,r1
080DDCDE: 6065         str r0,[r4,#0x54]
080DDCE0: 606e         ldr r0,[r4,#0x64]
080DDCE2: 0918         add r1,r1,r0
080DDCE4: e165         str r1,[r4,#0x5c]
080DDCE6: 0029         cmp r1,#0x0
080DDCE8: 0bd1         bne 0x080ddd02
080DDCEA: 0749         ldr r1,[0x080ddd08]
080DDCEC: 607a         ldrb r0,[r4,#0x9]
080DDCEE: 8000         lsl r0,r0,#0x2
080DDCF0: 4018         add r0,r0,r1
080DDCF2: 0221         mov r1,#0x2
080DDCF4: e160         str r1,[r4,#0xc]
080DDCF6: 0068         ldr r0,[r0,#0x0]
080DDCF8: 8068         ldr r0,[r0,#0x8]
080DDCFA: 6061         str r0,[r4,#0x14]
080DDCFC: 201c         add r0,r4,#0x0
080DDCFE: fff7effc     bl 0x080dd6e0
080DDD02: 10bc         pop {r4}
080DDD04: 01bc         pop {r0}
080DDD06: 0047         bx r0
