@ FUN_08017ee8  entry 0x08017ee8  size 100
.thumb
.org 0x17ee8
FUN_08017ee8:
	push {r4, r5, r6, lr}	@ 00017ee8 70b5
.org 0x17eea
	sub sp, #8	@ 00017eea 82b0
.org 0x17eec
	ldr r0, [r0, #92]	@ 00017eec c06d
.org 0x17eee
	lsls r5, r0, #16	@ 00017eee 0504
.org 0x17ef0
	ldr r0, [pc, #88]	@ 00017ef0 1648
.org 0x17ef2
	ldr r1, [pc, #92]	@ 00017ef2 1749
.org 0x17ef4
	adds r0, r0, r1	@ 00017ef4 4018
.org 0x17ef6
	ldrh r0, [r0, #0]	@ 00017ef6 0088
.org 0x17ef8
	cmp r0, #0	@ 00017ef8 0028
.org 0x17efa
	beq.n 0x17f44	@ 00017efa 23d0
.org 0x17efc
	ldr r0, [pc, #84]	@ 00017efc 1548
.org 0x17efe
	ldr r0, [r0, #0]	@ 00017efe 0068
.org 0x17f00
	ldr r1, [pc, #84]	@ 00017f00 1549
.org 0x17f02
	adds r0, r0, r1	@ 00017f02 4018
.org 0x17f04
	lsrs r5, r5, #20	@ 00017f04 2d0d
.org 0x17f06
	lsls r5, r5, #1	@ 00017f06 6d00
.org 0x17f08
	ldr r1, [pc, #80]	@ 00017f08 1449
.org 0x17f0a
	adds r5, r5, r1	@ 00017f0a 6d18
.org 0x17f0c
	ldrh r2, [r5, #0]	@ 00017f0c 2a88
.org 0x17f0e
	movs r4, #248	@ 00017f0e f824
.org 0x17f10
	lsls r4, r4, #5	@ 00017f10 6401
.org 0x17f12
	adds r1, r4, #0	@ 00017f12 211c
.org 0x17f14
	ands r1, r2	@ 00017f14 1140
.org 0x17f16
	lsls r1, r1, #3	@ 00017f16 c900
.org 0x17f18
	movs r2, #192	@ 00017f18 c022
.org 0x17f1a
	lsls r2, r2, #19	@ 00017f1a d204
.org 0x17f1c
	adds r1, r1, r2	@ 00017f1c 8918
.org 0x17f1e
	movs r6, #128	@ 00017f1e 8026
.org 0x17f20
	lsls r6, r6, #2	@ 00017f20 b600
.org 0x17f22
	adds r2, r6, #0	@ 00017f22 321c
.org 0x17f24
	bl 0x128be0	@ 00017f24 10f15cfe
.org 0x17f28
	movs r1, #0	@ 00017f28 0021
.org 0x17f2a
	ldrh r0, [r5, #0]	@ 00017f2a 2888
.org 0x17f2c
	ands r4, r0	@ 00017f2c 0440
.org 0x17f2e
	lsls r4, r4, #3	@ 00017f2e e400
.org 0x17f30
	ldr r0, [pc, #44]	@ 00017f30 0b48
.org 0x17f32
	adds r4, r4, r0	@ 00017f32 2418
.org 0x17f34
	str r1, [sp, #0]	@ 00017f34 0091
.org 0x17f36
	movs r2, #128	@ 00017f36 8022
.org 0x17f38
	lsls r2, r2, #17	@ 00017f38 5204
.org 0x17f3a
	orrs r2, r6	@ 00017f3a 3243
.org 0x17f3c
	mov r0, sp	@ 00017f3c 6846
.org 0x17f3e
	adds r1, r4, #0	@ 00017f3e 211c
.org 0x17f40
	bl 0x128be0	@ 00017f40 10f14efe
.org 0x17f44
	add sp, #8	@ 00017f44 02b0
.org 0x17f46
	pop {r4, r5, r6}	@ 00017f46 70bc
.org 0x17f48
	pop {r0}	@ 00017f48 01bc
.org 0x17f4a
	bx r0	@ 00017f4a 0047
