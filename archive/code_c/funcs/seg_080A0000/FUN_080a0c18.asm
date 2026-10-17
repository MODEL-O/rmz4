; undefined FUN_080a0c18(void)
; entry 0x80a0c18  size 60 bytes

080A0C18: f0b5         push {r4,r5,r6,r7,lr}
080A0C1A: 82b0         sub sp,#0x8
080A0C1C: 817a         ldrb r1,[r0,#0xa]
080A0C1E: 0909         lsr r1,r1,#0x4
080A0C20: 0122         mov r2,#0x1
080A0C22: 1140         and r1,r2
080A0C24: 426d         ldr r2,[r0,#0x54]
080A0C26: 0092         str r2,[sp,#0x0]
080A0C28: 806d         ldr r0,[r0,#0x58]
080A0C2A: 0190         str r0,[sp,#0x4]
080A0C2C: 0801         lsl r0,r1,#0x4
080A0C2E: 0143         orr r1,r0
080A0C30: 0e06         lsl r6,r1,#0x18
080A0C32: 0025         mov r5,#0x0
080A0C34: 074f         ldr r7,[0x080a0c54]
080A0C36: 0124         mov r4,#0x1
080A0C38: e919         add r1,r5,r7
080A0C3A: 6846         mov r0,sp
080A0C3C: 0022         mov r2,#0x0
080A0C3E: 330e         lsr r3,r6,#0x18
080A0C40: 34f024f8     bl 0x080d4c8c
080A0C44: 1c35         add r5,#0x1c
080A0C46: 013c         sub r4,#0x1
080A0C48: 002c         cmp r4,#0x0
080A0C4A: f5da         bge 0x080a0c38
080A0C4C: 02b0         add sp,#0x8
080A0C4E: f0bc         pop {r4,r5,r6,r7}
080A0C50: 01bc         pop {r0}
080A0C52: 0047         bx r0
