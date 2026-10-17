; undefined FUN_08049668(void)
; entry 0x8049668  size 42 bytes

08049668: 00b5         push {lr}
0804966A: 021c         add r2,r0,#0x0
0804966C: 5069         ldr r0,[r2,#0x14]
0804966E: 0121         mov r1,#0x1
08049670: 0840         and r0,r1
08049672: 0028         cmp r0,#0x0
08049674: 0bd0         beq 0x0804968e
08049676: d068         ldr r0,[r2,#0xc]
08049678: c06a         ldr r0,[r0,#0x2c]
0804967A: d26a         ldr r2,[r2,#0x2c]
0804967C: 0023         mov r3,#0x0
0804967E: 416d         ldr r1,[r0,#0x54]
08049680: 506d         ldr r0,[r2,#0x54]
08049682: 8142         cmp r1,r0
08049684: 00dd         ble 0x08049688
08049686: 0123         mov r3,#0x1
08049688: 101c         add r0,r2,#0x0
0804968A: bc30         add r0,#0xbc
0804968C: 0370         strb r3,[r0,#0x0]
0804968E: 01bc         pop {r0}
08049690: 0047         bx r0
