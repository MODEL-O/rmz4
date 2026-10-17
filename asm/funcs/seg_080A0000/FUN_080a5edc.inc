@ FUN_080a5edc  entry 0x080a5edc  size 80
.thumb
.org 0xa5edc
FUN_080a5edc:
	push {r4, lr}	@ 000a5edc 10b5
.org 0xa5ede
	adds r4, r0, #0	@ 000a5ede 041c
.org 0xa5ee0
	bl 0x1cff0	@ 000a5ee0 77f786f8
.org 0xa5ee4
	ldrb r0, [r4, #18]	@ 000a5ee4 a07c
.org 0xa5ee6
	subs r0, #1	@ 000a5ee6 0138
.org 0xa5ee8
	strb r0, [r4, #18]	@ 000a5ee8 a074
.org 0xa5eea
	lsls r0, r0, #24	@ 000a5eea 0006
.org 0xa5eec
	lsrs r2, r0, #24	@ 000a5eec 020e
.org 0xa5eee
	cmp r2, #0	@ 000a5eee 002a
.org 0xa5ef0
	bne.n 0xa5f26	@ 000a5ef0 19d1
.org 0xa5ef2
	ldrb r1, [r4, #10]	@ 000a5ef2 a17a
.org 0xa5ef4
	movs r0, #254	@ 000a5ef4 fe20
.org 0xa5ef6
	ands r0, r1	@ 000a5ef6 0840
.org 0xa5ef8
	movs r1, #253	@ 000a5ef8 fd21
.org 0xa5efa
	ands r0, r1	@ 000a5efa 0840
.org 0xa5efc
	strb r0, [r4, #10]	@ 000a5efc a072
.org 0xa5efe
	adds r0, r4, #0	@ 000a5efe 201c
.org 0xa5f00
	adds r0, #140	@ 000a5f00 8c30
.org 0xa5f02
	str r2, [r0, #0]	@ 000a5f02 0260
.org 0xa5f04
	adds r0, #4	@ 000a5f04 0430
.org 0xa5f06
	str r2, [r0, #0]	@ 000a5f06 0260
.org 0xa5f08
	adds r0, #4	@ 000a5f08 0430
.org 0xa5f0a
	strb r2, [r0, #0]	@ 000a5f0a 0270
.org 0xa5f0c
	ldrb r1, [r4, #10]	@ 000a5f0c a17a
.org 0xa5f0e
	movs r0, #251	@ 000a5f0e fb20
.org 0xa5f10
	ands r0, r1	@ 000a5f10 0840
.org 0xa5f12
	strb r0, [r4, #10]	@ 000a5f12 a072
.org 0xa5f14
	ldr r1, [pc, #20]	@ 000a5f14 0549
.org 0xa5f16
	ldrb r0, [r4, #9]	@ 000a5f16 607a
.org 0xa5f18
	lsls r0, r0, #2	@ 000a5f18 8000
.org 0xa5f1a
	adds r0, r0, r1	@ 000a5f1a 4018
.org 0xa5f1c
	movs r1, #3	@ 000a5f1c 0321
.org 0xa5f1e
	str r1, [r4, #12]	@ 000a5f1e e160
.org 0xa5f20
	ldr r0, [r0, #0]	@ 000a5f20 0068
.org 0xa5f22
	ldr r0, [r0, #12]	@ 000a5f22 c068
.org 0xa5f24
	str r0, [r4, #20]	@ 000a5f24 6061
.org 0xa5f26
	pop {r4}	@ 000a5f26 10bc
.org 0xa5f28
	pop {r0}	@ 000a5f28 01bc
.org 0xa5f2a
	bx r0	@ 000a5f2a 0047
