; undefined FUN_080476b0(void)
; entry 0x80476b0  size 42 bytes

080476B0: 00b5         push {lr}
080476B2: 021c         add r2,r0,#0x0
080476B4: 5069         ldr r0,[r2,#0x14]
080476B6: 0121         mov r1,#0x1
080476B8: 0840         and r0,r1
080476BA: 0028         cmp r0,#0x0
080476BC: 0bd0         beq 0x080476d6
080476BE: d068         ldr r0,[r2,#0xc]
080476C0: c06a         ldr r0,[r0,#0x2c]
080476C2: d26a         ldr r2,[r2,#0x2c]
080476C4: 0023         mov r3,#0x0
080476C6: 416d         ldr r1,[r0,#0x54]
080476C8: 506d         ldr r0,[r2,#0x54]
080476CA: 8142         cmp r1,r0
080476CC: 00dd         ble 0x080476d0
080476CE: 0123         mov r3,#0x1
080476D0: 101c         add r0,r2,#0x0
080476D2: bc30         add r0,#0xbc
080476D4: 0370         strb r3,[r0,#0x0]
080476D6: 01bc         pop {r0}
080476D8: 0047         bx r0
