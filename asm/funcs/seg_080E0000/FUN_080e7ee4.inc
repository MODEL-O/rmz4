@ FUN_080e7ee4  entry 0x080e7ee4  size 124
.thumb
.org 0xe7ee4
FUN_080e7ee4:
	push {r4, lr}	@ 000e7ee4 10b5
.org 0xe7ee6
	adds r4, r0, #0	@ 000e7ee6 041c
.org 0xe7ee8
	ldr r0, [pc, #116]	@ 000e7ee8 1d48
.org 0xe7eea
	adds r1, r0, #0	@ 000e7eea 011c
.org 0xe7eec
	ldrb r3, [r4, #17]	@ 000e7eec 637c
.org 0xe7eee
	adds r1, r1, r3	@ 000e7eee c918
.org 0xe7ef0
	lsls r1, r1, #16	@ 000e7ef0 0904
.org 0xe7ef2
	lsrs r1, r1, #16	@ 000e7ef2 090c
.org 0xe7ef4
	adds r0, r4, #0	@ 000e7ef4 201c
.org 0xe7ef6
	bl 0x1cf00	@ 000e7ef6 35f703f8
.org 0xe7efa
	ldr r2, [pc, #104]	@ 000e7efa 1a4a
.org 0xe7efc
	adds r0, r2, #0	@ 000e7efc 101c
.org 0xe7efe
	adds r0, #246	@ 000e7efe f630
.org 0xe7f00
	movs r3, #0	@ 000e7f00 0023
.org 0xe7f02
	ldrsh r1, [r0, r3]	@ 000e7f02 c15e
.org 0xe7f04
	lsls r0, r1, #1	@ 000e7f04 4800
.org 0xe7f06
	adds r3, r0, r1	@ 000e7f06 4318
.org 0xe7f08
	lsls r0, r3, #1	@ 000e7f08 5800
.org 0xe7f0a
	str r0, [r4, #92]	@ 000e7f0a e065
.org 0xe7f0c
	adds r2, #118	@ 000e7f0c 7632
.org 0xe7f0e
	movs r0, #0	@ 000e7f0e 0020
.org 0xe7f10
	ldrsh r1, [r2, r0]	@ 000e7f10 115e
.org 0xe7f12
	lsls r0, r1, #1	@ 000e7f12 4800
.org 0xe7f14
	adds r0, r0, r1	@ 000e7f14 4018
.org 0xe7f16
	lsls r1, r0, #1	@ 000e7f16 4100
.org 0xe7f18
	str r1, [r4, #96]	@ 000e7f18 2166
.org 0xe7f1a
	lsls r0, r0, #9	@ 000e7f1a 4002
.org 0xe7f1c
	negs r0, r0	@ 000e7f1c 4042
.org 0xe7f1e
	cmp r0, #0	@ 000e7f1e 0028
.org 0xe7f20
	bge.n 0xe7f24	@ 000e7f20 00da
.org 0xe7f22
	adds r0, #255	@ 000e7f22 ff30
.org 0xe7f24
	asrs r0, r0, #8	@ 000e7f24 0012
.org 0xe7f26
	str r0, [r4, #96]	@ 000e7f26 2066
.org 0xe7f28
	ldrb r0, [r4, #17]	@ 000e7f28 607c
.org 0xe7f2a
	cmp r0, #0	@ 000e7f2a 0028
.org 0xe7f2c
	bne.n 0xe7f3c	@ 000e7f2c 06d1
.org 0xe7f2e
	lsls r0, r3, #9	@ 000e7f2e 5802
.org 0xe7f30
	negs r0, r0	@ 000e7f30 4042
.org 0xe7f32
	cmp r0, #0	@ 000e7f32 0028
.org 0xe7f34
	bge.n 0xe7f38	@ 000e7f34 00da
.org 0xe7f36
	adds r0, #255	@ 000e7f36 ff30
.org 0xe7f38
	asrs r0, r0, #8	@ 000e7f38 0012
.org 0xe7f3a
	str r0, [r4, #92]	@ 000e7f3a e065
.org 0xe7f3c
	ldrb r1, [r4, #10]	@ 000e7f3c a17a
.org 0xe7f3e
	movs r0, #16	@ 000e7f3e 1020
.org 0xe7f40
	ands r0, r1	@ 000e7f40 0840
.org 0xe7f42
	cmp r0, #0	@ 000e7f42 0028
.org 0xe7f44
	beq.n 0xe7f56	@ 000e7f44 07d0
.org 0xe7f46
	ldr r0, [r4, #92]	@ 000e7f46 e06d
.org 0xe7f48
	lsls r0, r0, #8	@ 000e7f48 0002
.org 0xe7f4a
	negs r0, r0	@ 000e7f4a 4042
.org 0xe7f4c
	cmp r0, #0	@ 000e7f4c 0028
.org 0xe7f4e
	bge.n 0xe7f52	@ 000e7f4e 00da
.org 0xe7f50
	adds r0, #255	@ 000e7f50 ff30
.org 0xe7f52
	asrs r0, r0, #8	@ 000e7f52 0012
.org 0xe7f54
	str r0, [r4, #92]	@ 000e7f54 e065
.org 0xe7f56
	movs r0, #0	@ 000e7f56 0020
.org 0xe7f58
	strb r0, [r4, #13]	@ 000e7f58 6073
.org 0xe7f5a
	pop {r4}	@ 000e7f5a 10bc
.org 0xe7f5c
	pop {r0}	@ 000e7f5c 01bc
.org 0xe7f5e
	bx r0	@ 000e7f5e 0047
