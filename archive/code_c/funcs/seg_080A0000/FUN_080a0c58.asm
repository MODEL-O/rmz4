; undefined FUN_080a0c58(void)
; entry 0x80a0c58  size 42 bytes

080A0C58: 00b5         push {lr}
080A0C5A: 82b0         sub sp,#0x8
080A0C5C: 837a         ldrb r3,[r0,#0xa]
080A0C5E: 1b09         lsr r3,r3,#0x4
080A0C60: 0121         mov r1,#0x1
080A0C62: 0b40         and r3,r1
080A0C64: 416d         ldr r1,[r0,#0x54]
080A0C66: 0091         str r1,[sp,#0x0]
080A0C68: 806d         ldr r0,[r0,#0x58]
080A0C6A: 0190         str r0,[sp,#0x4]
080A0C6C: 0549         ldr r1,[0x080a0c84]
080A0C6E: 1c31         add r1,#0x1c
080A0C70: 1801         lsl r0,r3,#0x4
080A0C72: 0343         orr r3,r0
080A0C74: 6846         mov r0,sp
080A0C76: 0022         mov r2,#0x0
080A0C78: 34f008f8     bl 0x080d4c8c
080A0C7C: 02b0         add sp,#0x8
080A0C7E: 01bc         pop {r0}
080A0C80: 0047         bx r0
