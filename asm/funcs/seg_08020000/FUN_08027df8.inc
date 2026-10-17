@ FUN_08027df8  entry 0x08027df8  size 80
.thumb
.org 0x27df8
FUN_08027df8:
	push {r4, lr}	@ 00027df8 10b5
.org 0x27dfa
	adds r3, r0, #0	@ 00027dfa 031c
.org 0x27dfc
	ldr r2, [r3, #12]	@ 00027dfc da68
.org 0x27dfe
	ldrb r0, [r2, #1]	@ 00027dfe 5078
.org 0x27e00
	cmp r0, #0	@ 00027e00 0028
.org 0x27e02
	bne.n 0x27e18	@ 00027e02 09d1
.org 0x27e04
	ldrh r0, [r3, #4]	@ 00027e04 9888
.org 0x27e06
	cmp r0, #0	@ 00027e06 0028
.org 0x27e08
	beq.n 0x27e14	@ 00027e08 04d0
.org 0x27e0a
	adds r0, r2, #0	@ 00027e0a 101c
.org 0x27e0c
	subs r0, #8	@ 00027e0c 0838
.org 0x27e0e
	str r0, [r3, #12]	@ 00027e0e d860
.org 0x27e10
	movs r0, #1	@ 00027e10 0120
.org 0x27e12
	b.n 0x27e42	@ 00027e12 16e0
.org 0x27e14
	movs r0, #0	@ 00027e14 0020
.org 0x27e16
	b.n 0x27e42	@ 00027e16 14e0
.org 0x27e18
	adds r1, r3, #0	@ 00027e18 191c
.org 0x27e1a
	adds r1, #212	@ 00027e1a d431
.org 0x27e1c
	ldr r4, [r2, #4]	@ 00027e1c 5468
.org 0x27e1e
	str r4, [r1, #0]	@ 00027e1e 0c60
.org 0x27e20
	ldrb r0, [r2, #1]	@ 00027e20 5078
.org 0x27e22
	cmp r0, #2	@ 00027e22 0228
.org 0x27e24
	bne.n 0x27e30	@ 00027e24 04d1
.org 0x27e26
	adds r0, r3, #0	@ 00027e26 181c
.org 0x27e28
	adds r0, #208	@ 00027e28 d030
.org 0x27e2a
	ldr r0, [r0, #0]	@ 00027e2a 0068
.org 0x27e2c
	subs r0, r4, r0	@ 00027e2c 201a
.org 0x27e2e
	str r0, [r1, #0]	@ 00027e2e 0860
.org 0x27e30
	ldr r0, [r1, #0]	@ 00027e30 0868
.org 0x27e32
	cmp r0, #0	@ 00027e32 0028
.org 0x27e34
	ble.n 0x27e3e	@ 00027e34 03dd
.org 0x27e36
	subs r0, #1	@ 00027e36 0138
.org 0x27e38
	str r0, [r1, #0]	@ 00027e38 0860
.org 0x27e3a
	movs r0, #1	@ 00027e3a 0120
.org 0x27e3c
	b.n 0x27e42	@ 00027e3c 01e0
.org 0x27e3e
	movs r0, #0	@ 00027e3e 0020
.org 0x27e40
	str r0, [r1, #0]	@ 00027e40 0860
.org 0x27e42
	pop {r4}	@ 00027e42 10bc
.org 0x27e44
	pop {r1}	@ 00027e44 02bc
.org 0x27e46
	bx r1	@ 00027e46 0847
