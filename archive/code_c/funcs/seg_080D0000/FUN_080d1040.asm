; undefined FUN_080d1040(void)
; entry 0x80d1040  size 62 bytes

080D1040: 10b5         push {r4,lr}
080D1042: 041c         add r4,r0,#0x0
080D1044: 0a49         ldr r1,[0x080d1070]
080D1046: 207c         ldrb r0,[r4,#0x10]
080D1048: 8000         lsl r0,r0,#0x2
080D104A: 4018         add r0,r0,r1
080D104C: 0168         ldr r1,[r0,#0x0]
080D104E: 201c         add r0,r4,#0x0
080D1050: 57f096ff     bl 0x08128f80
080D1054: 074a         ldr r2,[0x080d1074]
080D1056: e821         mov r1,#0xe8
080D1058: 4900         lsl r1,r1,#0x1
080D105A: 5018         add r0,r2,r1
080D105C: 0188         ldrh r1,[r0,#0x0]
080D105E: 7f20         mov r0,#0x7f
080D1060: 0840         and r0,r1
080D1062: 0228         cmp r0,#0x2
080D1064: 08d1         bne 0x080d1078
080D1066: 201c         add r0,r4,#0x0
080D1068: 5430         add r0,#0x54
080D106A: 36f78bfd     bl 0x08007b84
080D106E: 06e0         b 0x080d107e
080D1078: 0349         ldr r1,[0x080d1088]
080D107A: 5018         add r0,r2,r1
080D107C: 0068         ldr r0,[r0,#0x0]
080D107E: e067         str r0,[r4,#0x7c]
080D1080: 10bc         pop {r4}
080D1082: 01bc         pop {r0}
080D1084: 0047         bx r0
