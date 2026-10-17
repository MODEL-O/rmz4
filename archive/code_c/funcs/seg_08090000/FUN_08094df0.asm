; undefined FUN_08094df0(void)
; entry 0x8094df0  size 64 bytes

08094DF0: f0b5         push {r4,r5,r6,r7,lr}
08094DF2: 82b0         sub sp,#0x8
08094DF4: 817a         ldrb r1,[r0,#0xa]
08094DF6: 0909         lsr r1,r1,#0x4
08094DF8: 0122         mov r2,#0x1
08094DFA: 1140         and r1,r2
08094DFC: 426d         ldr r2,[r0,#0x54]
08094DFE: 0092         str r2,[sp,#0x0]
08094E00: 806d         ldr r0,[r0,#0x58]
08094E02: 0b4a         ldr r2,[0x08094e30]
08094E04: 8018         add r0,r0,r2
08094E06: 0190         str r0,[sp,#0x4]
08094E08: 0801         lsl r0,r1,#0x4
08094E0A: 0143         orr r1,r0
08094E0C: 0e06         lsl r6,r1,#0x18
08094E0E: 0025         mov r5,#0x0
08094E10: 084f         ldr r7,[0x08094e34]
08094E12: 0224         mov r4,#0x2
08094E14: e919         add r1,r5,r7
08094E16: 6846         mov r0,sp
08094E18: 0022         mov r2,#0x0
08094E1A: 330e         lsr r3,r6,#0x18
08094E1C: 3ff036ff     bl 0x080d4c8c
08094E20: 1c35         add r5,#0x1c
08094E22: 013c         sub r4,#0x1
08094E24: 002c         cmp r4,#0x0
08094E26: f5da         bge 0x08094e14
08094E28: 02b0         add sp,#0x8
08094E2A: f0bc         pop {r4,r5,r6,r7}
08094E2C: 01bc         pop {r0}
08094E2E: 0047         bx r0
