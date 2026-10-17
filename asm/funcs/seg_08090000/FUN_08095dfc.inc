@ FUN_08095dfc  entry 0x08095dfc  size 90
.thumb
.org 0x95dfc
FUN_08095dfc:
	push {r4, lr}	@ 00095dfc 10b5
.org 0x95dfe
	adds r4, r0, #0	@ 00095dfe 041c
.org 0x95e00
	ldr r0, [pc, #84]	@ 00095e00 1548
.org 0x95e02
	ldr r0, [r0, #0]	@ 00095e02 0068
.org 0x95e04
	bl 0x5500	@ 00095e04 6ff77cfb
.org 0x95e08
	mov ip, r0	@ 00095e08 8446
.org 0x95e0a
	cmp r0, #0	@ 00095e0a 0028
.org 0x95e0c
	beq.n 0x95e4e	@ 00095e0c 1fd0
.org 0x95e0e
	mov r1, ip	@ 00095e0e 6146
.org 0x95e10
	adds r1, #37	@ 00095e10 2531
.org 0x95e12
	movs r3, #0	@ 00095e12 0023
.org 0x95e14
	movs r0, #24	@ 00095e14 1820
.org 0x95e16
	strb r0, [r1, #0]	@ 00095e16 0870
.org 0x95e18
	ldr r1, [pc, #64]	@ 00095e18 1049
.org 0x95e1a
	movs r0, #27	@ 00095e1a 1b20
.org 0x95e1c
	mov r2, ip	@ 00095e1c 6246
.org 0x95e1e
	strb r0, [r2, #9]	@ 00095e1e 5072
.org 0x95e20
	ldr r0, [r1, #108]	@ 00095e20 c86e
.org 0x95e22
	ldr r0, [r0, #0]	@ 00095e22 0068
.org 0x95e24
	str r0, [r2, #20]	@ 00095e24 5061
.org 0x95e26
	movs r2, #0	@ 00095e26 0022
.org 0x95e28
	mov r0, ip	@ 00095e28 6046
.org 0x95e2a
	strh r3, [r0, #32]	@ 00095e2a 0384
.org 0x95e2c
	adds r0, #34	@ 00095e2c 2230
.org 0x95e2e
	strb r2, [r0, #0]	@ 00095e2e 0270
.org 0x95e30
	mov r0, ip	@ 00095e30 6046
.org 0x95e32
	ldrb r1, [r0, #11]	@ 00095e32 c17a
.org 0x95e34
	movs r0, #16	@ 00095e34 1020
.org 0x95e36
	orrs r0, r1	@ 00095e36 0843
.org 0x95e38
	mov r1, ip	@ 00095e38 6146
.org 0x95e3a
	strb r0, [r1, #11]	@ 00095e3a c872
.org 0x95e3c
	ldrb r0, [r1, #28]	@ 00095e3c 087f
.org 0x95e3e
	strb r0, [r1, #29]	@ 00095e3e 4877
.org 0x95e40
	str r4, [r1, #40]	@ 00095e40 8c62
.org 0x95e42
	strb r2, [r1, #16]	@ 00095e42 0a74
.org 0x95e44
	mov r0, ip	@ 00095e44 6046
.org 0x95e46
	adds r0, #180	@ 00095e46 b430
.org 0x95e48
	strb r2, [r0, #0]	@ 00095e48 0270
.org 0x95e4a
	adds r0, #1	@ 00095e4a 0130
.org 0x95e4c
	strb r2, [r0, #0]	@ 00095e4c 0270
.org 0x95e4e
	mov r0, ip	@ 00095e4e 6046
.org 0x95e50
	pop {r4}	@ 00095e50 10bc
.org 0x95e52
	pop {r1}	@ 00095e52 02bc
.org 0x95e54
	bx r1	@ 00095e54 0847
