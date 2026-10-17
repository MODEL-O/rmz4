; undefined FUN_080f3fc0(void)
; entry 0x80f3fc0  size 48 bytes

080F3FC0: 10b5         push {r4,lr}
080F3FC2: 041c         add r4,r0,#0x0
080F3FC4: 28f76afe     bl 0x0801cc9c
080F3FC8: 0949         ldr r1,[0x080f3ff0]
080F3FCA: 201c         add r0,r4,#0x0
080F3FCC: 28f798ff     bl 0x0801cf00
080F3FD0: a17a         ldrb r1,[r4,#0xa]
080F3FD2: 0120         mov r0,#0x1
080F3FD4: 0022         mov r2,#0x0
080F3FD6: 0843         orr r0,r1
080F3FD8: a072         strb r0,[r4,#0xa]
080F3FDA: 201c         add r0,r4,#0x0
080F3FDC: b530         add r0,#0xb5
080F3FDE: 0270         strb r2,[r0,#0x0]
080F3FE0: 0130         add r0,#0x1
080F3FE2: 0270         strb r2,[r0,#0x0]
080F3FE4: 2534         add r4,#0x25
080F3FE6: 0e20         mov r0,#0xe
080F3FE8: 2070         strb r0,[r4,#0x0]
080F3FEA: 10bc         pop {r4}
080F3FEC: 01bc         pop {r0}
080F3FEE: 0047         bx r0
