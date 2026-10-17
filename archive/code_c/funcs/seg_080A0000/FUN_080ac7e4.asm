; undefined FUN_080ac7e4(void)
; entry 0x80ac7e4  size 54 bytes

080AC7E4: 10b5         push {r4,lr}
080AC7E6: 021c         add r2,r0,#0x0
080AC7E8: 946a         ldr r4,[r2,#0x28]
080AC7EA: d37b         ldrb r3,[r2,#0xf]
080AC7EC: 002b         cmp r3,#0x0
080AC7EE: 09d1         bne 0x080ac804
080AC7F0: 917a         ldrb r1,[r2,#0xa]
080AC7F2: fe20         mov r0,#0xfe
080AC7F4: 0840         and r0,r1
080AC7F6: 9072         strb r0,[r2,#0xa]
080AC7F8: 101c         add r0,r2,#0x0
080AC7FA: b830         add r0,#0xb8
080AC7FC: 0370         strb r3,[r0,#0x0]
080AC7FE: d07b         ldrb r0,[r2,#0xf]
080AC800: 0130         add r0,#0x1
080AC802: d073         strb r0,[r2,#0xf]
080AC804: 606d         ldr r0,[r4,#0x54]
080AC806: a16d         ldr r1,[r4,#0x58]
080AC808: 5065         str r0,[r2,#0x54]
080AC80A: 9165         str r1,[r2,#0x58]
080AC80C: 111c         add r1,r2,#0x0
080AC80E: b431         add r1,#0xb4
080AC810: 0120         mov r0,#0x1
080AC812: 0870         strb r0,[r1,#0x0]
080AC814: 10bc         pop {r4}
080AC816: 01bc         pop {r0}
080AC818: 0047         bx r0
