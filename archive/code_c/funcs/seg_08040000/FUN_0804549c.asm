; undefined FUN_0804549c(void)
; entry 0x804549c  size 42 bytes

0804549C: 00b5         push {lr}
0804549E: 021c         add r2,r0,#0x0
080454A0: 5069         ldr r0,[r2,#0x14]
080454A2: 0121         mov r1,#0x1
080454A4: 0840         and r0,r1
080454A6: 0028         cmp r0,#0x0
080454A8: 0bd0         beq 0x080454c2
080454AA: d068         ldr r0,[r2,#0xc]
080454AC: c06a         ldr r0,[r0,#0x2c]
080454AE: d26a         ldr r2,[r2,#0x2c]
080454B0: 0023         mov r3,#0x0
080454B2: 416d         ldr r1,[r0,#0x54]
080454B4: 506d         ldr r0,[r2,#0x54]
080454B6: 8142         cmp r1,r0
080454B8: 00dd         ble 0x080454bc
080454BA: 0123         mov r3,#0x1
080454BC: 101c         add r0,r2,#0x0
080454BE: bc30         add r0,#0xbc
080454C0: 0370         strb r3,[r0,#0x0]
080454C2: 01bc         pop {r0}
080454C4: 0047         bx r0
