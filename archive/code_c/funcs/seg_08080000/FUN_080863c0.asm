; undefined FUN_080863c0(void)
; entry 0x80863c0  size 62 bytes

080863C0: 00b5         push {lr}
080863C2: 021c         add r2,r0,#0x0
080863C4: 0e48         ldr r0,[0x08086400]
080863C6: 0368         ldr r3,[r0,#0x0]
080863C8: 506e         ldr r0,[r2,#0x64]
080863CA: 596d         ldr r1,[r3,#0x54]
080863CC: 401a         sub r0,r0,r1
080863CE: f021         mov r1,#0xf0
080863D0: 0902         lsl r1,r1,#0x8
080863D2: 4018         add r0,r0,r1
080863D4: f021         mov r1,#0xf0
080863D6: 4902         lsl r1,r1,#0x9
080863D8: 8842         cmp r0,r1
080863DA: 0ed8         bhi 0x080863fa
080863DC: 906e         ldr r0,[r2,#0x68]
080863DE: 996d         ldr r1,[r3,#0x58]
080863E0: 401a         sub r0,r0,r1
080863E2: c421         mov r1,#0xc4
080863E4: 0902         lsl r1,r1,#0x8
080863E6: 4018         add r0,r0,r1
080863E8: a021         mov r1,#0xa0
080863EA: 4902         lsl r1,r1,#0x9
080863EC: 8842         cmp r0,r1
080863EE: 04d8         bhi 0x080863fa
080863F0: 0021         mov r1,#0x0
080863F2: 0220         mov r0,#0x2
080863F4: 5073         strb r0,[r2,#0xd]
080863F6: 9173         strb r1,[r2,#0xe]
080863F8: d173         strb r1,[r2,#0xf]
080863FA: 01bc         pop {r0}
080863FC: 0047         bx r0
