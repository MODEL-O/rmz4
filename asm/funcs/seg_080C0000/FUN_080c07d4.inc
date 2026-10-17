@ FUN_080c07d4  entry 0x080c07d4  size 62
.thumb
.org 0xc07d4
FUN_080c07d4:
	push {r4, lr}	@ 000c07d4 10b5
.org 0xc07d6
	adds r4, r0, #0	@ 000c07d6 041c
.org 0xc07d8
	ldrb r0, [r4, #15]	@ 000c07d8 e07b
.org 0xc07da
	cmp r0, #0	@ 000c07da 0028
.org 0xc07dc
	bne.n 0xc07f4	@ 000c07dc 0ad1
.org 0xc07de
	ldrb r1, [r4, #10]	@ 000c07de a17a
.org 0xc07e0
	movs r0, #1	@ 000c07e0 0120
.org 0xc07e2
	orrs r0, r1	@ 000c07e2 0843
.org 0xc07e4
	strb r0, [r4, #10]	@ 000c07e4 a072
.org 0xc07e6
	ldr r1, [pc, #44]	@ 000c07e6 0b49
.org 0xc07e8
	adds r0, r4, #0	@ 000c07e8 201c
.org 0xc07ea
	bl 0x1cf00	@ 000c07ea 5cf789fb
.org 0xc07ee
	ldrb r0, [r4, #15]	@ 000c07ee e07b
.org 0xc07f0
	adds r0, #1	@ 000c07f0 0130
.org 0xc07f2
	strb r0, [r4, #15]	@ 000c07f2 e073
.org 0xc07f4
	adds r0, r4, #0	@ 000c07f4 201c
.org 0xc07f6
	bl 0x1cff0	@ 000c07f6 5cf7fbfb
.org 0xc07fa
	adds r0, r4, #0	@ 000c07fa 201c
.org 0xc07fc
	adds r0, #115	@ 000c07fc 7330
.org 0xc07fe
	ldrb r0, [r0, #0]	@ 000c07fe 0078
.org 0xc0800
	cmp r0, #3	@ 000c0800 0328
.org 0xc0802
	bne.n 0xc080c	@ 000c0802 03d1
.org 0xc0804
	movs r1, #0	@ 000c0804 0021
.org 0xc0806
	movs r0, #1	@ 000c0806 0120
.org 0xc0808
	strb r0, [r4, #14]	@ 000c0808 a073
.org 0xc080a
	strb r1, [r4, #15]	@ 000c080a e173
.org 0xc080c
	pop {r4}	@ 000c080c 10bc
.org 0xc080e
	pop {r0}	@ 000c080e 01bc
.org 0xc0810
	bx r0	@ 000c0810 0047
