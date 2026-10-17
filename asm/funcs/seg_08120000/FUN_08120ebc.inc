@ FUN_08120ebc  entry 0x08120ebc  size 182
.thumb
.org 0x120ebc
FUN_08120ebc:
	push {r4, r5, r6, lr}	@ 00120ebc 70b5
.org 0x120ebe
	mov r6, r9	@ 00120ebe 4e46
.org 0x120ec0
	mov r5, r8	@ 00120ec0 4546
.org 0x120ec2
	push {r5, r6}	@ 00120ec2 60b4
.org 0x120ec4
	sub sp, #4	@ 00120ec4 81b0
.org 0x120ec6
	adds r5, r0, #0	@ 00120ec6 051c
.org 0x120ec8
	movs r4, #0	@ 00120ec8 0024
.org 0x120eca
	strh r4, [r5, #4]	@ 00120eca ac80
.org 0x120ecc
	strh r4, [r5, #6]	@ 00120ecc ec80
.org 0x120ece
	strh r4, [r5, #8]	@ 00120ece 2c81
.org 0x120ed0
	strh r4, [r5, #10]	@ 00120ed0 6c81
.org 0x120ed2
	ldr r0, [pc, #160]	@ 00120ed2 2848
.org 0x120ed4
	str r4, [r0, #12]	@ 00120ed4 c460
.org 0x120ed6
	adds r0, r5, #0	@ 00120ed6 281c
.org 0x120ed8
	bl 0x122690	@ 00120ed8 01f0dafb
.org 0x120edc
	ldr r6, [pc, #152]	@ 00120edc 264e
.org 0x120ede
	ldrh r1, [r6, #0]	@ 00120ede 3188
.org 0x120ee0
	ldr r0, [pc, #152]	@ 00120ee0 2648
.org 0x120ee2
	ands r0, r1	@ 00120ee2 0840
.org 0x120ee4
	ldr r1, [pc, #152]	@ 00120ee4 2649
.org 0x120ee6
	ands r0, r1	@ 00120ee6 0840
.org 0x120ee8
	movs r2, #152	@ 00120ee8 9822
.org 0x120eea
	lsls r2, r2, #5	@ 00120eea 5201
.org 0x120eec
	adds r1, r2, #0	@ 00120eec 111c
.org 0x120eee
	movs r2, #0	@ 00120eee 0022
.org 0x120ef0
	mov r9, r2	@ 00120ef0 9146
.org 0x120ef2
	orrs r0, r1	@ 00120ef2 0843
.org 0x120ef4
	strh r0, [r6, #0]	@ 00120ef4 3080
.org 0x120ef6
	ldr r1, [pc, #140]	@ 00120ef6 2349
.org 0x120ef8
	adds r0, r1, #0	@ 00120ef8 081c
.org 0x120efa
	strh r0, [r6, #6]	@ 00120efa f080
.org 0x120efc
	str r4, [r6, #16]	@ 00120efc 3461
.org 0x120efe
	movs r0, #51	@ 00120efe 3320
.org 0x120f00
	movs r1, #0	@ 00120f00 0021
.org 0x120f02
	bl 0x249c	@ 00120f02 e1f6cbfa
.org 0x120f06
	movs r0, #121	@ 00120f06 7920
.org 0x120f08
	movs r1, #0	@ 00120f08 0021
.org 0x120f0a
	bl 0x249c	@ 00120f0a e1f6c7fa
.org 0x120f0e
	ldr r0, [pc, #120]	@ 00120f0e 1e48
.org 0x120f10
	ldrh r2, [r6, #6]	@ 00120f10 f288
.org 0x120f12
	movs r1, #12	@ 00120f12 0c21
.org 0x120f14
	ands r1, r2	@ 00120f14 1140
.org 0x120f16
	lsls r1, r1, #12	@ 00120f16 0903
.org 0x120f18
	bl 0x1ea4	@ 00120f18 e0f6c4ff
.org 0x120f1c
	ldr r0, [pc, #108]	@ 00120f1c 1b48
.org 0x120f1e
	movs r1, #0	@ 00120f1e 0021
.org 0x120f20
	bl 0x2208	@ 00120f20 e1f672f9
.org 0x120f24
	ldr r2, [pc, #104]	@ 00120f24 1a4a
.org 0x120f26
	adds r2, r2, r5	@ 00120f26 5219
.org 0x120f28
	mov r8, r2	@ 00120f28 9046
.org 0x120f2a
	ldr r1, [pc, #104]	@ 00120f2a 1a49
.org 0x120f2c
	str r4, [sp, #0]	@ 00120f2c 0094
.org 0x120f2e
	mov r0, r8	@ 00120f2e 4046
.org 0x120f30
	movs r2, #35	@ 00120f30 2322
.org 0x120f32
	movs r3, #0	@ 00120f32 0023
.org 0x120f34
	bl 0x27b8	@ 00120f34 e1f640fc
.org 0x120f38
	ldrh r0, [r6, #6]	@ 00120f38 f088
.org 0x120f3a
	movs r1, #248	@ 00120f3a f821
.org 0x120f3c
	lsls r1, r1, #5	@ 00120f3c 4901
.org 0x120f3e
	ands r1, r0	@ 00120f3e 0140
.org 0x120f40
	lsls r1, r1, #3	@ 00120f40 c900
.org 0x120f42
	movs r2, #128	@ 00120f42 8022
.org 0x120f44
	lsls r2, r2, #5	@ 00120f44 5201
.org 0x120f46
	mov r0, r8	@ 00120f46 4046
.org 0x120f48
	bl 0x1f1c	@ 00120f48 e0f6e8ff
.org 0x120f4c
	ldr r1, [pc, #72]	@ 00120f4c 1249
.org 0x120f4e
	adds r0, r5, r1	@ 00120f4e 6818
.org 0x120f50
	mov r2, r9	@ 00120f50 4a46
.org 0x120f52
	strb r2, [r0, #2]	@ 00120f52 8270
.org 0x120f54
	strb r2, [r0, #12]	@ 00120f54 0273
.org 0x120f56
	movs r0, #1	@ 00120f56 0120
.org 0x120f58
	strb r0, [r5, #1]	@ 00120f58 6870
.org 0x120f5a
	strb r2, [r5, #3]	@ 00120f5a ea70
.org 0x120f5c
	strb r2, [r5, #2]	@ 00120f5c aa70
.org 0x120f5e
	adds r0, r5, #0	@ 00120f5e 281c
.org 0x120f60
	bl 0x120f9c	@ 00120f60 00f01cf8
.org 0x120f64
	add sp, #4	@ 00120f64 01b0
.org 0x120f66
	pop {r3, r4}	@ 00120f66 18bc
.org 0x120f68
	mov r8, r3	@ 00120f68 9846
.org 0x120f6a
	mov r9, r4	@ 00120f6a a146
.org 0x120f6c
	pop {r4, r5, r6}	@ 00120f6c 70bc
.org 0x120f6e
	pop {r0}	@ 00120f6e 01bc
.org 0x120f70
	bx r0	@ 00120f70 0047
