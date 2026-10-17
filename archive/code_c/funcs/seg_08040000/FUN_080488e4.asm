; undefined FUN_080488e4(void)
; entry 0x80488e4  size 40 bytes

080488E4: 00b5         push {lr}
080488E6: bff7c9f9     bl 0x08007c7c
080488EA: 0004         lsl r0,r0,#0x10
080488EC: 000c         lsr r0,r0,#0x10
080488EE: 011c         add r1,r0,#0x0
080488F0: 0f20         mov r0,#0xf
080488F2: 0840         and r0,r1
080488F4: 0f28         cmp r0,#0xf
080488F6: 06d0         beq 0x08048906
080488F8: 8020         mov r0,#0x80
080488FA: 0002         lsl r0,r0,#0x8
080488FC: 0840         and r0,r1
080488FE: 0028         cmp r0,#0x0
08048900: 01d1         bne 0x08048906
08048902: 081c         add r0,r1,#0x0
08048904: 00e0         b 0x08048908
08048906: 0020         mov r0,#0x0
08048908: 02bc         pop {r1}
0804890A: 0847         bx r1
