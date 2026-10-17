@ FUN_080ece7c  entry 0x080ece7c  size 106
.thumb
.org 0xece7c
FUN_080ece7c:
	push {r4, r5, r6, r7, lr}	@ 000ece7c f0b5
.org 0xece7e
	adds r6, r0, #0	@ 000ece7e 061c
.org 0xece80
	ldr r0, [pc, #68]	@ 000ece80 1148
.org 0xece82
	ldr r1, [pc, #72]	@ 000ece82 1249
.org 0xece84
	adds r0, r0, r1	@ 000ece84 4018
.org 0xece86
	ldrb r0, [r0, #0]	@ 000ece86 0078
.org 0xece88
	movs r7, #15	@ 000ece88 0f27
.org 0xece8a
	ands r7, r0	@ 000ece8a 0740
.org 0xece8c
	cmp r7, #1	@ 000ece8c 012f
.org 0xece8e
	bne.n 0xeced8	@ 000ece8e 23d1
.org 0xece90
	ldrb r1, [r6, #10]	@ 000ece90 b17a
.org 0xece92
	movs r0, #4	@ 000ece92 0420
.org 0xece94
	movs r5, #0	@ 000ece94 0025
.org 0xece96
	orrs r0, r1	@ 000ece96 0843
.org 0xece98
	strb r0, [r6, #10]	@ 000ece98 b072
.org 0xece9a
	adds r4, r6, #0	@ 000ece9a 341c
.org 0xece9c
	adds r4, #116	@ 000ece9c 7434
.org 0xece9e
	ldr r1, [pc, #48]	@ 000ece9e 0c49
.org 0xecea0
	adds r2, r6, #0	@ 000ecea0 321c
.org 0xecea2
	adds r2, #84	@ 000ecea2 5432
.org 0xecea4
	adds r0, r4, #0	@ 000ecea4 201c
.org 0xecea6
	movs r3, #0	@ 000ecea6 0023
.org 0xecea8
	bl 0x5760	@ 000ecea8 18f75afc
.org 0xeceac
	str r6, [r4, #44]	@ 000eceac e662
.org 0xeceae
	str r5, [r4, #36]	@ 000eceae 6562
.org 0xeceb0
	ldr r1, [pc, #32]	@ 000eceb0 0849
.org 0xeceb2
	ldrb r0, [r6, #9]	@ 000eceb2 707a
.org 0xeceb4
	lsls r0, r0, #2	@ 000eceb4 8000
.org 0xeceb6
	adds r0, r0, r1	@ 000eceb6 4018
.org 0xeceb8
	str r7, [r6, #12]	@ 000eceb8 f760
.org 0xeceba
	ldr r0, [r0, #0]	@ 000eceba 0068
.org 0xecebc
	ldr r0, [r0, #4]	@ 000ecebc 4068
.org 0xecebe
	str r0, [r6, #20]	@ 000ecebe 7061
.org 0xecec0
	adds r0, r6, #0	@ 000ecec0 301c
.org 0xecec2
	bl 0xecefc	@ 000ecec2 00f01bf8
.org 0xecec6
	b.n 0xecef0	@ 000ecec6 13e0
.org 0xecec8
	.byte 0xb0,0x0a,0x00,0x02	@ 000ecec8 data
.org 0xececc
	.byte 0x10,0xc0,0x02,0x00	@ 000ececc data
.org 0xeced0
	.byte 0xc8,0x98,0x86,0x08	@ 000eced0 data
.org 0xeced4
	.byte 0xfc,0x92,0x86,0x08	@ 000eced4 data
.org 0xeced8
	ldr r1, [pc, #28]	@ 000eced8 0749
.org 0xeceda
	ldrb r0, [r6, #9]	@ 000eceda 707a
.org 0xecedc
	lsls r0, r0, #2	@ 000ecedc 8000
.org 0xecede
	adds r0, r0, r1	@ 000ecede 4018
.org 0xecee0
	movs r1, #2	@ 000ecee0 0221
.org 0xecee2
	str r1, [r6, #12]	@ 000ecee2 f160
.org 0xecee4
	ldr r0, [r0, #0]	@ 000ecee4 0068
