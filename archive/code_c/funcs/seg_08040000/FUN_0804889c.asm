; undefined FUN_0804889c(void)
; entry 0x804889c  size 66 bytes

0804889C: 10b5         push {r4,lr}
0804889E: 041c         add r4,r0,#0x0
080488A0: 211c         add r1,r4,#0x0
080488A2: 5431         add r1,#0x54
080488A4: 0320         mov r0,#0x3
080488A6: 88f0eff9     bl 0x080d0c88
080488AA: 201c         add r0,r4,#0x0
080488AC: 8c30         add r0,#0x8c
080488AE: 0021         mov r1,#0x0
080488B0: 0160         str r1,[r0,#0x0]
080488B2: 0430         add r0,#0x4
080488B4: 0160         str r1,[r0,#0x0]
080488B6: 0430         add r0,#0x4
080488B8: 0170         strb r1,[r0,#0x0]
080488BA: a17a         ldrb r1,[r4,#0xa]
080488BC: fb20         mov r0,#0xfb
080488BE: 0840         and r0,r1
080488C0: fe21         mov r1,#0xfe
080488C2: 0840         and r0,r1
080488C4: a072         strb r0,[r4,#0xa]
080488C6: 0649         ldr r1,[0x080488e0]
080488C8: 607a         ldrb r0,[r4,#0x9]
080488CA: 8000         lsl r0,r0,#0x2
080488CC: 4018         add r0,r0,r1
080488CE: 0421         mov r1,#0x4
080488D0: e160         str r1,[r4,#0xc]
080488D2: 0068         ldr r0,[r0,#0x0]
080488D4: 0069         ldr r0,[r0,#0x10]
080488D6: 6061         str r0,[r4,#0x14]
080488D8: 10bc         pop {r4}
080488DA: 01bc         pop {r0}
080488DC: 0047         bx r0
