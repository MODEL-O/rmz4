; undefined FUN_080e09a4(void)
; entry 0x80e09a4  size 74 bytes

080E09A4: 30b5         push {r4,r5,lr}
080E09A6: 82b0         sub sp,#0x8
080E09A8: 041c         add r4,r0,#0x0
080E09AA: 606d         ldr r0,[r4,#0x54]
080E09AC: 1049         ldr r1,[0x080e09f0]
080E09AE: 4018         add r0,r0,r1
080E09B0: 0090         str r0,[sp,#0x0]
080E09B2: a06d         ldr r0,[r4,#0x58]
080E09B4: 8021         mov r1,#0x80
080E09B6: c900         lsl r1,r1,#0x3
080E09B8: 4018         add r0,r0,r1
080E09BA: 0190         str r0,[sp,#0x4]
080E09BC: 8022         mov r2,#0x80
080E09BE: 9200         lsl r2,r2,#0x2
080E09C0: a37a         ldrb r3,[r4,#0xa]
080E09C2: 1b09         lsr r3,r3,#0x4
080E09C4: 0125         mov r5,#0x1
080E09C6: 2b40         and r3,r5
080E09C8: 0020         mov r0,#0x0
080E09CA: 6946         mov r1,sp
080E09CC: f0f7faf9     bl 0x080d0dc4
080E09D0: 0020         mov r0,#0x0
080E09D2: 6074         strb r0,[r4,#0x11]
080E09D4: 201c         add r0,r4,#0x0
080E09D6: 5430         add r0,#0x54
080E09D8: a37a         ldrb r3,[r4,#0xa]
080E09DA: 1b09         lsr r3,r3,#0x4
080E09DC: 2b40         and r3,r5
080E09DE: 0321         mov r1,#0x3
080E09E0: 0122         mov r2,#0x1
080E09E2: fff76bff     bl 0x080e08bc
080E09E6: 02b0         add sp,#0x8
080E09E8: 30bc         pop {r4,r5}
080E09EA: 01bc         pop {r0}
080E09EC: 0047         bx r0
