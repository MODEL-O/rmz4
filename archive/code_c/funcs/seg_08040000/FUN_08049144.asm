; undefined FUN_08049144(void)
; entry 0x8049144  size 42 bytes

08049144: 00b5         push {lr}
08049146: 021c         add r2,r0,#0x0
08049148: 5069         ldr r0,[r2,#0x14]
0804914A: 0121         mov r1,#0x1
0804914C: 0840         and r0,r1
0804914E: 0028         cmp r0,#0x0
08049150: 0bd0         beq 0x0804916a
08049152: d068         ldr r0,[r2,#0xc]
08049154: c06a         ldr r0,[r0,#0x2c]
08049156: d26a         ldr r2,[r2,#0x2c]
08049158: 0023         mov r3,#0x0
0804915A: 416d         ldr r1,[r0,#0x54]
0804915C: 506d         ldr r0,[r2,#0x54]
0804915E: 8142         cmp r1,r0
08049160: 00dd         ble 0x08049164
08049162: 0123         mov r3,#0x1
08049164: 101c         add r0,r2,#0x0
08049166: bc30         add r0,#0xbc
08049168: 0370         strb r3,[r0,#0x0]
0804916A: 01bc         pop {r0}
0804916C: 0047         bx r0
