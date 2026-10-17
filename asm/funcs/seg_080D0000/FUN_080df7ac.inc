@ FUN_080df7ac  entry 0x080df7ac  size 94
.thumb
.org 0xdf7ac
FUN_080df7ac:
	push {r4, lr}	@ 000df7ac 10b5
.org 0xdf7ae
	adds r4, r0, #0	@ 000df7ae 041c
.org 0xdf7b0
	ldr r0, [r4, #84]	@ 000df7b0 606d
.org 0xdf7b2
	ldr r1, [r4, #92]	@ 000df7b2 e16d
.org 0xdf7b4
	adds r0, r0, r1	@ 000df7b4 4018
.org 0xdf7b6
	str r0, [r4, #84]	@ 000df7b6 6065
.org 0xdf7b8
	ldr r1, [r4, #88]	@ 000df7b8 a16d
.org 0xdf7ba
	ldr r2, [r4, #96]	@ 000df7ba 226e
.org 0xdf7bc
	adds r1, r1, r2	@ 000df7bc 8918
.org 0xdf7be
	str r1, [r4, #88]	@ 000df7be a165
.org 0xdf7c0
	adds r2, #64	@ 000df7c0 4032
.org 0xdf7c2
	str r2, [r4, #96]	@ 000df7c2 2266
.org 0xdf7c4
	bl 0x7c7c	@ 000df7c4 28f75afa
.org 0xdf7c8
	lsls r0, r0, #16	@ 000df7c8 0004
.org 0xdf7ca
	cmp r0, #0	@ 000df7ca 0028
.org 0xdf7cc
	beq.n 0xdf7e0	@ 000df7cc 08d0
.org 0xdf7ce
	ldr r1, [pc, #40]	@ 000df7ce 0a49
.org 0xdf7d0
	ldrb r0, [r4, #9]	@ 000df7d0 607a
.org 0xdf7d2
	lsls r0, r0, #2	@ 000df7d2 8000
.org 0xdf7d4
	adds r0, r0, r1	@ 000df7d4 4018
.org 0xdf7d6
	movs r1, #2	@ 000df7d6 0221
.org 0xdf7d8
	str r1, [r4, #12]	@ 000df7d8 e160
.org 0xdf7da
	ldr r0, [r0, #0]	@ 000df7da 0068
.org 0xdf7dc
	ldr r0, [r0, #8]	@ 000df7dc 8068
.org 0xdf7de
	str r0, [r4, #20]	@ 000df7de 6061
.org 0xdf7e0
	adds r3, r4, #0	@ 000df7e0 231c
.org 0xdf7e2
	adds r3, #117	@ 000df7e2 7533
.org 0xdf7e4
	ldrb r0, [r3, #0]	@ 000df7e4 1878
.org 0xdf7e6
	cmp r0, #0	@ 000df7e6 0028
.org 0xdf7e8
	bne.n 0xdf7fc	@ 000df7e8 08d1
.org 0xdf7ea
	ldrb r0, [r4, #10]	@ 000df7ea a07a
.org 0xdf7ec
	movs r1, #254	@ 000df7ec fe21
.org 0xdf7ee
	ands r1, r0	@ 000df7ee 0140
.org 0xdf7f0
	strb r1, [r4, #10]	@ 000df7f0 a172
.org 0xdf7f2
	movs r0, #1	@ 000df7f2 0120
.org 0xdf7f4
	strb r0, [r3, #0]	@ 000df7f4 1870
.org 0xdf7f6
	b.n 0xdf808	@ 000df7f6 07e0
.org 0xdf7f8
	.byte 0x64,0x6f,0x86,0x08	@ 000df7f8 data
.org 0xdf7fc
	ldrb r0, [r4, #10]	@ 000df7fc a07a
.org 0xdf7fe
	movs r1, #1	@ 000df7fe 0121
.org 0xdf800
	movs r2, #0	@ 000df800 0022
.org 0xdf802
	orrs r1, r0	@ 000df802 0143
.org 0xdf804
	strb r1, [r4, #10]	@ 000df804 a172
.org 0xdf806
	strb r2, [r3, #0]	@ 000df806 1a70
.org 0xdf808
	pop {r4}	@ 000df808 10bc
