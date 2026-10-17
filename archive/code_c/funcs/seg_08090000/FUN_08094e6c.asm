; undefined FUN_08094e6c(void)
; entry 0x8094e6c  size 64 bytes

08094E6C: f0b5         push {r4,r5,r6,r7,lr}
08094E6E: 82b0         sub sp,#0x8
08094E70: 817a         ldrb r1,[r0,#0xa]
08094E72: 0909         lsr r1,r1,#0x4
08094E74: 0122         mov r2,#0x1
08094E76: 1140         and r1,r2
08094E78: 426d         ldr r2,[r0,#0x54]
08094E7A: 0092         str r2,[sp,#0x0]
08094E7C: 806d         ldr r0,[r0,#0x58]
08094E7E: 0b4a         ldr r2,[0x08094eac]
08094E80: 8018         add r0,r0,r2
08094E82: 0190         str r0,[sp,#0x4]
08094E84: 0801         lsl r0,r1,#0x4
08094E86: 0143         orr r1,r0
08094E88: 0e06         lsl r6,r1,#0x18
08094E8A: 0025         mov r5,#0x0
08094E8C: 084f         ldr r7,[0x08094eb0]
08094E8E: 0124         mov r4,#0x1
08094E90: e919         add r1,r5,r7
08094E92: 6846         mov r0,sp
08094E94: 0022         mov r2,#0x0
08094E96: 330e         lsr r3,r6,#0x18
08094E98: 3ff0f8fe     bl 0x080d4c8c
08094E9C: 1c35         add r5,#0x1c
08094E9E: 013c         sub r4,#0x1
08094EA0: 002c         cmp r4,#0x0
08094EA2: f5da         bge 0x08094e90
08094EA4: 02b0         add sp,#0x8
08094EA6: f0bc         pop {r4,r5,r6,r7}
08094EA8: 01bc         pop {r0}
08094EAA: 0047         bx r0
