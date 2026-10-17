; undefined FUN_080937c0(void)
; entry 0x80937c0  size 38 bytes

080937C0: 10b5         push {r4,lr}
080937C2: 041c         add r4,r0,#0x0
080937C4: 01f0f6fa     bl 0x08094db4
080937C8: 211c         add r1,r4,#0x0
080937CA: b831         add r1,#0xb8
080937CC: 0022         mov r2,#0x0
080937CE: 0870         strb r0,[r1,#0x0]
080937D0: 0120         mov r0,#0x1
080937D2: a073         strb r0,[r4,#0xe]
080937D4: e273         strb r2,[r4,#0xf]
080937D6: 0448         ldr r0,[0x080937e8]
080937D8: 4168         ldr r1,[r0,#0x4]
080937DA: 201c         add r0,r4,#0x0
080937DC: 95f0d0fb     bl 0x08128f80
080937E0: 10bc         pop {r4}
080937E2: 01bc         pop {r0}
080937E4: 0047         bx r0
