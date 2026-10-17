; undefined FUN_080b847c(void)
; entry 0x80b847c  size 42 bytes

080B847C: 00b5         push {lr}
080B847E: 021c         add r2,r0,#0x0
080B8480: 5069         ldr r0,[r2,#0x14]
080B8482: 0121         mov r1,#0x1
080B8484: 0840         and r0,r1
080B8486: 0028         cmp r0,#0x0
080B8488: 0bd0         beq 0x080b84a2
080B848A: d068         ldr r0,[r2,#0xc]
080B848C: c06a         ldr r0,[r0,#0x2c]
080B848E: d26a         ldr r2,[r2,#0x2c]
080B8490: 0023         mov r3,#0x0
080B8492: 416d         ldr r1,[r0,#0x54]
080B8494: 506d         ldr r0,[r2,#0x54]
080B8496: 8142         cmp r1,r0
080B8498: 00dd         ble 0x080b849c
080B849A: 0123         mov r3,#0x1
080B849C: 101c         add r0,r2,#0x0
080B849E: bc30         add r0,#0xbc
080B84A0: 0370         strb r3,[r0,#0x0]
080B84A2: 01bc         pop {r0}
080B84A4: 0047         bx r0
