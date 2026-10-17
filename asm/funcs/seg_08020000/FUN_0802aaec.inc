@ FUN_0802aaec  entry 0x0802aaec  size 134
.thumb
.org 0x2aaec
FUN_0802aaec:
	push {r4, r5, r6, r7, lr}	@ 0002aaec f0b5
.org 0x2aaee
	adds r3, r0, #0	@ 0002aaee 031c
.org 0x2aaf0
	adds r7, r1, #0	@ 0002aaf0 0f1c
.org 0x2aaf2
	ldr r2, [pc, #32]	@ 0002aaf2 084a
.org 0x2aaf4
	ldr r1, [r2, #0]	@ 0002aaf4 1168
.org 0x2aaf6
	ldr r0, [pc, #32]	@ 0002aaf6 0848
.org 0x2aaf8
	muls r0, r1	@ 0002aaf8 4843
.org 0x2aafa
	ldr r1, [pc, #32]	@ 0002aafa 0849
.org 0x2aafc
	adds r0, r0, r1	@ 0002aafc 4018
.org 0x2aafe
	lsls r0, r0, #1	@ 0002aafe 4000
.org 0x2ab00
	lsrs r1, r0, #1	@ 0002ab00 4108
.org 0x2ab02
	str r1, [r2, #0]	@ 0002ab02 1160
.org 0x2ab04
	lsrs r0, r0, #17	@ 0002ab04 400c
.org 0x2ab06
	lsls r0, r0, #24	@ 0002ab06 0006
.org 0x2ab08
	lsrs r6, r0, #24	@ 0002ab08 060e
.org 0x2ab0a
	cmp r3, #8	@ 0002ab0a 082b
.org 0x2ab0c
	bls.n 0x2ab20	@ 0002ab0c 08d9
.org 0x2ab0e
	movs r0, #1	@ 0002ab0e 0120
.org 0x2ab10
	b.n 0x2ab7a	@ 0002ab10 33e0
.org 0x2ab12
	.byte 0x00	@ 0002ab12 data
.org 0x2ab13
	.byte 0x00	@ 0002ab13 data
.org 0x2ab14
	.byte 0x38,0xdc,0x02,0x02	@ 0002ab14 data
.org 0x2ab18
	.byte 0xfd,0x43,0x03,0x00	@ 0002ab18 data
.org 0x2ab1c
	.byte 0xc3,0x9e,0x26,0x00	@ 0002ab1c data
.org 0x2ab20
	ldr r2, [pc, #92]	@ 0002ab20 174a
.org 0x2ab22
	ldrb r1, [r2, #21]	@ 0002ab22 517d
.org 0x2ab24
	movs r0, #1	@ 0002ab24 0120
.org 0x2ab26
	ands r0, r1	@ 0002ab26 0840
.org 0x2ab28
	cmp r0, #0	@ 0002ab28 0028
.org 0x2ab2a
	beq.n 0x2ab2e	@ 0002ab2a 00d0
.org 0x2ab2c
	movs r3, #8	@ 0002ab2c 0823
.org 0x2ab2e
	ldrb r1, [r2, #9]	@ 0002ab2e 517a
.org 0x2ab30
	movs r0, #2	@ 0002ab30 0220
.org 0x2ab32
	ands r0, r1	@ 0002ab32 0840
.org 0x2ab34
	cmp r0, #0	@ 0002ab34 0028
.org 0x2ab36
	beq.n 0x2ab3a	@ 0002ab36 00d0
.org 0x2ab38
	movs r3, #5	@ 0002ab38 0523
.org 0x2ab3a
	movs r4, #0	@ 0002ab3a 0024
.org 0x2ab3c
	ldr r5, [pc, #68]	@ 0002ab3c 114d
.org 0x2ab3e
	lsls r0, r3, #3	@ 0002ab3e d800
.org 0x2ab40
	subs r0, r0, r3	@ 0002ab40 c01a
.org 0x2ab42
	lsls r2, r0, #1	@ 0002ab42 4200
.org 0x2ab44
	adds r0, r2, r5	@ 0002ab44 5019
.org 0x2ab46
	adds r1, r6, #0	@ 0002ab46 311c
.org 0x2ab48
	ldrh r0, [r0, #0]	@ 0002ab48 0088
.org 0x2ab4a
	cmp r1, r0	@ 0002ab4a 8142
.org 0x2ab4c
	bcc.n 0x2ab66	@ 0002ab4c 0bd3
.org 0x2ab4e
	adds r3, r5, #0	@ 0002ab4e 2b1c
.org 0x2ab50
	adds r0, r4, #1	@ 0002ab50 601c
.org 0x2ab52
	lsls r0, r0, #16	@ 0002ab52 0004
.org 0x2ab54
	lsrs r4, r0, #16	@ 0002ab54 040c
.org 0x2ab56
	cmp r4, #5	@ 0002ab56 052c
.org 0x2ab58
	bhi.n 0x2ab66	@ 0002ab58 05d8
.org 0x2ab5a
	lsls r0, r4, #1	@ 0002ab5a 6000
.org 0x2ab5c
	adds r0, r0, r2	@ 0002ab5c 8018
.org 0x2ab5e
	adds r0, r0, r3	@ 0002ab5e c018
.org 0x2ab60
	ldrh r0, [r0, #0]	@ 0002ab60 0088
.org 0x2ab62
	cmp r1, r0	@ 0002ab62 8142
.org 0x2ab64
	bcs.n 0x2ab50	@ 0002ab64 f4d2
.org 0x2ab66
	cmp r4, #0	@ 0002ab66 002c
.org 0x2ab68
	beq.n 0x2ab78	@ 0002ab68 06d0
.org 0x2ab6a
	subs r0, r4, #1	@ 0002ab6a 601e
.org 0x2ab6c
	lsls r0, r0, #24	@ 0002ab6c 0006
.org 0x2ab6e
	lsrs r0, r0, #24	@ 0002ab6e 000e
.org 0x2ab70
	adds r1, r7, #0	@ 0002ab70 391c
