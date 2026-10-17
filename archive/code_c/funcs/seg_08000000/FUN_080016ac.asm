; undefined FUN_080016ac(void)
; entry 0x80016ac  size 62 bytes

080016AC: 30b5         push {r4,r5,lr}
080016AE: 0d1c         add r5,r1,#0x0
080016B0: 141c         add r4,r2,#0x0
080016B2: 0006         lsl r0,r0,#0x18
080016B4: 000e         lsr r0,r0,#0x18
080016B6: 021c         add r2,r0,#0x0
080016B8: 052a         cmp r2,#0x5
080016BA: 13d8         bhi 0x080016e4
080016BC: 084b         ldr r3,[0x080016e0]
080016BE: 1978         ldrb r1,[r3,#0x0]
080016C0: 0029         cmp r1,#0x0
080016C2: 0fd1         bne 0x080016e4
080016C4: a620         mov r0,#0xa6
080016C6: 8000         lsl r0,r0,#0x2
080016C8: 8442         cmp r4,r0
080016CA: 0bd8         bhi 0x080016e4
080016CC: 5a70         strb r2,[r3,#0x1]
080016CE: 9d60         str r5,[r3,#0x8]
080016D0: 5c61         str r4,[r3,#0x14]
080016D2: 9983         strh r1,[r3,#0x1c]
080016D4: 0220         mov r0,#0x2
080016D6: 1870         strb r0,[r3,#0x0]
080016D8: 0120         mov r0,#0x1
080016DA: 5880         strh r0,[r3,#0x2]
080016DC: 0020         mov r0,#0x0
080016DE: 03e0         b 0x080016e8
080016E4: 0120         mov r0,#0x1
080016E6: 4042         rsb r0,r0
080016E8: 30bc         pop {r4,r5}
080016EA: 02bc         pop {r1}
080016EC: 0847         bx r1
