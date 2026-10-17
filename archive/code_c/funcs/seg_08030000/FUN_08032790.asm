; undefined FUN_08032790(void)
; entry 0x8032790  size 44 bytes

08032790: 10b5         push {r4,lr}
08032792: 041c         add r4,r0,#0x0
08032794: b820         mov r0,#0xb8
08032796: 4000         lsl r0,r0,#0x1
08032798: 2118         add r1,r4,r0
0803279A: 0120         mov r0,#0x1
0803279C: 0870         strb r0,[r1,#0x0]
0803279E: 0b20         mov r0,#0xb
080327A0: d0f7b6f9     bl 0x08002b10
080327A4: 606d         ldr r0,[r4,#0x54]
080327A6: a16d         ldr r1,[r4,#0x58]
080327A8: 044a         ldr r2,[0x080327bc]
080327AA: 8918         add r1,r1,r2
080327AC: 0122         mov r2,#0x1
080327AE: 9ff0fbf8     bl 0x080d19a8
080327B2: 0320         mov r0,#0x3
080327B4: e073         strb r0,[r4,#0xf]
080327B6: 10bc         pop {r4}
080327B8: 01bc         pop {r0}
080327BA: 0047         bx r0
