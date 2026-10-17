; undefined FUN_080878d0(void)
; entry 0x80878d0  size 72 bytes

080878D0: 10b5         push {r4,lr}
080878D2: 041c         add r4,r0,#0x0
080878D4: e07b         ldrb r0,[r4,#0xf]
080878D6: 0028         cmp r0,#0x0
080878D8: 0dd1         bne 0x080878f6
080878DA: 201c         add r0,r4,#0x0
080878DC: 7430         add r0,#0x74
080878DE: 0e49         ldr r1,[0x08087918]
080878E0: 7df750ff     bl 0x08005784
080878E4: 0d49         ldr r1,[0x0808791c]
080878E6: 201c         add r0,r4,#0x0
080878E8: 95f70afb     bl 0x0801cf00
080878EC: 0820         mov r0,#0x8
080878EE: a074         strb r0,[r4,#0x12]
080878F0: e07b         ldrb r0,[r4,#0xf]
080878F2: 0130         add r0,#0x1
080878F4: e073         strb r0,[r4,#0xf]
080878F6: 201c         add r0,r4,#0x0
080878F8: 95f77afb     bl 0x0801cff0
080878FC: a07c         ldrb r0,[r4,#0x12]
080878FE: 0138         sub r0,#0x1
08087900: a074         strb r0,[r4,#0x12]
08087902: 0006         lsl r0,r0,#0x18
08087904: 010e         lsr r1,r0,#0x18
08087906: 0029         cmp r1,#0x0
08087908: 03d1         bne 0x08087912
0808790A: 0620         mov r0,#0x6
0808790C: 6073         strb r0,[r4,#0xd]
0808790E: a173         strb r1,[r4,#0xe]
08087910: e173         strb r1,[r4,#0xf]
08087912: 10bc         pop {r4}
08087914: 01bc         pop {r0}
08087916: 0047         bx r0
