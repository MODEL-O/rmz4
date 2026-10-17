; undefined FUN_08048cc0(void)
; entry 0x8048cc0  size 42 bytes

08048CC0: 00b5         push {lr}
08048CC2: 021c         add r2,r0,#0x0
08048CC4: 5069         ldr r0,[r2,#0x14]
08048CC6: 0121         mov r1,#0x1
08048CC8: 0840         and r0,r1
08048CCA: 0028         cmp r0,#0x0
08048CCC: 0bd0         beq 0x08048ce6
08048CCE: d068         ldr r0,[r2,#0xc]
08048CD0: c06a         ldr r0,[r0,#0x2c]
08048CD2: d26a         ldr r2,[r2,#0x2c]
08048CD4: 0023         mov r3,#0x0
08048CD6: 416d         ldr r1,[r0,#0x54]
08048CD8: 506d         ldr r0,[r2,#0x54]
08048CDA: 8142         cmp r1,r0
08048CDC: 00dd         ble 0x08048ce0
08048CDE: 0123         mov r3,#0x1
08048CE0: 101c         add r0,r2,#0x0
08048CE2: bc30         add r0,#0xbc
08048CE4: 0370         strb r3,[r0,#0x0]
08048CE6: 01bc         pop {r0}
08048CE8: 0047         bx r0
