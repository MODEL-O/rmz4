; undefined FUN_0804e504(void)
; entry 0x804e504  size 38 bytes

0804E504: 00b5         push {lr}
0804E506: b9f7b9fb     bl 0x08007c7c
0804E50A: 0004         lsl r0,r0,#0x10
0804E50C: 020c         lsr r2,r0,#0x10
0804E50E: 0f21         mov r1,#0xf
0804E510: 1140         and r1,r2
0804E512: 0f29         cmp r1,#0xf
0804E514: 06d0         beq 0x0804e524
0804E516: 8020         mov r0,#0x80
0804E518: 0002         lsl r0,r0,#0x8
0804E51A: 1040         and r0,r2
0804E51C: 0028         cmp r0,#0x0
0804E51E: 01d1         bne 0x0804e524
0804E520: 081c         add r0,r1,#0x0
0804E522: 00e0         b 0x0804e526
0804E524: 0020         mov r0,#0x0
0804E526: 02bc         pop {r1}
0804E528: 0847         bx r1
