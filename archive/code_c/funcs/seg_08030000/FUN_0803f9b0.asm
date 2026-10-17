; undefined FUN_0803f9b0(void)
; entry 0x803f9b0  size 42 bytes

0803F9B0: 00b5         push {lr}
0803F9B2: 021c         add r2,r0,#0x0
0803F9B4: 5069         ldr r0,[r2,#0x14]
0803F9B6: 0121         mov r1,#0x1
0803F9B8: 0840         and r0,r1
0803F9BA: 0028         cmp r0,#0x0
0803F9BC: 0bd0         beq 0x0803f9d6
0803F9BE: d068         ldr r0,[r2,#0xc]
0803F9C0: c06a         ldr r0,[r0,#0x2c]
0803F9C2: d26a         ldr r2,[r2,#0x2c]
0803F9C4: 0023         mov r3,#0x0
0803F9C6: 416d         ldr r1,[r0,#0x54]
0803F9C8: 506d         ldr r0,[r2,#0x54]
0803F9CA: 8142         cmp r1,r0
0803F9CC: 00dd         ble 0x0803f9d0
0803F9CE: 0123         mov r3,#0x1
0803F9D0: 101c         add r0,r2,#0x0
0803F9D2: bc30         add r0,#0xbc
0803F9D4: 0370         strb r3,[r0,#0x0]
0803F9D6: 01bc         pop {r0}
0803F9D8: 0047         bx r0
