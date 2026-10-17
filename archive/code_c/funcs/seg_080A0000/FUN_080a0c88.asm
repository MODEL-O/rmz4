; undefined FUN_080a0c88(void)
; entry 0x80a0c88  size 60 bytes

080A0C88: f0b5         push {r4,r5,r6,r7,lr}
080A0C8A: 82b0         sub sp,#0x8
080A0C8C: 817a         ldrb r1,[r0,#0xa]
080A0C8E: 0909         lsr r1,r1,#0x4
080A0C90: 0122         mov r2,#0x1
080A0C92: 1140         and r1,r2
080A0C94: 426d         ldr r2,[r0,#0x54]
080A0C96: 0092         str r2,[sp,#0x0]
080A0C98: 806d         ldr r0,[r0,#0x58]
080A0C9A: 0190         str r0,[sp,#0x4]
080A0C9C: 0801         lsl r0,r1,#0x4
080A0C9E: 0143         orr r1,r0
080A0CA0: 0e06         lsl r6,r1,#0x18
080A0CA2: 0025         mov r5,#0x0
080A0CA4: 074f         ldr r7,[0x080a0cc4]
080A0CA6: 0124         mov r4,#0x1
080A0CA8: e919         add r1,r5,r7
080A0CAA: 6846         mov r0,sp
080A0CAC: 0022         mov r2,#0x0
080A0CAE: 330e         lsr r3,r6,#0x18
080A0CB0: 33f0ecff     bl 0x080d4c8c
080A0CB4: 1c35         add r5,#0x1c
080A0CB6: 013c         sub r4,#0x1
080A0CB8: 002c         cmp r4,#0x0
080A0CBA: f5da         bge 0x080a0ca8
080A0CBC: 02b0         add sp,#0x8
080A0CBE: f0bc         pop {r4,r5,r6,r7}
080A0CC0: 01bc         pop {r0}
080A0CC2: 0047         bx r0
