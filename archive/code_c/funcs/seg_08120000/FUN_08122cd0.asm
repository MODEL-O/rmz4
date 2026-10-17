; undefined FUN_08122cd0(void)
; entry 0x8122cd0  size 64 bytes

08122CD0: f0b5         push {r4,r5,r6,r7,lr}
08122CD2: 0349         ldr r1,[0x08122ce0]
08122CD4: 0878         ldrb r0,[r1,#0x0]
08122CD6: 0128         cmp r0,#0x1
08122CD8: 04d0         beq 0x08122ce4
08122CDA: 887f         ldrb r0,[r1,#0x1e]
08122CDC: 03e0         b 0x08122ce6
08122CE4: 0020         mov r0,#0x0
08122CE6: 0006         lsl r0,r0,#0x18
08122CE8: 0716         asr r7,r0,#0x18
08122CEA: 012f         cmp r7,#0x1
08122CEC: 0fd1         bne 0x08122d0e
08122CEE: 0a4c         ldr r4,[0x08122d18]
08122CF0: 0a4d         ldr r5,[0x08122d1c]
08122CF2: a026         mov r6,#0xa0
08122CF4: 7600         lsl r6,r6,#0x1
08122CF6: 201c         add r0,r4,#0x0
08122CF8: 291c         add r1,r5,#0x0
08122CFA: 5022         mov r2,#0x50
08122CFC: 05f070ff     bl 0x08128be0
08122D00: a419         add r4,r4,r6
08122D02: ad19         add r5,r5,r6
08122D04: 064a         ldr r2,[0x08122d20]
08122D06: 201c         add r0,r4,#0x0
08122D08: 291c         add r1,r5,#0x0
08122D0A: 05f06bff     bl 0x08128be4
08122D0E: 381c         add r0,r7,#0x0
08122D10: f0bc         pop {r4,r5,r6,r7}
08122D12: 02bc         pop {r1}
08122D14: 0847         bx r1
