; undefined FUN_080af1d4(void)
; entry 0x80af1d4  size 42 bytes

080AF1D4: 00b5         push {lr}
080AF1D6: 021c         add r2,r0,#0x0
080AF1D8: 5069         ldr r0,[r2,#0x14]
080AF1DA: 0121         mov r1,#0x1
080AF1DC: 0840         and r0,r1
080AF1DE: 0028         cmp r0,#0x0
080AF1E0: 0bd0         beq 0x080af1fa
080AF1E2: d068         ldr r0,[r2,#0xc]
080AF1E4: c06a         ldr r0,[r0,#0x2c]
080AF1E6: d26a         ldr r2,[r2,#0x2c]
080AF1E8: 0023         mov r3,#0x0
080AF1EA: 416d         ldr r1,[r0,#0x54]
080AF1EC: 506d         ldr r0,[r2,#0x54]
080AF1EE: 8142         cmp r1,r0
080AF1F0: 00dd         ble 0x080af1f4
080AF1F2: 0123         mov r3,#0x1
080AF1F4: 101c         add r0,r2,#0x0
080AF1F6: bc30         add r0,#0xbc
080AF1F8: 0370         strb r3,[r0,#0x0]
080AF1FA: 01bc         pop {r0}
080AF1FC: 0047         bx r0
