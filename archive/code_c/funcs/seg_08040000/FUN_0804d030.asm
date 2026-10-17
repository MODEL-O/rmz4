; undefined FUN_0804d030(void)
; entry 0x804d030  size 42 bytes

0804D030: 00b5         push {lr}
0804D032: 021c         add r2,r0,#0x0
0804D034: 5069         ldr r0,[r2,#0x14]
0804D036: 0121         mov r1,#0x1
0804D038: 0840         and r0,r1
0804D03A: 0028         cmp r0,#0x0
0804D03C: 0bd0         beq 0x0804d056
0804D03E: d068         ldr r0,[r2,#0xc]
0804D040: c06a         ldr r0,[r0,#0x2c]
0804D042: d26a         ldr r2,[r2,#0x2c]
0804D044: 0023         mov r3,#0x0
0804D046: 416d         ldr r1,[r0,#0x54]
0804D048: 506d         ldr r0,[r2,#0x54]
0804D04A: 8142         cmp r1,r0
0804D04C: 00dd         ble 0x0804d050
0804D04E: 0123         mov r3,#0x1
0804D050: 101c         add r0,r2,#0x0
0804D052: bc30         add r0,#0xbc
0804D054: 0370         strb r3,[r0,#0x0]
0804D056: 01bc         pop {r0}
0804D058: 0047         bx r0
