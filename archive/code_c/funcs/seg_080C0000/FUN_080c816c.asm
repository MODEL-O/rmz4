; undefined FUN_080c816c(void)
; entry 0x80c816c  size 70 bytes

080C816C: 10b5         push {r4,lr}
080C816E: 041c         add r4,r0,#0x0
080C8170: e17b         ldrb r1,[r4,#0xf]
080C8172: 0029         cmp r1,#0x0
080C8174: 06d1         bne 0x080c8184
080C8176: b530         add r0,#0xb5
080C8178: 0078         ldrb r0,[r0,#0x0]
080C817A: 8000         lsl r0,r0,#0x2
080C817C: 7c30         add r0,#0x7c
080C817E: a066         str r0,[r4,#0x68]
080C8180: 481c         add r0,r1,#0x1
080C8182: e073         strb r0,[r4,#0xf]
080C8184: 201c         add r0,r4,#0x0
080C8186: 54f733ff     bl 0x0801cff0
080C818A: a06e         ldr r0,[r4,#0x68]
080C818C: 0138         sub r0,#0x1
080C818E: a066         str r0,[r4,#0x68]
080C8190: 0028         cmp r0,#0x0
080C8192: 0bd1         bne 0x080c81ac
080C8194: 0749         ldr r1,[0x080c81b4]
080C8196: 607a         ldrb r0,[r4,#0x9]
080C8198: 8000         lsl r0,r0,#0x2
080C819A: 4018         add r0,r0,r1
080C819C: 0221         mov r1,#0x2
080C819E: e160         str r1,[r4,#0xc]
080C81A0: 0068         ldr r0,[r0,#0x0]
080C81A2: 8068         ldr r0,[r0,#0x8]
080C81A4: 6061         str r0,[r4,#0x14]
080C81A6: 201c         add r0,r4,#0x0
080C81A8: 00f07ef8     bl 0x080c82a8
080C81AC: 10bc         pop {r4}
080C81AE: 01bc         pop {r0}
080C81B0: 0047         bx r0
