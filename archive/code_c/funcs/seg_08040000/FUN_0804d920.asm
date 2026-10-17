; undefined FUN_0804d920(void)
; entry 0x804d920  size 42 bytes

0804D920: 00b5         push {lr}
0804D922: 021c         add r2,r0,#0x0
0804D924: 5069         ldr r0,[r2,#0x14]
0804D926: 0121         mov r1,#0x1
0804D928: 0840         and r0,r1
0804D92A: 0028         cmp r0,#0x0
0804D92C: 0bd0         beq 0x0804d946
0804D92E: d068         ldr r0,[r2,#0xc]
0804D930: c06a         ldr r0,[r0,#0x2c]
0804D932: d26a         ldr r2,[r2,#0x2c]
0804D934: 0023         mov r3,#0x0
0804D936: 416d         ldr r1,[r0,#0x54]
0804D938: 506d         ldr r0,[r2,#0x54]
0804D93A: 8142         cmp r1,r0
0804D93C: 00dd         ble 0x0804d940
0804D93E: 0123         mov r3,#0x1
0804D940: 101c         add r0,r2,#0x0
0804D942: bc30         add r0,#0xbc
0804D944: 0370         strb r3,[r0,#0x0]
0804D946: 01bc         pop {r0}
0804D948: 0047         bx r0
