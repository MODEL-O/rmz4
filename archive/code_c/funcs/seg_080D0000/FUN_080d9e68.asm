; undefined FUN_080d9e68(void)
; entry 0x80d9e68  size 62 bytes

080D9E68: 10b5         push {r4,lr}
080D9E6A: 82b0         sub sp,#0x8
080D9E6C: 041c         add r4,r0,#0x0
080D9E6E: a17a         ldrb r1,[r4,#0xa]
080D9E70: fe20         mov r0,#0xfe
080D9E72: 0840         and r0,r1
080D9E74: a072         strb r0,[r4,#0xa]
080D9E76: 606d         ldr r0,[r4,#0x54]
080D9E78: 0090         str r0,[sp,#0x0]
080D9E7A: a06d         ldr r0,[r4,#0x58]
080D9E7C: 0190         str r0,[sp,#0x4]
080D9E7E: 0220         mov r0,#0x2
080D9E80: 6946         mov r1,sp
080D9E82: f6f701ff     bl 0x080d0c88
080D9E86: 201c         add r0,r4,#0x0
080D9E88: 00f010f8     bl 0x080d9eac
080D9E8C: 0649         ldr r1,[0x080d9ea8]
080D9E8E: 607a         ldrb r0,[r4,#0x9]
080D9E90: 8000         lsl r0,r0,#0x2
080D9E92: 4018         add r0,r0,r1
080D9E94: 0421         mov r1,#0x4
080D9E96: e160         str r1,[r4,#0xc]
080D9E98: 0068         ldr r0,[r0,#0x0]
080D9E9A: 0069         ldr r0,[r0,#0x10]
080D9E9C: 6061         str r0,[r4,#0x14]
080D9E9E: 02b0         add sp,#0x8
080D9EA0: 10bc         pop {r4}
080D9EA2: 01bc         pop {r0}
080D9EA4: 0047         bx r0
