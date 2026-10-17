; undefined FUN_0804a1dc(void)
; entry 0x804a1dc  size 48 bytes

0804A1DC: 021c         add r2,r0,#0x0
0804A1DE: 8c30         add r0,#0x8c
0804A1E0: 0021         mov r1,#0x0
0804A1E2: 0160         str r1,[r0,#0x0]
0804A1E4: 0430         add r0,#0x4
0804A1E6: 0160         str r1,[r0,#0x0]
0804A1E8: 0430         add r0,#0x4
0804A1EA: 0170         strb r1,[r0,#0x0]
0804A1EC: 917a         ldrb r1,[r2,#0xa]
0804A1EE: fb20         mov r0,#0xfb
0804A1F0: 0840         and r0,r1
0804A1F2: fe21         mov r1,#0xfe
0804A1F4: 0840         and r0,r1
0804A1F6: 9072         strb r0,[r2,#0xa]
0804A1F8: 0449         ldr r1,[0x0804a20c]
0804A1FA: 507a         ldrb r0,[r2,#0x9]
0804A1FC: 8000         lsl r0,r0,#0x2
0804A1FE: 4018         add r0,r0,r1
0804A200: 0421         mov r1,#0x4
0804A202: d160         str r1,[r2,#0xc]
0804A204: 0068         ldr r0,[r0,#0x0]
0804A206: 0069         ldr r0,[r0,#0x10]
0804A208: 5061         str r0,[r2,#0x14]
0804A20A: 7047         bx lr
