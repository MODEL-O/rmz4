@ FUN_0801c7cc  entry 0x0801c7cc  size 64
.thumb
.org 0x1c7cc
FUN_0801c7cc:
	push {r4, r5, lr}	@ 0001c7cc 30b5
.org 0x1c7ce
	adds r5, r0, #0	@ 0001c7ce 051c
.org 0x1c7d0
	bl 0x54b4	@ 0001c7d0 e8f770fe
.org 0x1c7d4
	b.n 0x1c7f6	@ 0001c7d4 0fe0
.org 0x1c7d6
	ldr r1, [r4, #20]	@ 0001c7d6 6169
.org 0x1c7d8
	adds r0, r4, #0	@ 0001c7d8 201c
.org 0x1c7da
	bl 0x128f80	@ 0001c7da 0cf1d1fb
.org 0x1c7de
	ldrb r1, [r4, #11]	@ 0001c7de e17a
.org 0x1c7e0
	movs r0, #8	@ 0001c7e0 0820
.org 0x1c7e2
	ands r0, r1	@ 0001c7e2 0840
.org 0x1c7e4
	cmp r0, #0	@ 0001c7e4 0028
.org 0x1c7e6
	beq.n 0x1c7f6	@ 0001c7e6 06d0
.org 0x1c7e8
	ldrb r0, [r4, #28]	@ 0001c7e8 207f
.org 0x1c7ea
	ldrh r1, [r4, #38]	@ 0001c7ea e18c
.org 0x1c7ec
	adds r2, r4, #0	@ 0001c7ec 221c
.org 0x1c7ee
	adds r2, #84	@ 0001c7ee 5432
.org 0x1c7f0
	ldr r3, [r4, #48]	@ 0001c7f0 236b
.org 0x1c7f2
	bl 0x8d04	@ 0001c7f2 ecf787fa
.org 0x1c7f6
	ldr r0, [r5, #12]	@ 0001c7f6 e868
.org 0x1c7f8
	ldr r0, [r0, #4]	@ 0001c7f8 4068
.org 0x1c7fa
	str r0, [r5, #12]	@ 0001c7fa e860
.org 0x1c7fc
	adds r4, r0, #0	@ 0001c7fc 041c
.org 0x1c7fe
	adds r0, r5, #0	@ 0001c7fe 281c
.org 0x1c800
	adds r0, #20	@ 0001c800 1430
.org 0x1c802
	cmp r4, r0	@ 0001c802 8442
.org 0x1c804
	bne.n 0x1c7d6	@ 0001c804 e7d1
.org 0x1c806
	pop {r4, r5}	@ 0001c806 30bc
.org 0x1c808
	pop {r0}	@ 0001c808 01bc
.org 0x1c80a
	bx r0	@ 0001c80a 0047
