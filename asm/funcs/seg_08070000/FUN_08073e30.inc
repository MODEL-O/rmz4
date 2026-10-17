@ FUN_08073e30  entry 0x08073e30  size 116
.thumb
.org 0x73e30
FUN_08073e30:
	push {r4, r5, lr}	@ 00073e30 30b5
.org 0x73e32
	sub sp, #16	@ 00073e32 84b0
.org 0x73e34
	adds r3, r0, #0	@ 00073e34 031c
.org 0x73e36
	lsls r1, r1, #24	@ 00073e36 0906
.org 0x73e38
	lsrs r2, r1, #24	@ 00073e38 0a0e
.org 0x73e3a
	movs r5, #0	@ 00073e3a 0025
.org 0x73e3c
	movs r4, #0	@ 00073e3c 0024
.org 0x73e3e
	cmp r4, r2	@ 00073e3e 9442
.org 0x73e40
	bge.n 0x73e58	@ 00073e40 0ada
.org 0x73e42
	mov r0, sp	@ 00073e42 6846
.org 0x73e44
	adds r1, r0, r4	@ 00073e44 0119
.org 0x73e46
	adds r0, r3, r4	@ 00073e46 1819
.org 0x73e48
	ldrb r0, [r0, #0]	@ 00073e48 0078
.org 0x73e4a
	strb r0, [r1, #0]	@ 00073e4a 0870
.org 0x73e4c
	adds r0, r0, r5	@ 00073e4c 4019
.org 0x73e4e
	lsls r0, r0, #24	@ 00073e4e 0006
.org 0x73e50
	lsrs r5, r0, #24	@ 00073e50 050e
.org 0x73e52
	adds r4, #1	@ 00073e52 0134
.org 0x73e54
	cmp r4, r2	@ 00073e54 9442
.org 0x73e56
	blt.n 0x73e42	@ 00073e56 f4db
.org 0x73e58
	lsls r0, r5, #24	@ 00073e58 2806
.org 0x73e5a
	asrs r3, r0, #24	@ 00073e5a 0316
.org 0x73e5c
	cmp r3, #0	@ 00073e5c 002b
.org 0x73e5e
	bne.n 0x73e66	@ 00073e5e 02d1
.org 0x73e60
	movs r0, #1	@ 00073e60 0120
.org 0x73e62
	negs r0, r0	@ 00073e62 4042
.org 0x73e64
	b.n 0x73e9c	@ 00073e64 1ae0
.org 0x73e66
	ldr r2, [pc, #60]	@ 00073e66 0f4a
.org 0x73e68
	ldr r1, [r2, #0]	@ 00073e68 1168
.org 0x73e6a
	ldr r0, [pc, #60]	@ 00073e6a 0f48
.org 0x73e6c
	muls r0, r1	@ 00073e6c 4843
.org 0x73e6e
	ldr r1, [pc, #60]	@ 00073e6e 0f49
.org 0x73e70
	adds r0, r0, r1	@ 00073e70 4018
.org 0x73e72
	lsls r0, r0, #1	@ 00073e72 4000
.org 0x73e74
	lsrs r1, r0, #1	@ 00073e74 4108
.org 0x73e76
	str r1, [r2, #0]	@ 00073e76 1160
.org 0x73e78
	lsrs r0, r0, #17	@ 00073e78 400c
.org 0x73e7a
	adds r1, r3, #0	@ 00073e7a 191c
.org 0x73e7c
	bl 0x129198	@ 00073e7c b5f08cf9
.org 0x73e80
	adds r1, r0, #0	@ 00073e80 011c
.org 0x73e82
	subs r4, #1	@ 00073e82 013c
.org 0x73e84
	cmp r4, #0	@ 00073e84 002c
.org 0x73e86
	blt.n 0x73e9a	@ 00073e86 08db
.org 0x73e88
	mov r2, sp	@ 00073e88 6a46
.org 0x73e8a
	adds r0, r2, r4	@ 00073e8a 1019
.org 0x73e8c
	ldrb r0, [r0, #0]	@ 00073e8c 0078
.org 0x73e8e
	subs r0, r5, r0	@ 00073e8e 281a
.org 0x73e90
	lsls r0, r0, #24	@ 00073e90 0006
.org 0x73e92
	lsrs r5, r0, #24	@ 00073e92 050e
.org 0x73e94
	asrs r0, r0, #24	@ 00073e94 0016
.org 0x73e96
	cmp r1, r0	@ 00073e96 8142
.org 0x73e98
	blt.n 0x73e82	@ 00073e98 f3db
.org 0x73e9a
	adds r0, r4, #0	@ 00073e9a 201c
.org 0x73e9c
	add sp, #16	@ 00073e9c 04b0
.org 0x73e9e
	pop {r4, r5}	@ 00073e9e 30bc
.org 0x73ea0
	pop {r1}	@ 00073ea0 02bc
.org 0x73ea2
	bx r1	@ 00073ea2 0847
