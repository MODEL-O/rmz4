; undefined FUN_080a1c7c(void)
; entry 0x80a1c7c  size 42 bytes

080A1C7C: 00b5         push {lr}
080A1C7E: 82b0         sub sp,#0x8
080A1C80: 837a         ldrb r3,[r0,#0xa]
080A1C82: 1b09         lsr r3,r3,#0x4
080A1C84: 0121         mov r1,#0x1
080A1C86: 0b40         and r3,r1
080A1C88: 416d         ldr r1,[r0,#0x54]
080A1C8A: 0091         str r1,[sp,#0x0]
080A1C8C: 806d         ldr r0,[r0,#0x58]
080A1C8E: 0190         str r0,[sp,#0x4]
080A1C90: 0549         ldr r1,[0x080a1ca8]
080A1C92: 1c31         add r1,#0x1c
080A1C94: 1801         lsl r0,r3,#0x4
080A1C96: 0343         orr r3,r0
080A1C98: 6846         mov r0,sp
080A1C9A: 0022         mov r2,#0x0
080A1C9C: 32f0f6ff     bl 0x080d4c8c
080A1CA0: 02b0         add sp,#0x8
080A1CA2: 01bc         pop {r0}
080A1CA4: 0047         bx r0
