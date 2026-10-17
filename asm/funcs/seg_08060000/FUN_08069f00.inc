@ FUN_08069f00  entry 0x08069f00  size 282
.thumb
.org 0x69f00
FUN_08069f00:
	push {r4, r5, r6, r7, lr}	@ 00069f00 f0b5
.org 0x69f02
	mov r7, sl	@ 00069f02 5746
.org 0x69f04
	mov r6, r9	@ 00069f04 4e46
.org 0x69f06
	mov r5, r8	@ 00069f06 4546
.org 0x69f08
	push {r5, r6, r7}	@ 00069f08 e0b4
.org 0x69f0a
	sub sp, #56	@ 00069f0a 8eb0
.org 0x69f0c
	mov r8, r0	@ 00069f0c 8046
.org 0x69f0e
	mov r9, r1	@ 00069f0e 8946
.org 0x69f10
	mov sl, r2	@ 00069f10 9246
.org 0x69f12
	lsls r4, r3, #24	@ 00069f12 1c06
.org 0x69f14
	lsrs r0, r4, #24	@ 00069f14 200e
.org 0x69f16
	str r0, [sp, #52]	@ 00069f16 0d90
.org 0x69f18
	ldr r1, [pc, #256]	@ 00069f18 4049
.org 0x69f1a
	mov r0, sp	@ 00069f1a 6846
.org 0x69f1c
	movs r2, #4	@ 00069f1c 0422
.org 0x69f1e
	bl 0x129258	@ 00069f1e bff09bf9
.org 0x69f22
	mov r1, sp	@ 00069f22 6946
.org 0x69f24
	adds r1, #4	@ 00069f24 0431
.org 0x69f26
	str r1, [sp, #20]	@ 00069f26 0591
.org 0x69f28
	ldr r1, [pc, #244]	@ 00069f28 3d49
.org 0x69f2a
	ldr r0, [sp, #20]	@ 00069f2a 0598
.org 0x69f2c
	movs r2, #16	@ 00069f2c 1022
.org 0x69f2e
	bl 0x129258	@ 00069f2e bff093f9
.org 0x69f32
	mov r2, r8	@ 00069f32 4246
.org 0x69f34
	ldrb r0, [r2, #10]	@ 00069f34 907a
.org 0x69f36
	lsrs r3, r0, #4	@ 00069f36 0309
.org 0x69f38
	movs r0, #1	@ 00069f38 0120
.org 0x69f3a
	ands r3, r0	@ 00069f3a 0340
.org 0x69f3c
	movs r7, #0	@ 00069f3c 0027
.org 0x69f3e
	str r7, [sp, #48]	@ 00069f3e 0c97
.org 0x69f40
	lsrs r4, r4, #30	@ 00069f40 a40f
.org 0x69f42
	mov ip, r4	@ 00069f42 a446
.org 0x69f44
	ldr r4, [pc, #220]	@ 00069f44 374c
.org 0x69f46
	ldr r0, [sp, #52]	@ 00069f46 0d98
.org 0x69f48
	adds r0, #64	@ 00069f48 4030
.org 0x69f4a
	lsls r0, r0, #24	@ 00069f4a 0006
.org 0x69f4c
	lsrs r0, r0, #23	@ 00069f4c c00d
.org 0x69f4e
	adds r0, r0, r4	@ 00069f4e 0019
.org 0x69f50
	movs r1, #0	@ 00069f50 0021
.org 0x69f52
	ldrsh r2, [r0, r1]	@ 00069f52 425e
.org 0x69f54
	mov r1, sl	@ 00069f54 5146
.org 0x69f56
	muls r1, r2	@ 00069f56 5143
.org 0x69f58
	cmp r1, #0	@ 00069f58 0029
.org 0x69f5a
	bge.n 0x69f5e	@ 00069f5a 00da
.org 0x69f5c
	adds r1, #255	@ 00069f5c ff31
.org 0x69f5e
	asrs r1, r1, #8	@ 00069f5e 0912
.org 0x69f60
	mov r7, r9	@ 00069f60 4f46
.org 0x69f62
	ldr r0, [r7, #0]	@ 00069f62 3868
.org 0x69f64
	adds r5, r0, r1	@ 00069f64 4518
.org 0x69f66
	ldr r1, [sp, #52]	@ 00069f66 0d99
.org 0x69f68
	lsls r0, r1, #1	@ 00069f68 4800
.org 0x69f6a
	adds r0, r0, r4	@ 00069f6a 0019
.org 0x69f6c
	movs r7, #0	@ 00069f6c 0027
.org 0x69f6e
	ldrsh r4, [r0, r7]	@ 00069f6e c45f
.org 0x69f70
	mov r1, sl	@ 00069f70 5146
.org 0x69f72
	muls r1, r4	@ 00069f72 6143
.org 0x69f74
	cmp r1, #0	@ 00069f74 0029
.org 0x69f76
	bge.n 0x69f7a	@ 00069f76 00da
.org 0x69f78
	adds r1, #255	@ 00069f78 ff31
.org 0x69f7a
	asrs r1, r1, #8	@ 00069f7a 0912
.org 0x69f7c
	mov r7, r9	@ 00069f7c 4f46
.org 0x69f7e
	ldr r0, [r7, #4]	@ 00069f7e 7868
.org 0x69f80
	adds r6, r0, r1	@ 00069f80 4618
.org 0x69f82
	lsls r0, r2, #1	@ 00069f82 5000
.org 0x69f84
	adds r0, r0, r2	@ 00069f84 8018
.org 0x69f86
	lsls r0, r0, #3	@ 00069f86 c000
.org 0x69f88
	str r0, [sp, #24]	@ 00069f88 0690
.org 0x69f8a
	lsls r0, r4, #1	@ 00069f8a 6000
.org 0x69f8c
	adds r0, r0, r4	@ 00069f8c 0019
.org 0x69f8e
	lsls r0, r0, #3	@ 00069f8e c000
.org 0x69f90
	str r0, [sp, #28]	@ 00069f90 0790
.org 0x69f92
	ldr r0, [sp, #24]	@ 00069f92 0698
.org 0x69f94
	adds r0, r0, r5	@ 00069f94 4019
.org 0x69f96
	str r0, [sp, #32]	@ 00069f96 0890
.org 0x69f98
	ldr r1, [sp, #28]	@ 00069f98 0799
.org 0x69f9a
	adds r1, r1, r6	@ 00069f9a 8919
.org 0x69f9c
	str r1, [sp, #36]	@ 00069f9c 0991
.org 0x69f9e
	lsls r1, r3, #1	@ 00069f9e 5900
.org 0x69fa0
	mov r2, ip	@ 00069fa0 6246
.org 0x69fa2
	lsls r0, r2, #2	@ 00069fa2 9000
.org 0x69fa4
	adds r1, r1, r0	@ 00069fa4 0918
.org 0x69fa6
	ldr r7, [sp, #20]	@ 00069fa6 059f
.org 0x69fa8
	adds r0, r7, r1	@ 00069fa8 7818
.org 0x69faa
	ldrb r4, [r0, #0]	@ 00069faa 0478
.org 0x69fac
	mov r0, sp	@ 00069fac 6846
.org 0x69fae
	adds r0, #5	@ 00069fae 0530
.org 0x69fb0
	adds r0, r0, r1	@ 00069fb0 4018
.org 0x69fb2
	ldrb r7, [r0, #0]	@ 00069fb2 0778
.org 0x69fb4
	mov r1, sp	@ 00069fb4 6946
.org 0x69fb6
	adds r0, r1, r4	@ 00069fb6 0819
.org 0x69fb8
	ldrb r1, [r0, #0]	@ 00069fb8 0178
.org 0x69fba
	mov r0, r8	@ 00069fba 4046
.org 0x69fbc
	bl 0x6a7c8	@ 00069fbc 00f004fc
.org 0x69fc0
	str r0, [sp, #40]	@ 00069fc0 0a90
.org 0x69fc2
	mov r0, sp	@ 00069fc2 6846
.org 0x69fc4
	adds r0, #2	@ 00069fc4 0230
.org 0x69fc6
	adds r0, r0, r7	@ 00069fc6 c019
.org 0x69fc8
	ldrb r1, [r0, #0]	@ 00069fc8 0178
.org 0x69fca
	mov r0, r8	@ 00069fca 4046
.org 0x69fcc
	bl 0x6a7c8	@ 00069fcc 00f0fcfb
.org 0x69fd0
	str r0, [sp, #44]	@ 00069fd0 0b90
.org 0x69fd2
	ldr r2, [sp, #32]	@ 00069fd2 089a
.org 0x69fd4
	ldr r1, [sp, #40]	@ 00069fd4 0a99
.org 0x69fd6
	subs r0, r2, r1	@ 00069fd6 501a
.org 0x69fd8
	lsls r4, r4, #1	@ 00069fd8 6400
.org 0x69fda
	subs r4, #1	@ 00069fda 013c
.org 0x69fdc
	muls r0, r4	@ 00069fdc 6043
.org 0x69fde
	cmp r0, #0	@ 00069fde 0028
.org 0x69fe0
	blt.n 0x69fea	@ 00069fe0 03db
.org 0x69fe2
	ldr r2, [sp, #24]	@ 00069fe2 069a
.org 0x69fe4
	subs r5, r1, r2	@ 00069fe4 8d1a
.org 0x69fe6
	movs r0, #1	@ 00069fe6 0120
.org 0x69fe8
	str r0, [sp, #48]	@ 00069fe8 0c90
.org 0x69fea
	ldr r1, [sp, #36]	@ 00069fea 0999
.org 0x69fec
	ldr r2, [sp, #44]	@ 00069fec 0b9a
.org 0x69fee
	subs r0, r1, r2	@ 00069fee 881a
.org 0x69ff0
	lsls r1, r7, #1	@ 00069ff0 7900
.org 0x69ff2
	subs r1, #1	@ 00069ff2 0139
.org 0x69ff4
	muls r0, r1	@ 00069ff4 4843
.org 0x69ff6
	cmp r0, #0	@ 00069ff6 0028
.org 0x69ff8
	blt.n 0x6a002	@ 00069ff8 03db
.org 0x69ffa
	ldr r7, [sp, #28]	@ 00069ffa 079f
.org 0x69ffc
	subs r6, r2, r7	@ 00069ffc d61b
.org 0x69ffe
	movs r0, #1	@ 00069ffe 0120
.org 0x6a000
	str r0, [sp, #48]	@ 0006a000 0c90
.org 0x6a002
	mov r1, r9	@ 0006a002 4946
.org 0x6a004
	str r5, [r1, #0]	@ 0006a004 0d60
.org 0x6a006
	str r6, [r1, #4]	@ 0006a006 4e60
.org 0x6a008
	ldr r0, [sp, #48]	@ 0006a008 0c98
.org 0x6a00a
	add sp, #56	@ 0006a00a 0eb0
.org 0x6a00c
	pop {r3, r4, r5}	@ 0006a00c 38bc
.org 0x6a00e
	mov r8, r3	@ 0006a00e 9846
.org 0x6a010
	mov r9, r4	@ 0006a010 a146
.org 0x6a012
	mov sl, r5	@ 0006a012 aa46
.org 0x6a014
	pop {r4, r5, r6, r7}	@ 0006a014 f0bc
.org 0x6a016
	pop {r1}	@ 0006a016 02bc
.org 0x6a018
	bx r1	@ 0006a018 0847
