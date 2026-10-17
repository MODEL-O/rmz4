; undefined FUN_0804e8cc(void)
; entry 0x804e8cc  size 38 bytes

0804E8CC: 00b5         push {lr}
0804E8CE: b9f7d5f9     bl 0x08007c7c
0804E8D2: 0004         lsl r0,r0,#0x10
0804E8D4: 020c         lsr r2,r0,#0x10
0804E8D6: 0f21         mov r1,#0xf
0804E8D8: 1140         and r1,r2
0804E8DA: 0f29         cmp r1,#0xf
0804E8DC: 06d0         beq 0x0804e8ec
0804E8DE: 8020         mov r0,#0x80
0804E8E0: 0002         lsl r0,r0,#0x8
0804E8E2: 1040         and r0,r2
0804E8E4: 0028         cmp r0,#0x0
0804E8E6: 01d1         bne 0x0804e8ec
0804E8E8: 081c         add r0,r1,#0x0
0804E8EA: 00e0         b 0x0804e8ee
0804E8EC: 0020         mov r0,#0x0
0804E8EE: 02bc         pop {r1}
0804E8F0: 0847         bx r1
