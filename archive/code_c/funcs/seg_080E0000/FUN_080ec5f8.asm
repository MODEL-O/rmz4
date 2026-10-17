; undefined FUN_080ec5f8(void)
; entry 0x80ec5f8  size 58 bytes

080EC5F8: 00b5         push {lr}
080EC5FA: 021c         add r2,r0,#0x0
080EC5FC: 906a         ldr r0,[r2,#0x28]
080EC5FE: 007b         ldrb r0,[r0,#0xc]
080EC600: 0428         cmp r0,#0x4
080EC602: 0fd1         bne 0x080ec624
080EC604: 0649         ldr r1,[0x080ec620]
080EC606: 507a         ldrb r0,[r2,#0x9]
080EC608: 8000         lsl r0,r0,#0x2
080EC60A: 4018         add r0,r0,r1
080EC60C: 0221         mov r1,#0x2
080EC60E: d160         str r1,[r2,#0xc]
080EC610: 0068         ldr r0,[r0,#0x0]
080EC612: 8068         ldr r0,[r0,#0x8]
080EC614: 5061         str r0,[r2,#0x14]
080EC616: 101c         add r0,r2,#0x0
080EC618: 00f082f9     bl 0x080ec920
080EC61C: 0ae0         b 0x080ec634
080EC624: 0448         ldr r0,[0x080ec638]
080EC626: 517b         ldrb r1,[r2,#0xd]
080EC628: 8900         lsl r1,r1,#0x2
080EC62A: 0918         add r1,r1,r0
080EC62C: 0968         ldr r1,[r1,#0x0]
080EC62E: 101c         add r0,r2,#0x0
080EC630: 3cf0a6fc     bl 0x08128f80
080EC634: 01bc         pop {r0}
080EC636: 0047         bx r0
