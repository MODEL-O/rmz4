; undefined FUN_080502d0(void)
; entry 0x80502d0  size 42 bytes

080502D0: 00b5         push {lr}
080502D2: 021c         add r2,r0,#0x0
080502D4: 5069         ldr r0,[r2,#0x14]
080502D6: 0121         mov r1,#0x1
080502D8: 0840         and r0,r1
080502DA: 0028         cmp r0,#0x0
080502DC: 0bd0         beq 0x080502f6
080502DE: d068         ldr r0,[r2,#0xc]
080502E0: c06a         ldr r0,[r0,#0x2c]
080502E2: d26a         ldr r2,[r2,#0x2c]
080502E4: 0023         mov r3,#0x0
080502E6: 416d         ldr r1,[r0,#0x54]
080502E8: 506d         ldr r0,[r2,#0x54]
080502EA: 8142         cmp r1,r0
080502EC: 00dd         ble 0x080502f0
080502EE: 0123         mov r3,#0x1
080502F0: 101c         add r0,r2,#0x0
080502F2: bc30         add r0,#0xbc
080502F4: 0370         strb r3,[r0,#0x0]
080502F6: 01bc         pop {r0}
080502F8: 0047         bx r0
