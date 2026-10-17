@ FUN_08049e40  entry 0x08049e40  size 134
.thumb
.org 0x49e40
FUN_08049e40:
	push {r4, r5, lr}	@ 00049e40 30b5
.org 0x49e42
	adds r4, r0, #0	@ 00049e42 041c
.org 0x49e44
	lsls r1, r1, #24	@ 00049e44 0906
.org 0x49e46
	lsrs r5, r1, #24	@ 00049e46 0d0e
.org 0x49e48
	ldr r0, [pc, #64]	@ 00049e48 1048
.org 0x49e4a
	ldr r0, [r0, #0]	@ 00049e4a 0068
.org 0x49e4c
	bl 0x5500	@ 00049e4c bbf758fb
.org 0x49e50
	adds r2, r0, #0	@ 00049e50 021c
.org 0x49e52
	cmp r2, #0	@ 00049e52 002a
.org 0x49e54
	beq.n 0x49ed0	@ 00049e54 3cd0
.org 0x49e56
	adds r0, r4, #0	@ 00049e56 201c
.org 0x49e58
	adds r0, #248	@ 00049e58 f830
.org 0x49e5a
	ldrb r0, [r0, #0]	@ 00049e5a 0078
.org 0x49e5c
	cmp r0, #2	@ 00049e5c 0228
.org 0x49e5e
	bne.n 0x49e9c	@ 00049e5e 1dd1
.org 0x49e60
	ldr r0, [pc, #44]	@ 00049e60 0b48
.org 0x49e62
	movs r1, #36	@ 00049e62 2421
.org 0x49e64
	strb r1, [r2, #9]	@ 00049e64 5172
.org 0x49e66
	adds r0, #144	@ 00049e66 9030
.org 0x49e68
	ldr r0, [r0, #0]	@ 00049e68 0068
.org 0x49e6a
	ldr r0, [r0, #0]	@ 00049e6a 0068
.org 0x49e6c
	str r0, [r2, #20]	@ 00049e6c 5061
.org 0x49e6e
	ldrb r1, [r2, #11]	@ 00049e6e d17a
.org 0x49e70
	movs r0, #191	@ 00049e70 bf20
.org 0x49e72
	ands r0, r1	@ 00049e72 0840
.org 0x49e74
	strb r0, [r2, #11]	@ 00049e74 d072
.org 0x49e76
	adds r1, r2, #0	@ 00049e76 111c
.org 0x49e78
	adds r1, #37	@ 00049e78 2531
.org 0x49e7a
	movs r0, #16	@ 00049e7a 1020
.org 0x49e7c
	strb r0, [r1, #0]	@ 00049e7c 0870
.org 0x49e7e
	ldr r0, [pc, #20]	@ 00049e7e 0548
.org 0x49e80
	ldrh r0, [r0, #0]	@ 00049e80 0088
.org 0x49e82
	strh r0, [r2, #32]	@ 00049e82 1084
.org 0x49e84
	ldr r0, [pc, #16]	@ 00049e84 0448
.org 0x49e86
	ldrb r0, [r0, #0]	@ 00049e86 0078
.org 0x49e88
	b.n 0x49ec4	@ 00049e88 1ce0
.org 0x49e8a
	.byte 0x00	@ 00049e8a data
.org 0x49e8b
	.byte 0x00	@ 00049e8b data
.org 0x49e8c
	.byte 0x88,0xed,0x02,0x02	@ 00049e8c data
.org 0x49e90
	.byte 0xf8,0x39,0x85,0x08	@ 00049e90 data
.org 0x49e94
	.byte 0xfc,0x36,0x85,0x08	@ 00049e94 data
.org 0x49e98
	.byte 0x04,0x37,0x85,0x08	@ 00049e98 data
.org 0x49e9c
	ldr r0, [pc, #56]	@ 00049e9c 0e48
.org 0x49e9e
	movs r1, #36	@ 00049e9e 2421
.org 0x49ea0
	strb r1, [r2, #9]	@ 00049ea0 5172
.org 0x49ea2
	adds r0, #144	@ 00049ea2 9030
.org 0x49ea4
	ldr r0, [r0, #0]	@ 00049ea4 0068
.org 0x49ea6
	ldr r0, [r0, #0]	@ 00049ea6 0068
.org 0x49ea8
	str r0, [r2, #20]	@ 00049ea8 5061
.org 0x49eaa
	ldrb r1, [r2, #11]	@ 00049eaa d17a
.org 0x49eac
	movs r0, #191	@ 00049eac bf20
.org 0x49eae
	ands r0, r1	@ 00049eae 0840
.org 0x49eb0
	strb r0, [r2, #11]	@ 00049eb0 d072
.org 0x49eb2
	adds r1, r2, #0	@ 00049eb2 111c
.org 0x49eb4
	adds r1, #37	@ 00049eb4 2531
.org 0x49eb6
	movs r0, #16	@ 00049eb6 1020
.org 0x49eb8
	strb r0, [r1, #0]	@ 00049eb8 0870
.org 0x49eba
	ldr r0, [pc, #32]	@ 00049eba 0848
.org 0x49ebc
	ldrh r0, [r0, #2]	@ 00049ebc 4088
.org 0x49ebe
	strh r0, [r2, #32]	@ 00049ebe 1084
.org 0x49ec0
	ldr r0, [pc, #28]	@ 00049ec0 0748
.org 0x49ec2
	ldrb r0, [r0, #1]	@ 00049ec2 4078
.org 0x49ec4
	subs r1, #3	@ 00049ec4 0339
