@ FUN_080eabbc  entry 0x080eabbc  size 80
.thumb
.org 0xeabbc
FUN_080eabbc:
	push {r4, r5, lr}	@ 000eabbc 30b5
.org 0xeabbe
	adds r5, r0, #0	@ 000eabbe 051c
.org 0xeabc0
	ldrb r0, [r5, #14]	@ 000eabc0 a87b
.org 0xeabc2
	cmp r0, #0	@ 000eabc2 0028
.org 0xeabc4
	beq.n 0xeabcc	@ 000eabc4 02d0
.org 0xeabc6
	cmp r0, #1	@ 000eabc6 0128
.org 0xeabc8
	beq.n 0xeac00	@ 000eabc8 1ad0
.org 0xeabca
	b.n 0xeac06	@ 000eabca 1ce0
.org 0xeabcc
	adds r0, r5, #0	@ 000eabcc 281c
.org 0xeabce
	adds r0, #184	@ 000eabce b830
.org 0xeabd0
	ldrb r1, [r0, #0]	@ 000eabd0 0178
.org 0xeabd2
	lsls r1, r1, #8	@ 000eabd2 0902
.org 0xeabd4
	adds r0, r5, #0	@ 000eabd4 281c
.org 0xeabd6
	bl 0x1cf00	@ 000eabd6 32f793f9
.org 0xeabda
	ldrb r1, [r5, #10]	@ 000eabda a97a
.org 0xeabdc
	movs r0, #4	@ 000eabdc 0420
.org 0xeabde
	orrs r0, r1	@ 000eabde 0843
.org 0xeabe0
	strb r0, [r5, #10]	@ 000eabe0 a872
.org 0xeabe2
	adds r4, r5, #0	@ 000eabe2 2c1c
.org 0xeabe4
	adds r4, #116	@ 000eabe4 7434
.org 0xeabe6
	ldr r1, [pc, #36]	@ 000eabe6 0949
.org 0xeabe8
	adds r2, r5, #0	@ 000eabe8 2a1c
.org 0xeabea
	adds r2, #84	@ 000eabea 5432
.org 0xeabec
	adds r0, r4, #0	@ 000eabec 201c
.org 0xeabee
	movs r3, #0	@ 000eabee 0023
.org 0xeabf0
	bl 0x5760	@ 000eabf0 1af7b6fd
.org 0xeabf4
	str r5, [r4, #44]	@ 000eabf4 e562
.org 0xeabf6
	ldr r0, [pc, #24]	@ 000eabf6 0648
.org 0xeabf8
	str r0, [r4, #36]	@ 000eabf8 6062
.org 0xeabfa
	ldrb r0, [r5, #14]	@ 000eabfa a87b
.org 0xeabfc
	adds r0, #1	@ 000eabfc 0130
.org 0xeabfe
	strb r0, [r5, #14]	@ 000eabfe a873
.org 0xeac00
	adds r0, r5, #0	@ 000eac00 281c
.org 0xeac02
	bl 0x1cff0	@ 000eac02 32f7f5f9
.org 0xeac06
	pop {r4, r5}	@ 000eac06 30bc
.org 0xeac08
	pop {r0}	@ 000eac08 01bc
.org 0xeac0a
	bx r0	@ 000eac0a 0047
