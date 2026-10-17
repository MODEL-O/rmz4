@ FUN_08127ea0  entry 0x08127ea0  size 224
.thumb
.org 0x127ea0
FUN_08127ea0:
	push {r4, r5, r6, r7, lr}	@ 00127ea0 f0b5
.org 0x127ea2
	mov r7, r8	@ 00127ea2 4746
.org 0x127ea4
	push {r7}	@ 00127ea4 80b4
.org 0x127ea6
	adds r5, r0, #0	@ 00127ea6 051c
.org 0x127ea8
	adds r7, r1, #0	@ 00127ea8 0f1c
.org 0x127eaa
	ldr r1, [r5, #52]	@ 00127eaa 696b
.org 0x127eac
	ldr r0, [pc, #208]	@ 00127eac 3448
.org 0x127eae
	cmp r1, r0	@ 00127eae 8142
.org 0x127eb0
	bne.n 0x127f76	@ 00127eb0 61d1
.org 0x127eb2
	ldrb r0, [r5, #11]	@ 00127eb2 e87a
.org 0x127eb4
	ldrb r2, [r7, #2]	@ 00127eb4 ba78
.org 0x127eb6
	cmp r0, #0	@ 00127eb6 0028
.org 0x127eb8
	beq.n 0x127ee2	@ 00127eb8 13d0
.org 0x127eba
	ldr r0, [r5, #0]	@ 00127eba 2868
.org 0x127ebc
	cmp r0, #0	@ 00127ebc 0028
.org 0x127ebe
	beq.n 0x127ecc	@ 00127ebe 05d0
.org 0x127ec0
	ldr r1, [r5, #44]	@ 00127ec0 e96a
.org 0x127ec2
	movs r0, #64	@ 00127ec2 4020
.org 0x127ec4
	ldrb r1, [r1, #0]	@ 00127ec4 0978
.org 0x127ec6
	ands r0, r1	@ 00127ec6 0840
.org 0x127ec8
	cmp r0, #0	@ 00127ec8 0028
.org 0x127eca
	bne.n 0x127ed8	@ 00127eca 05d1
.org 0x127ecc
	ldr r1, [r5, #4]	@ 00127ecc 6968
.org 0x127ece
	ldrh r0, [r5, #4]	@ 00127ece a888
.org 0x127ed0
	cmp r0, #0	@ 00127ed0 0028
.org 0x127ed2
	beq.n 0x127ee2	@ 00127ed2 06d0
.org 0x127ed4
	cmp r1, #0	@ 00127ed4 0029
.org 0x127ed6
	blt.n 0x127ee2	@ 00127ed6 04db
.org 0x127ed8
	ldrb r0, [r7, #2]	@ 00127ed8 b878
.org 0x127eda
	adds r2, r0, #0	@ 00127eda 021c
.org 0x127edc
	ldrb r0, [r5, #9]	@ 00127edc 687a
.org 0x127ede
	cmp r0, r2	@ 00127ede 9042
.org 0x127ee0
	bhi.n 0x127f76	@ 00127ee0 49d8
.org 0x127ee2
	ldr r0, [r5, #52]	@ 00127ee2 686b
.org 0x127ee4
	adds r0, #1	@ 00127ee4 0130
.org 0x127ee6
	str r0, [r5, #52]	@ 00127ee6 6863
.org 0x127ee8
	movs r1, #0	@ 00127ee8 0021
.org 0x127eea
	str r1, [r5, #4]	@ 00127eea 6960
.org 0x127eec
	str r7, [r5, #0]	@ 00127eec 2f60
.org 0x127eee
	ldr r0, [r7, #4]	@ 00127eee 7868
.org 0x127ef0
	str r0, [r5, #48]	@ 00127ef0 2863
.org 0x127ef2
	strb r2, [r5, #9]	@ 00127ef2 6a72
.org 0x127ef4
	str r1, [r5, #12]	@ 00127ef4 e960
.org 0x127ef6
	movs r0, #150	@ 00127ef6 9620
.org 0x127ef8
	strh r0, [r5, #28]	@ 00127ef8 a883
.org 0x127efa
	strh r0, [r5, #32]	@ 00127efa 2884
.org 0x127efc
	adds r0, #106	@ 00127efc 6a30
.org 0x127efe
	strh r0, [r5, #30]	@ 00127efe e883
.org 0x127f00
	strh r1, [r5, #34]	@ 00127f00 6984
.org 0x127f02
	strh r1, [r5, #36]	@ 00127f02 a984
.org 0x127f04
	movs r6, #0	@ 00127f04 0026
.org 0x127f06
	ldr r4, [r5, #44]	@ 00127f06 ec6a
.org 0x127f08
	ldrb r1, [r7, #0]	@ 00127f08 3978
.org 0x127f0a
	cmp r6, r1	@ 00127f0a 8e42
.org 0x127f0c
	bge.n 0x127f42	@ 00127f0c 19da
.org 0x127f0e
	ldrb r0, [r5, #8]	@ 00127f0e 287a
.org 0x127f10
	cmp r6, r0	@ 00127f10 8642
.org 0x127f12
	bge.n 0x127f62	@ 00127f12 26da
.org 0x127f14
	mov r8, r6	@ 00127f14 b046
.org 0x127f16
	adds r0, r5, #0	@ 00127f16 281c
.org 0x127f18
	adds r1, r4, #0	@ 00127f18 211c
.org 0x127f1a
	bl 0x127388	@ 00127f1a fff735fa
.org 0x127f1e
	movs r0, #192	@ 00127f1e c020
.org 0x127f20
	strb r0, [r4, #0]	@ 00127f20 2070
.org 0x127f22
	mov r1, r8	@ 00127f22 4146
.org 0x127f24
	str r1, [r4, #32]	@ 00127f24 2162
.org 0x127f26
	lsls r1, r6, #2	@ 00127f26 b100
.org 0x127f28
	adds r0, r7, #0	@ 00127f28 381c
.org 0x127f2a
	adds r0, #8	@ 00127f2a 0830
.org 0x127f2c
	adds r0, r0, r1	@ 00127f2c 4018
.org 0x127f2e
	ldr r0, [r0, #0]	@ 00127f2e 0068
.org 0x127f30
	str r0, [r4, #64]	@ 00127f30 2064
.org 0x127f32
	adds r6, #1	@ 00127f32 0136
.org 0x127f34
	adds r4, #80	@ 00127f34 5034
.org 0x127f36
	ldrb r0, [r7, #0]	@ 00127f36 3878
.org 0x127f38
	cmp r6, r0	@ 00127f38 8642
.org 0x127f3a
	bge.n 0x127f42	@ 00127f3a 02da
.org 0x127f3c
	ldrb r1, [r5, #8]	@ 00127f3c 297a
.org 0x127f3e
	cmp r6, r1	@ 00127f3e 8e42
.org 0x127f40
	blt.n 0x127f16	@ 00127f40 e9db
.org 0x127f42
	ldrb r0, [r5, #8]	@ 00127f42 287a
.org 0x127f44
	cmp r6, r0	@ 00127f44 8642
.org 0x127f46
	bge.n 0x127f62	@ 00127f46 0cda
.org 0x127f48
	movs r1, #0	@ 00127f48 0021
.org 0x127f4a
	mov r8, r1	@ 00127f4a 8846
.org 0x127f4c
	adds r0, r5, #0	@ 00127f4c 281c
.org 0x127f4e
	adds r1, r4, #0	@ 00127f4e 211c
.org 0x127f50
	bl 0x127388	@ 00127f50 fff71afa
.org 0x127f54
	mov r0, r8	@ 00127f54 4046
.org 0x127f56
	strb r0, [r4, #0]	@ 00127f56 2070
.org 0x127f58
	adds r6, #1	@ 00127f58 0136
.org 0x127f5a
	adds r4, #80	@ 00127f5a 5034
.org 0x127f5c
	ldrb r1, [r5, #8]	@ 00127f5c 297a
.org 0x127f5e
	cmp r6, r1	@ 00127f5e 8e42
.org 0x127f60
	blt.n 0x127f4c	@ 00127f60 f4db
.org 0x127f62
	movs r0, #128	@ 00127f62 8020
.org 0x127f64
	ldrb r1, [r7, #3]	@ 00127f64 f978
.org 0x127f66
	ands r0, r1	@ 00127f66 0840
.org 0x127f68
	cmp r0, #0	@ 00127f68 0028
.org 0x127f6a
	beq.n 0x127f72	@ 00127f6a 02d0
.org 0x127f6c
	ldrb r0, [r7, #3]	@ 00127f6c f878
.org 0x127f6e
	bl 0x127ca0	@ 00127f6e fff797fe
.org 0x127f72
	ldr r0, [pc, #12]	@ 00127f72 0348
.org 0x127f74
	str r0, [r5, #52]	@ 00127f74 6863
.org 0x127f76
	pop {r3}	@ 00127f76 08bc
.org 0x127f78
	mov r8, r3	@ 00127f78 9846
.org 0x127f7a
	pop {r4, r5, r6, r7}	@ 00127f7a f0bc
.org 0x127f7c
	pop {r0}	@ 00127f7c 01bc
.org 0x127f7e
	bx r0	@ 00127f7e 0047
