; undefined FUN_08088cd8(void)
; entry 0x8088cd8  size 60 bytes

08088CD8: f0b5         push {r4,r5,r6,r7,lr}
08088CDA: 82b0         sub sp,#0x8
08088CDC: 817a         ldrb r1,[r0,#0xa]
08088CDE: 0909         lsr r1,r1,#0x4
08088CE0: 0122         mov r2,#0x1
08088CE2: 1140         and r1,r2
08088CE4: 426d         ldr r2,[r0,#0x54]
08088CE6: 0092         str r2,[sp,#0x0]
08088CE8: 806d         ldr r0,[r0,#0x58]
08088CEA: 0190         str r0,[sp,#0x4]
08088CEC: 0801         lsl r0,r1,#0x4
08088CEE: 0143         orr r1,r0
08088CF0: 0e06         lsl r6,r1,#0x18
08088CF2: 0025         mov r5,#0x0
08088CF4: 074f         ldr r7,[0x08088d14]
08088CF6: 0524         mov r4,#0x5
08088CF8: e919         add r1,r5,r7
08088CFA: 6846         mov r0,sp
08088CFC: 0022         mov r2,#0x0
08088CFE: 330e         lsr r3,r6,#0x18
08088D00: 4bf0c4ff     bl 0x080d4c8c
08088D04: 1c35         add r5,#0x1c
08088D06: 013c         sub r4,#0x1
08088D08: 002c         cmp r4,#0x0
08088D0A: f5da         bge 0x08088cf8
08088D0C: 02b0         add sp,#0x8
08088D0E: f0bc         pop {r4,r5,r6,r7}
08088D10: 01bc         pop {r0}
08088D12: 0047         bx r0
