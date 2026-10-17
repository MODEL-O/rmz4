; undefined FUN_08044e90(void)
; entry 0x8044e90  size 42 bytes

08044E90: 00b5         push {lr}
08044E92: 021c         add r2,r0,#0x0
08044E94: 5069         ldr r0,[r2,#0x14]
08044E96: 0121         mov r1,#0x1
08044E98: 0840         and r0,r1
08044E9A: 0028         cmp r0,#0x0
08044E9C: 0bd0         beq 0x08044eb6
08044E9E: d068         ldr r0,[r2,#0xc]
08044EA0: c06a         ldr r0,[r0,#0x2c]
08044EA2: d26a         ldr r2,[r2,#0x2c]
08044EA4: 0023         mov r3,#0x0
08044EA6: 416d         ldr r1,[r0,#0x54]
08044EA8: 506d         ldr r0,[r2,#0x54]
08044EAA: 8142         cmp r1,r0
08044EAC: 00dd         ble 0x08044eb0
08044EAE: 0123         mov r3,#0x1
08044EB0: 101c         add r0,r2,#0x0
08044EB2: bc30         add r0,#0xbc
08044EB4: 0370         strb r3,[r0,#0x0]
08044EB6: 01bc         pop {r0}
08044EB8: 0047         bx r0
