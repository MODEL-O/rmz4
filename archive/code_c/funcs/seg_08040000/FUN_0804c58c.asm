; undefined FUN_0804c58c(void)
; entry 0x804c58c  size 42 bytes

0804C58C: 00b5         push {lr}
0804C58E: 021c         add r2,r0,#0x0
0804C590: 5069         ldr r0,[r2,#0x14]
0804C592: 0121         mov r1,#0x1
0804C594: 0840         and r0,r1
0804C596: 0028         cmp r0,#0x0
0804C598: 0bd0         beq 0x0804c5b2
0804C59A: d068         ldr r0,[r2,#0xc]
0804C59C: c06a         ldr r0,[r0,#0x2c]
0804C59E: d26a         ldr r2,[r2,#0x2c]
0804C5A0: 0023         mov r3,#0x0
0804C5A2: 416d         ldr r1,[r0,#0x54]
0804C5A4: 506d         ldr r0,[r2,#0x54]
0804C5A6: 8142         cmp r1,r0
0804C5A8: 00dd         ble 0x0804c5ac
0804C5AA: 0123         mov r3,#0x1
0804C5AC: 101c         add r0,r2,#0x0
0804C5AE: bc30         add r0,#0xbc
0804C5B0: 0370         strb r3,[r0,#0x0]
0804C5B2: 01bc         pop {r0}
0804C5B4: 0047         bx r0
