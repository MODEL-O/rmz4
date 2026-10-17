; undefined FUN_08061f3c(void)
; entry 0x8061f3c  size 50 bytes

08061F3C: 10b5         push {r4,lr}
08061F3E: 041c         add r4,r0,#0x0
08061F40: 6069         ldr r0,[r4,#0x14]
08061F42: 0121         mov r1,#0x1
08061F44: 0840         and r0,r1
08061F46: 0028         cmp r0,#0x0
08061F48: 0ed0         beq 0x08061f68
08061F4A: 3d20         mov r0,#0x3d
08061F4C: a4f71afd     bl 0x08006984
08061F50: e068         ldr r0,[r4,#0xc]
08061F52: c16a         ldr r1,[r0,#0x2c]
08061F54: e06a         ldr r0,[r4,#0x2c]
08061F56: 021c         add r2,r0,#0x0
08061F58: b432         add r2,#0xb4
08061F5A: 0023         mov r3,#0x0
08061F5C: 496d         ldr r1,[r1,#0x54]
08061F5E: 406d         ldr r0,[r0,#0x54]
08061F60: 8142         cmp r1,r0
08061F62: 00dd         ble 0x08061f66
08061F64: 0123         mov r3,#0x1
08061F66: 1376         strb r3,[r2,#0x18]
08061F68: 10bc         pop {r4}
08061F6A: 01bc         pop {r0}
08061F6C: 0047         bx r0
