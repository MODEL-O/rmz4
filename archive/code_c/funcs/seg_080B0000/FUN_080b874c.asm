; undefined FUN_080b874c(void)
; entry 0x80b874c  size 42 bytes

080B874C: 00b5         push {lr}
080B874E: 021c         add r2,r0,#0x0
080B8750: 5069         ldr r0,[r2,#0x14]
080B8752: 0121         mov r1,#0x1
080B8754: 0840         and r0,r1
080B8756: 0028         cmp r0,#0x0
080B8758: 0bd0         beq 0x080b8772
080B875A: d068         ldr r0,[r2,#0xc]
080B875C: c06a         ldr r0,[r0,#0x2c]
080B875E: d26a         ldr r2,[r2,#0x2c]
080B8760: 0023         mov r3,#0x0
080B8762: 416d         ldr r1,[r0,#0x54]
080B8764: 506d         ldr r0,[r2,#0x54]
080B8766: 8142         cmp r1,r0
080B8768: 00dd         ble 0x080b876c
080B876A: 0123         mov r3,#0x1
080B876C: 101c         add r0,r2,#0x0
080B876E: bc30         add r0,#0xbc
080B8770: 0370         strb r3,[r0,#0x0]
080B8772: 01bc         pop {r0}
080B8774: 0047         bx r0
