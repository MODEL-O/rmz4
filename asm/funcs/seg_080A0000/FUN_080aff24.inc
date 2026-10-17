@ FUN_080aff24  entry 0x080aff24  size 94
.thumb
.org 0xaff24
FUN_080aff24:
	push {r4, r5, lr}	@ 000aff24 30b5
.org 0xaff26
	adds r4, r0, #0	@ 000aff26 041c
.org 0xaff28
	ldrb r5, [r4, #14]	@ 000aff28 a57b
.org 0xaff2a
	cmp r5, #0	@ 000aff2a 002d
.org 0xaff2c
	bne.n 0xaff68	@ 000aff2c 1cd1
.org 0xaff2e
	str r5, [r4, #92]	@ 000aff2e e565
.org 0xaff30
	str r5, [r4, #96]	@ 000aff30 2566
.org 0xaff32
	str r5, [r4, #100]	@ 000aff32 6566
.org 0xaff34
	str r5, [r4, #104]	@ 000aff34 a566
.org 0xaff36
	bl 0xb022c	@ 000aff36 00f079f9
.org 0xaff3a
	adds r0, r4, #0	@ 000aff3a 201c
.org 0xaff3c
	adds r0, #183	@ 000aff3c b730
.org 0xaff3e
	ldr r2, [pc, #68]	@ 000aff3e 114a
.org 0xaff40
	adds r1, r2, #0	@ 000aff40 111c
.org 0xaff42
	ldrb r0, [r0, #0]	@ 000aff42 0078
.org 0xaff44
	adds r1, r1, r0	@ 000aff44 0918
.org 0xaff46
	lsls r1, r1, #16	@ 000aff46 0904
.org 0xaff48
	lsrs r1, r1, #16	@ 000aff48 090c
.org 0xaff4a
	adds r0, r4, #0	@ 000aff4a 201c
.org 0xaff4c
	bl 0x1cf00	@ 000aff4c 6cf7d8ff
.org 0xaff50
	movs r0, #20	@ 000aff50 1420
.org 0xaff52
	strb r0, [r4, #18]	@ 000aff52 a074
.org 0xaff54
	ldr r1, [r4, #44]	@ 000aff54 e16a
.org 0xaff56
	cmp r1, #0	@ 000aff56 0029
.org 0xaff58
	beq.n 0xaff62	@ 000aff58 03d0
.org 0xaff5a
	movs r0, #3	@ 000aff5a 0320
.org 0xaff5c
	strb r0, [r1, #13]	@ 000aff5c 4873
.org 0xaff5e
	ldr r0, [r4, #44]	@ 000aff5e e06a
.org 0xaff60
	strb r5, [r0, #14]	@ 000aff60 8573
.org 0xaff62
	ldrb r0, [r4, #14]	@ 000aff62 a07b
.org 0xaff64
	adds r0, #1	@ 000aff64 0130
.org 0xaff66
	strb r0, [r4, #14]	@ 000aff66 a073
.org 0xaff68
	adds r0, r4, #0	@ 000aff68 201c
.org 0xaff6a
	bl 0xb0318	@ 000aff6a 00f0d5f9
.org 0xaff6e
	lsls r0, r0, #24	@ 000aff6e 0006
.org 0xaff70
	cmp r0, #0	@ 000aff70 0028
.org 0xaff72
	beq.n 0xaff7c	@ 000aff72 03d0
.org 0xaff74
	movs r1, #0	@ 000aff74 0021
.org 0xaff76
	movs r0, #4	@ 000aff76 0420
.org 0xaff78
	strb r0, [r4, #13]	@ 000aff78 6073
.org 0xaff7a
	strb r1, [r4, #14]	@ 000aff7a a173
.org 0xaff7c
	pop {r4, r5}	@ 000aff7c 30bc
.org 0xaff7e
	pop {r0}	@ 000aff7e 01bc
.org 0xaff80
	bx r0	@ 000aff80 0047
