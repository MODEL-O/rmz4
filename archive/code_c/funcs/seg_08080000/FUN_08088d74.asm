; undefined FUN_08088d74(void)
; entry 0x8088d74  size 60 bytes

08088D74: f0b5         push {r4,r5,r6,r7,lr}
08088D76: 82b0         sub sp,#0x8
08088D78: 817a         ldrb r1,[r0,#0xa]
08088D7A: 0909         lsr r1,r1,#0x4
08088D7C: 0122         mov r2,#0x1
08088D7E: 1140         and r1,r2
08088D80: 426d         ldr r2,[r0,#0x54]
08088D82: 0092         str r2,[sp,#0x0]
08088D84: 806d         ldr r0,[r0,#0x58]
08088D86: 0190         str r0,[sp,#0x4]
08088D88: 0801         lsl r0,r1,#0x4
08088D8A: 0143         orr r1,r0
08088D8C: 0e06         lsl r6,r1,#0x18
08088D8E: 0025         mov r5,#0x0
08088D90: 074f         ldr r7,[0x08088db0]
08088D92: 0324         mov r4,#0x3
08088D94: e919         add r1,r5,r7
08088D96: 6846         mov r0,sp
08088D98: 0022         mov r2,#0x0
08088D9A: 330e         lsr r3,r6,#0x18
08088D9C: 4bf076ff     bl 0x080d4c8c
08088DA0: 1c35         add r5,#0x1c
08088DA2: 013c         sub r4,#0x1
08088DA4: 002c         cmp r4,#0x0
08088DA6: f5da         bge 0x08088d94
08088DA8: 02b0         add sp,#0x8
08088DAA: f0bc         pop {r4,r5,r6,r7}
08088DAC: 01bc         pop {r0}
08088DAE: 0047         bx r0
