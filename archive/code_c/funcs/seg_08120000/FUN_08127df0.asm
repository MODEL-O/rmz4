; undefined FUN_08127df0(void)
; entry 0x8127df0  size 42 bytes

08127DF0: 10b5         push {r4,lr}
08127DF2: 0a48         ldr r0,[0x08127e1c]
08127DF4: 0268         ldr r2,[r0,#0x0]
08127DF6: 1368         ldr r3,[r2,#0x0]
08127DF8: 0948         ldr r0,[0x08127e20]
08127DFA: 8342         cmp r3,r0
08127DFC: 0ad0         beq 0x08127e14
08127DFE: 0949         ldr r1,[0x08127e24]
08127E00: b624         mov r4,#0xb6
08127E02: 2402         lsl r4,r4,#0x8
08127E04: 201c         add r0,r4,#0x0
08127E06: 0880         strh r0,[r1,#0x0]
08127E08: 1079         ldrb r0,[r2,#0x4]
08127E0A: 0020         mov r0,#0x0
08127E0C: 1071         strb r0,[r2,#0x4]
08127E0E: 181c         add r0,r3,#0x0
08127E10: 0a38         sub r0,#0xa
08127E12: 1060         str r0,[r2,#0x0]
08127E14: 10bc         pop {r4}
08127E16: 01bc         pop {r0}
08127E18: 0047         bx r0
