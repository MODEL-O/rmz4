; undefined FUN_0804b384(void)
; entry 0x804b384  size 66 bytes

0804B384: 10b5         push {r4,lr}
0804B386: 041c         add r4,r0,#0x0
0804B388: 211c         add r1,r4,#0x0
0804B38A: 5431         add r1,#0x54
0804B38C: 0320         mov r0,#0x3
0804B38E: 85f07bfc     bl 0x080d0c88
0804B392: 201c         add r0,r4,#0x0
0804B394: 8c30         add r0,#0x8c
0804B396: 0021         mov r1,#0x0
0804B398: 0160         str r1,[r0,#0x0]
0804B39A: 0430         add r0,#0x4
0804B39C: 0160         str r1,[r0,#0x0]
0804B39E: 0430         add r0,#0x4
0804B3A0: 0170         strb r1,[r0,#0x0]
0804B3A2: a17a         ldrb r1,[r4,#0xa]
0804B3A4: fb20         mov r0,#0xfb
0804B3A6: 0840         and r0,r1
0804B3A8: fe21         mov r1,#0xfe
0804B3AA: 0840         and r0,r1
0804B3AC: a072         strb r0,[r4,#0xa]
0804B3AE: 0649         ldr r1,[0x0804b3c8]
0804B3B0: 607a         ldrb r0,[r4,#0x9]
0804B3B2: 8000         lsl r0,r0,#0x2
0804B3B4: 4018         add r0,r0,r1
0804B3B6: 0421         mov r1,#0x4
0804B3B8: e160         str r1,[r4,#0xc]
0804B3BA: 0068         ldr r0,[r0,#0x0]
0804B3BC: 0069         ldr r0,[r0,#0x10]
0804B3BE: 6061         str r0,[r4,#0x14]
0804B3C0: 10bc         pop {r4}
0804B3C2: 01bc         pop {r0}
0804B3C4: 0047         bx r0
