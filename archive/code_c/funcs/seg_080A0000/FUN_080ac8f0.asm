; undefined FUN_080ac8f0(void)
; entry 0x80ac8f0  size 54 bytes

080AC8F0: 10b5         push {r4,lr}
080AC8F2: 021c         add r2,r0,#0x0
080AC8F4: 946a         ldr r4,[r2,#0x28]
080AC8F6: d37b         ldrb r3,[r2,#0xf]
080AC8F8: 002b         cmp r3,#0x0
080AC8FA: 09d1         bne 0x080ac910
080AC8FC: 917a         ldrb r1,[r2,#0xa]
080AC8FE: fe20         mov r0,#0xfe
080AC900: 0840         and r0,r1
080AC902: 9072         strb r0,[r2,#0xa]
080AC904: 101c         add r0,r2,#0x0
080AC906: b830         add r0,#0xb8
080AC908: 0370         strb r3,[r0,#0x0]
080AC90A: d07b         ldrb r0,[r2,#0xf]
080AC90C: 0130         add r0,#0x1
080AC90E: d073         strb r0,[r2,#0xf]
080AC910: 606d         ldr r0,[r4,#0x54]
080AC912: a16d         ldr r1,[r4,#0x58]
080AC914: 5065         str r0,[r2,#0x54]
080AC916: 9165         str r1,[r2,#0x58]
080AC918: 111c         add r1,r2,#0x0
080AC91A: b431         add r1,#0xb4
080AC91C: 0120         mov r0,#0x1
080AC91E: 0870         strb r0,[r1,#0x0]
080AC920: 10bc         pop {r4}
080AC922: 01bc         pop {r0}
080AC924: 0047         bx r0
