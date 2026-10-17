; undefined FUN_0804bbb8(void)
; entry 0x804bbb8  size 48 bytes

0804BBB8: 021c         add r2,r0,#0x0
0804BBBA: 8c30         add r0,#0x8c
0804BBBC: 0021         mov r1,#0x0
0804BBBE: 0160         str r1,[r0,#0x0]
0804BBC0: 0430         add r0,#0x4
0804BBC2: 0160         str r1,[r0,#0x0]
0804BBC4: 0430         add r0,#0x4
0804BBC6: 0170         strb r1,[r0,#0x0]
0804BBC8: 917a         ldrb r1,[r2,#0xa]
0804BBCA: fb20         mov r0,#0xfb
0804BBCC: 0840         and r0,r1
0804BBCE: fe21         mov r1,#0xfe
0804BBD0: 0840         and r0,r1
0804BBD2: 9072         strb r0,[r2,#0xa]
0804BBD4: 0449         ldr r1,[0x0804bbe8]
0804BBD6: 507a         ldrb r0,[r2,#0x9]
0804BBD8: 8000         lsl r0,r0,#0x2
0804BBDA: 4018         add r0,r0,r1
0804BBDC: 0421         mov r1,#0x4
0804BBDE: d160         str r1,[r2,#0xc]
0804BBE0: 0068         ldr r0,[r0,#0x0]
0804BBE2: 0069         ldr r0,[r0,#0x10]
0804BBE4: 5061         str r0,[r2,#0x14]
0804BBE6: 7047         bx lr
