; undefined FUN_08042fcc(void)
; entry 0x8042fcc  size 42 bytes

08042FCC: 00b5         push {lr}
08042FCE: 021c         add r2,r0,#0x0
08042FD0: 5069         ldr r0,[r2,#0x14]
08042FD2: 0121         mov r1,#0x1
08042FD4: 0840         and r0,r1
08042FD6: 0028         cmp r0,#0x0
08042FD8: 0bd0         beq 0x08042ff2
08042FDA: d068         ldr r0,[r2,#0xc]
08042FDC: c06a         ldr r0,[r0,#0x2c]
08042FDE: d26a         ldr r2,[r2,#0x2c]
08042FE0: 0023         mov r3,#0x0
08042FE2: 416d         ldr r1,[r0,#0x54]
08042FE4: 506d         ldr r0,[r2,#0x54]
08042FE6: 8142         cmp r1,r0
08042FE8: 00dd         ble 0x08042fec
08042FEA: 0123         mov r3,#0x1
08042FEC: 101c         add r0,r2,#0x0
08042FEE: bc30         add r0,#0xbc
08042FF0: 0370         strb r3,[r0,#0x0]
08042FF2: 01bc         pop {r0}
08042FF4: 0047         bx r0
