; undefined FUN_0804890c(void)
; entry 0x804890c  size 42 bytes

0804890C: 00b5         push {lr}
0804890E: 021c         add r2,r0,#0x0
08048910: 5069         ldr r0,[r2,#0x14]
08048912: 0121         mov r1,#0x1
08048914: 0840         and r0,r1
08048916: 0028         cmp r0,#0x0
08048918: 0bd0         beq 0x08048932
0804891A: d068         ldr r0,[r2,#0xc]
0804891C: c06a         ldr r0,[r0,#0x2c]
0804891E: d26a         ldr r2,[r2,#0x2c]
08048920: 0023         mov r3,#0x0
08048922: 416d         ldr r1,[r0,#0x54]
08048924: 506d         ldr r0,[r2,#0x54]
08048926: 8142         cmp r1,r0
08048928: 00dd         ble 0x0804892c
0804892A: 0123         mov r3,#0x1
0804892C: 101c         add r0,r2,#0x0
0804892E: bc30         add r0,#0xbc
08048930: 0370         strb r3,[r0,#0x0]
08048932: 01bc         pop {r0}
08048934: 0047         bx r0
