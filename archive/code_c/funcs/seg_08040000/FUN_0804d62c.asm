; undefined FUN_0804d62c(void)
; entry 0x804d62c  size 42 bytes

0804D62C: 00b5         push {lr}
0804D62E: 021c         add r2,r0,#0x0
0804D630: 5069         ldr r0,[r2,#0x14]
0804D632: 0121         mov r1,#0x1
0804D634: 0840         and r0,r1
0804D636: 0028         cmp r0,#0x0
0804D638: 0bd0         beq 0x0804d652
0804D63A: d068         ldr r0,[r2,#0xc]
0804D63C: c06a         ldr r0,[r0,#0x2c]
0804D63E: d26a         ldr r2,[r2,#0x2c]
0804D640: 0023         mov r3,#0x0
0804D642: 416d         ldr r1,[r0,#0x54]
0804D644: 506d         ldr r0,[r2,#0x54]
0804D646: 8142         cmp r1,r0
0804D648: 00dd         ble 0x0804d64c
0804D64A: 0123         mov r3,#0x1
0804D64C: 101c         add r0,r2,#0x0
0804D64E: bc30         add r0,#0xbc
0804D650: 0370         strb r3,[r0,#0x0]
0804D652: 01bc         pop {r0}
0804D654: 0047         bx r0
