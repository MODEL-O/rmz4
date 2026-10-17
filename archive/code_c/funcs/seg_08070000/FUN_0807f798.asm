; undefined FUN_0807f798(void)
; entry 0x807f798  size 50 bytes

0807F798: 10b5         push {r4,lr}
0807F79A: 041c         add r4,r0,#0x0
0807F79C: 6069         ldr r0,[r4,#0x14]
0807F79E: 0121         mov r1,#0x1
0807F7A0: 0840         and r0,r1
0807F7A2: 0028         cmp r0,#0x0
0807F7A4: 0ed0         beq 0x0807f7c4
0807F7A6: 4d20         mov r0,#0x4d
0807F7A8: 87f7ecf8     bl 0x08006984
0807F7AC: e068         ldr r0,[r4,#0xc]
0807F7AE: c16a         ldr r1,[r0,#0x2c]
0807F7B0: e06a         ldr r0,[r4,#0x2c]
0807F7B2: 021c         add r2,r0,#0x0
0807F7B4: b432         add r2,#0xb4
0807F7B6: 0023         mov r3,#0x0
0807F7B8: 496d         ldr r1,[r1,#0x54]
0807F7BA: 406d         ldr r0,[r0,#0x54]
0807F7BC: 8142         cmp r1,r0
0807F7BE: 00dd         ble 0x0807f7c2
0807F7C0: 0123         mov r3,#0x1
0807F7C2: 9377         strb r3,[r2,#0x1e]
0807F7C4: 10bc         pop {r4}
0807F7C6: 01bc         pop {r0}
0807F7C8: 0047         bx r0
