; undefined FUN_080877a4(void)
; entry 0x80877a4  size 64 bytes

080877A4: 10b5         push {r4,lr}
080877A6: 041c         add r4,r0,#0x0
080877A8: e07b         ldrb r0,[r4,#0xf]
080877AA: 0028         cmp r0,#0x0
080877AC: 0bd1         bne 0x080877c6
080877AE: 201c         add r0,r4,#0x0
080877B0: 7430         add r0,#0x74
080877B2: 0c49         ldr r1,[0x080877e4]
080877B4: 7df7e6ff     bl 0x08005784
080877B8: 0b49         ldr r1,[0x080877e8]
080877BA: 201c         add r0,r4,#0x0
080877BC: 95f7a0fb     bl 0x0801cf00
080877C0: e07b         ldrb r0,[r4,#0xf]
080877C2: 0130         add r0,#0x1
080877C4: e073         strb r0,[r4,#0xf]
080877C6: 201c         add r0,r4,#0x0
080877C8: 95f712fc     bl 0x0801cff0
080877CC: 201c         add r0,r4,#0x0
080877CE: 7330         add r0,#0x73
080877D0: 0078         ldrb r0,[r0,#0x0]
080877D2: 0328         cmp r0,#0x3
080877D4: 03d1         bne 0x080877de
080877D6: 0021         mov r1,#0x0
080877D8: 0220         mov r0,#0x2
080877DA: a073         strb r0,[r4,#0xe]
080877DC: e173         strb r1,[r4,#0xf]
080877DE: 10bc         pop {r4}
080877E0: 01bc         pop {r0}
080877E2: 0047         bx r0
