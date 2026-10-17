; undefined FUN_080e65e4(void)
; entry 0x80e65e4  size 68 bytes

080E65E4: 10b5         push {r4,lr}
080E65E6: 82b0         sub sp,#0x8
080E65E8: 041c         add r4,r0,#0x0
080E65EA: 606d         ldr r0,[r4,#0x54]
080E65EC: 0090         str r0,[sp,#0x0]
080E65EE: a06d         ldr r0,[r4,#0x58]
080E65F0: 0d49         ldr r1,[0x080e6628]
080E65F2: 4018         add r0,r0,r1
080E65F4: 0190         str r0,[sp,#0x4]
080E65F6: 0120         mov r0,#0x1
080E65F8: 6946         mov r1,sp
080E65FA: eaf745fb     bl 0x080d0c88
080E65FE: 2a20         mov r0,#0x2a
080E6600: 1cf786fa     bl 0x08002b10
080E6604: 0123         mov r3,#0x1
080E6606: 6374         strb r3,[r4,#0x11]
080E6608: 201c         add r0,r4,#0x0
080E660A: 5430         add r0,#0x54
080E660C: 8121         mov r1,#0x81
080E660E: 4900         lsl r1,r1,#0x1
080E6610: a27a         ldrb r2,[r4,#0xa]
080E6612: 1209         lsr r2,r2,#0x4
080E6614: 1a40         and r2,r3
080E6616: fff72bfe     bl 0x080e6270
080E661A: 201c         add r0,r4,#0x0
080E661C: fff730ff     bl 0x080e6480
080E6620: 02b0         add sp,#0x8
080E6622: 10bc         pop {r4}
080E6624: 01bc         pop {r0}
080E6626: 0047         bx r0
