; undefined FUN_080870d8(void)
; entry 0x80870d8  size 26 bytes

080870D8: 00b5         push {lr}
080870DA: 021c         add r2,r0,#0x0
080870DC: b930         add r0,#0xb9
080870DE: 0078         ldrb r0,[r0,#0x0]
080870E0: 0028         cmp r0,#0x0
080870E2: 04d0         beq 0x080870ee
080870E4: 0021         mov r1,#0x0
080870E6: 0720         mov r0,#0x7
080870E8: 5073         strb r0,[r2,#0xd]
080870EA: 9173         strb r1,[r2,#0xe]
080870EC: d173         strb r1,[r2,#0xf]
080870EE: 01bc         pop {r0}
080870F0: 0047         bx r0
