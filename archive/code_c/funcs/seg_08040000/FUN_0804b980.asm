; undefined FUN_0804b980(void)
; entry 0x804b980  size 34 bytes

0804B980: 00b5         push {lr}
0804B982: bcf77bf9     bl 0x08007c7c
0804B986: 0004         lsl r0,r0,#0x10
0804B988: 010c         lsr r1,r0,#0x10
0804B98A: 0f29         cmp r1,#0xf
0804B98C: 00d1         bne 0x0804b990
0804B98E: 0021         mov r1,#0x0
0804B990: 8020         mov r0,#0x80
0804B992: 0002         lsl r0,r0,#0x8
0804B994: 0840         and r0,r1
0804B996: 0028         cmp r0,#0x0
0804B998: 00d0         beq 0x0804b99c
0804B99A: 0021         mov r1,#0x0
0804B99C: 081c         add r0,r1,#0x0
0804B99E: 02bc         pop {r1}
0804B9A0: 0847         bx r1
