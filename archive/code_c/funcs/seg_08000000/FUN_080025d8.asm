; undefined FUN_080025d8(void)
; entry 0x80025d8  size 66 bytes

080025D8: 10b5         push {r4,lr}
080025DA: 0004         lsl r0,r0,#0x10
080025DC: 8021         mov r1,#0x80
080025DE: 4902         lsl r1,r1,#0x9
080025E0: 4018         add r0,r0,r1
080025E2: 030c         lsr r3,r0,#0x10
080025E4: 0021         mov r1,#0x0
080025E6: 014a         ldr r2,[0x080025ec]
080025E8: 06e0         b 0x080025f8
080025F0: 0232         add r2,#0x2
080025F2: 0131         add r1,#0x1
080025F4: 0f29         cmp r1,#0xf
080025F6: 02dc         bgt 0x080025fe
080025F8: 1088         ldrh r0,[r2,#0x0]
080025FA: 9842         cmp r0,r3
080025FC: f8d1         bne 0x080025f0
080025FE: 1029         cmp r1,#0x10
08002600: 0cd0         beq 0x0800261c
08002602: 8c00         lsl r4,r1,#0x2
08002604: 6418         add r4,r4,r1
08002606: a400         lsl r4,r4,#0x2
08002608: 0348         ldr r0,[0x08002618]
0800260A: 2418         add r4,r4,r0
0800260C: 201c         add r0,r4,#0x0
0800260E: 0830         add r0,#0x8
08002610: 00f082ff     bl 0x08003518
08002614: e07b         ldrb r0,[r4,#0xf]
08002616: 02e0         b 0x0800261e
0800261C: 0320         mov r0,#0x3
0800261E: 10bc         pop {r4}
08002620: 02bc         pop {r1}
08002622: 0847         bx r1
