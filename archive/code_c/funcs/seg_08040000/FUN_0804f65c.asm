; undefined FUN_0804f65c(void)
; entry 0x804f65c  size 42 bytes

0804F65C: 00b5         push {lr}
0804F65E: 021c         add r2,r0,#0x0
0804F660: 5069         ldr r0,[r2,#0x14]
0804F662: 0121         mov r1,#0x1
0804F664: 0840         and r0,r1
0804F666: 0028         cmp r0,#0x0
0804F668: 0bd0         beq 0x0804f682
0804F66A: d068         ldr r0,[r2,#0xc]
0804F66C: c06a         ldr r0,[r0,#0x2c]
0804F66E: d26a         ldr r2,[r2,#0x2c]
0804F670: 0023         mov r3,#0x0
0804F672: 416d         ldr r1,[r0,#0x54]
0804F674: 506d         ldr r0,[r2,#0x54]
0804F676: 8142         cmp r1,r0
0804F678: 00dd         ble 0x0804f67c
0804F67A: 0123         mov r3,#0x1
0804F67C: 101c         add r0,r2,#0x0
0804F67E: bc30         add r0,#0xbc
0804F680: 0370         strb r3,[r0,#0x0]
0804F682: 01bc         pop {r0}
0804F684: 0047         bx r0
