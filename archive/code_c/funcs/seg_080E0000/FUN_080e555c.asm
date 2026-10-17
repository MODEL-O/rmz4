; undefined FUN_080e555c(void)
; entry 0x80e555c  size 56 bytes

080E555C: 10b5         push {r4,lr}
080E555E: 82b0         sub sp,#0x8
080E5560: 041c         add r4,r0,#0x0
080E5562: 606d         ldr r0,[r4,#0x54]
080E5564: 0090         str r0,[sp,#0x0]
080E5566: a06d         ldr r0,[r4,#0x58]
080E5568: 0a49         ldr r1,[0x080e5594]
080E556A: 4018         add r0,r0,r1
080E556C: 0190         str r0,[sp,#0x4]
080E556E: 0120         mov r0,#0x1
080E5570: 6946         mov r1,sp
080E5572: ebf789fb     bl 0x080d0c88
080E5576: 0220         mov r0,#0x2
080E5578: 6074         strb r0,[r4,#0x11]
080E557A: 201c         add r0,r4,#0x0
080E557C: 5430         add r0,#0x54
080E557E: 0121         mov r1,#0x1
080E5580: 0422         mov r2,#0x4
080E5582: fff797fe     bl 0x080e52b4
080E5586: 201c         add r0,r4,#0x0
080E5588: fff762ff     bl 0x080e5450
080E558C: 02b0         add sp,#0x8
080E558E: 10bc         pop {r4}
080E5590: 01bc         pop {r0}
080E5592: 0047         bx r0
