; undefined FUN_0803d93c(void)
; entry 0x803d93c  size 68 bytes

0803D93C: 10b5         push {r4,lr}
0803D93E: 031c         add r3,r0,#0x0
0803D940: 5c7a         ldrb r4,[r3,#0x9]
0803D942: 032c         cmp r4,#0x3
0803D944: 19d1         bne 0x0803d97a
0803D946: 997a         ldrb r1,[r3,#0xa]
0803D948: fe20         mov r0,#0xfe
0803D94A: 0840         and r0,r1
0803D94C: 0022         mov r2,#0x0
0803D94E: fd21         mov r1,#0xfd
0803D950: 0840         and r0,r1
0803D952: 9872         strb r0,[r3,#0xa]
0803D954: 181c         add r0,r3,#0x0
0803D956: 8c30         add r0,#0x8c
0803D958: 0260         str r2,[r0,#0x0]
0803D95A: 0430         add r0,#0x4
0803D95C: 0260         str r2,[r0,#0x0]
0803D95E: 0430         add r0,#0x4
0803D960: 0270         strb r2,[r0,#0x0]
0803D962: 997a         ldrb r1,[r3,#0xa]
0803D964: fb20         mov r0,#0xfb
0803D966: 0840         and r0,r1
0803D968: 9872         strb r0,[r3,#0xa]
0803D96A: 0549         ldr r1,[0x0803d980]
0803D96C: 587a         ldrb r0,[r3,#0x9]
0803D96E: 8000         lsl r0,r0,#0x2
0803D970: 4018         add r0,r0,r1
0803D972: dc60         str r4,[r3,#0xc]
0803D974: 0068         ldr r0,[r0,#0x0]
0803D976: c068         ldr r0,[r0,#0xc]
0803D978: 5861         str r0,[r3,#0x14]
0803D97A: 10bc         pop {r4}
0803D97C: 01bc         pop {r0}
0803D97E: 0047         bx r0
