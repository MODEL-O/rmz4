; undefined FUN_080443c0(void)
; entry 0x80443c0  size 42 bytes

080443C0: 00b5         push {lr}
080443C2: 021c         add r2,r0,#0x0
080443C4: 5069         ldr r0,[r2,#0x14]
080443C6: 0121         mov r1,#0x1
080443C8: 0840         and r0,r1
080443CA: 0028         cmp r0,#0x0
080443CC: 0bd0         beq 0x080443e6
080443CE: d068         ldr r0,[r2,#0xc]
080443D0: c06a         ldr r0,[r0,#0x2c]
080443D2: d26a         ldr r2,[r2,#0x2c]
080443D4: 0023         mov r3,#0x0
080443D6: 416d         ldr r1,[r0,#0x54]
080443D8: 506d         ldr r0,[r2,#0x54]
080443DA: 8142         cmp r1,r0
080443DC: 00dd         ble 0x080443e0
080443DE: 0123         mov r3,#0x1
080443E0: 101c         add r0,r2,#0x0
080443E2: bc30         add r0,#0xbc
080443E4: 0370         strb r3,[r0,#0x0]
080443E6: 01bc         pop {r0}
080443E8: 0047         bx r0
