; undefined FUN_080a1c3c(void)
; entry 0x80a1c3c  size 60 bytes

080A1C3C: f0b5         push {r4,r5,r6,r7,lr}
080A1C3E: 82b0         sub sp,#0x8
080A1C40: 817a         ldrb r1,[r0,#0xa]
080A1C42: 0909         lsr r1,r1,#0x4
080A1C44: 0122         mov r2,#0x1
080A1C46: 1140         and r1,r2
080A1C48: 426d         ldr r2,[r0,#0x54]
080A1C4A: 0092         str r2,[sp,#0x0]
080A1C4C: 806d         ldr r0,[r0,#0x58]
080A1C4E: 0190         str r0,[sp,#0x4]
080A1C50: 0801         lsl r0,r1,#0x4
080A1C52: 0143         orr r1,r0
080A1C54: 0e06         lsl r6,r1,#0x18
080A1C56: 0025         mov r5,#0x0
080A1C58: 074f         ldr r7,[0x080a1c78]
080A1C5A: 0124         mov r4,#0x1
080A1C5C: e919         add r1,r5,r7
080A1C5E: 6846         mov r0,sp
080A1C60: 0022         mov r2,#0x0
080A1C62: 330e         lsr r3,r6,#0x18
080A1C64: 33f012f8     bl 0x080d4c8c
080A1C68: 1c35         add r5,#0x1c
080A1C6A: 013c         sub r4,#0x1
080A1C6C: 002c         cmp r4,#0x0
080A1C6E: f5da         bge 0x080a1c5c
080A1C70: 02b0         add sp,#0x8
080A1C72: f0bc         pop {r4,r5,r6,r7}
080A1C74: 01bc         pop {r0}
080A1C76: 0047         bx r0
