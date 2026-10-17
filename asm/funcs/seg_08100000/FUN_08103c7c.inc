@ FUN_08103c7c  entry 0x08103c7c  size 84
.thumb
.org 0x103c7c
FUN_08103c7c:
	push {r4, lr}	@ 00103c7c 10b5
.org 0x103c7e
	adds r4, r0, #0	@ 00103c7e 041c
.org 0x103c80
	ldrb r1, [r4, #10]	@ 00103c80 a17a
.org 0x103c82
	movs r0, #1	@ 00103c82 0120
.org 0x103c84
	orrs r0, r1	@ 00103c84 0843
.org 0x103c86
	strb r0, [r4, #10]	@ 00103c86 a072
.org 0x103c88
	adds r0, r4, #0	@ 00103c88 201c
.org 0x103c8a
	bl 0x1cc9c	@ 00103c8a 19f707f8
.org 0x103c8e
	ldrb r0, [r4, #10]	@ 00103c8e a07a
.org 0x103c90
	movs r1, #2	@ 00103c90 0221
.org 0x103c92
	orrs r0, r1	@ 00103c92 0843
.org 0x103c94
	strb r0, [r4, #10]	@ 00103c94 a072
.org 0x103c96
	ldrb r1, [r4, #11]	@ 00103c96 e17a
.org 0x103c98
	movs r0, #8	@ 00103c98 0820
.org 0x103c9a
	orrs r0, r1	@ 00103c9a 0843
.org 0x103c9c
	strb r0, [r4, #11]	@ 00103c9c e072
.org 0x103c9e
	ldr r0, [pc, #48]	@ 00103c9e 0c48
.org 0x103ca0
	str r0, [r4, #48]	@ 00103ca0 2063
.org 0x103ca2
	movs r0, #15	@ 00103ca2 0f20
.org 0x103ca4
	strh r0, [r4, #38]	@ 00103ca4 e084
.org 0x103ca6
	ldr r0, [r4, #84]	@ 00103ca6 606d
.org 0x103ca8
	str r0, [r4, #100]	@ 00103ca8 6066
.org 0x103caa
	ldr r1, [pc, #40]	@ 00103caa 0a49
.org 0x103cac
	adds r0, r4, #0	@ 00103cac 201c
.org 0x103cae
	bl 0x1cf00	@ 00103cae 19f727f9
.org 0x103cb2
	ldr r1, [pc, #36]	@ 00103cb2 0949
.org 0x103cb4
	ldrb r0, [r4, #9]	@ 00103cb4 607a
.org 0x103cb6
	lsls r0, r0, #2	@ 00103cb6 8000
.org 0x103cb8
	adds r0, r0, r1	@ 00103cb8 4018
.org 0x103cba
	movs r1, #1	@ 00103cba 0121
.org 0x103cbc
	str r1, [r4, #12]	@ 00103cbc e160
.org 0x103cbe
	ldr r0, [r0, #0]	@ 00103cbe 0068
.org 0x103cc0
	ldr r0, [r0, #4]	@ 00103cc0 4068
.org 0x103cc2
	str r0, [r4, #20]	@ 00103cc2 6061
.org 0x103cc4
	adds r0, r4, #0	@ 00103cc4 201c
.org 0x103cc6
	bl 0x103cdc	@ 00103cc6 00f009f8
.org 0x103cca
	pop {r4}	@ 00103cca 10bc
.org 0x103ccc
	pop {r0}	@ 00103ccc 01bc
.org 0x103cce
	bx r0	@ 00103cce 0047
