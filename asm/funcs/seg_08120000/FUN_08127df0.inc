@ FUN_08127df0  entry 0x08127df0  size 42
.thumb
.org 0x127df0
FUN_08127df0:
	push {r4, lr}	@ 00127df0 10b5
.org 0x127df2
	ldr r0, [pc, #40]	@ 00127df2 0a48
.org 0x127df4
	ldr r2, [r0, #0]	@ 00127df4 0268
.org 0x127df6
	ldr r3, [r2, #0]	@ 00127df6 1368
.org 0x127df8
	ldr r0, [pc, #36]	@ 00127df8 0948
.org 0x127dfa
	cmp r3, r0	@ 00127dfa 8342
.org 0x127dfc
	beq.n 0x127e14	@ 00127dfc 0ad0
.org 0x127dfe
	ldr r1, [pc, #36]	@ 00127dfe 0949
.org 0x127e00
	movs r4, #182	@ 00127e00 b624
.org 0x127e02
	lsls r4, r4, #8	@ 00127e02 2402
.org 0x127e04
	adds r0, r4, #0	@ 00127e04 201c
.org 0x127e06
	strh r0, [r1, #0]	@ 00127e06 0880
.org 0x127e08
	ldrb r0, [r2, #4]	@ 00127e08 1079
.org 0x127e0a
	movs r0, #0	@ 00127e0a 0020
.org 0x127e0c
	strb r0, [r2, #4]	@ 00127e0c 1071
.org 0x127e0e
	adds r0, r3, #0	@ 00127e0e 181c
.org 0x127e10
	subs r0, #10	@ 00127e10 0a38
.org 0x127e12
	str r0, [r2, #0]	@ 00127e12 1060
.org 0x127e14
	pop {r4}	@ 00127e14 10bc
.org 0x127e16
	pop {r0}	@ 00127e16 01bc
.org 0x127e18
	bx r0	@ 00127e18 0047
