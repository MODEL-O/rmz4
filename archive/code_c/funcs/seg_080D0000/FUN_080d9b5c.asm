; undefined FUN_080d9b5c(void)
; entry 0x80d9b5c  size 60 bytes

080D9B5C: f0b5         push {r4,r5,r6,r7,lr}
080D9B5E: 82b0         sub sp,#0x8
080D9B60: 817a         ldrb r1,[r0,#0xa]
080D9B62: 0909         lsr r1,r1,#0x4
080D9B64: 0122         mov r2,#0x1
080D9B66: 1140         and r1,r2
080D9B68: 426d         ldr r2,[r0,#0x54]
080D9B6A: 0092         str r2,[sp,#0x0]
080D9B6C: 806d         ldr r0,[r0,#0x58]
080D9B6E: 0190         str r0,[sp,#0x4]
080D9B70: 0801         lsl r0,r1,#0x4
080D9B72: 0143         orr r1,r0
080D9B74: 0e06         lsl r6,r1,#0x18
080D9B76: 0025         mov r5,#0x0
080D9B78: 074f         ldr r7,[0x080d9b98]
080D9B7A: 0124         mov r4,#0x1
080D9B7C: e919         add r1,r5,r7
080D9B7E: 6846         mov r0,sp
080D9B80: 0022         mov r2,#0x0
080D9B82: 330e         lsr r3,r6,#0x18
080D9B84: fbf782f8     bl 0x080d4c8c
080D9B88: 1c35         add r5,#0x1c
080D9B8A: 013c         sub r4,#0x1
080D9B8C: 002c         cmp r4,#0x0
080D9B8E: f5da         bge 0x080d9b7c
080D9B90: 02b0         add sp,#0x8
080D9B92: f0bc         pop {r4,r5,r6,r7}
080D9B94: 01bc         pop {r0}
080D9B96: 0047         bx r0
