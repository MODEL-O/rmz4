@ FUN_08063ea0  entry 0x08063ea0  size 162
.thumb
.org 0x63ea0
FUN_08063ea0:
	push {r4, r5, r6, lr}	@ 00063ea0 70b5
.org 0x63ea2
	sub sp, #12	@ 00063ea2 83b0
.org 0x63ea4
	adds r6, r0, #0	@ 00063ea4 061c
.org 0x63ea6
	ldrb r0, [r6, #15]	@ 00063ea6 f07b
.org 0x63ea8
	cmp r0, #0	@ 00063ea8 0028
.org 0x63eaa
	bne.n 0x63eba	@ 00063eaa 06d1
.org 0x63eac
	adds r0, r6, #0	@ 00063eac 301c
.org 0x63eae
	movs r1, #16	@ 00063eae 1021
.org 0x63eb0
	bl 0x65a94	@ 00063eb0 01f0f0fd
.org 0x63eb4
	ldrb r0, [r6, #15]	@ 00063eb4 f07b
.org 0x63eb6
	adds r0, #1	@ 00063eb6 0130
.org 0x63eb8
	strb r0, [r6, #15]	@ 00063eb8 f073
.org 0x63eba
	adds r0, r6, #0	@ 00063eba 301c
.org 0x63ebc
	bl 0x1cff0	@ 00063ebc b9f798f8
.org 0x63ec0
	adds r0, r6, #0	@ 00063ec0 301c
.org 0x63ec2
	adds r0, #116	@ 00063ec2 7430
.org 0x63ec4
	ldr r4, [pc, #124]	@ 00063ec4 1f4c
.org 0x63ec6
	ldr r3, [pc, #128]	@ 00063ec6 204b
.org 0x63ec8
	adds r1, r6, #0	@ 00063ec8 311c
.org 0x63eca
	adds r1, #180	@ 00063eca b431
.org 0x63ecc
	ldrb r2, [r1, #0]	@ 00063ecc 0a78
.org 0x63ece
	lsls r1, r2, #1	@ 00063ece 5100
.org 0x63ed0
	adds r1, r1, r3	@ 00063ed0 c918
.org 0x63ed2
	ldrh r1, [r1, #0]	@ 00063ed2 0988
.org 0x63ed4
	lsls r1, r1, #2	@ 00063ed4 8900
.org 0x63ed6
	adds r1, r1, r4	@ 00063ed6 0919
.org 0x63ed8
	adds r3, r6, #0	@ 00063ed8 331c
.org 0x63eda
	adds r3, #113	@ 00063eda 7133
.org 0x63edc
	movs r5, #0	@ 00063edc 0025
.org 0x63ede
	ldrsb r5, [r3, r5]	@ 00063ede 5d57
.org 0x63ee0
	ldr r1, [r1, #0]	@ 00063ee0 0968
.org 0x63ee2
	lsls r3, r5, #2	@ 00063ee2 ab00
.org 0x63ee4
	adds r3, r3, r1	@ 00063ee4 5b18
.org 0x63ee6
	ldr r4, [pc, #100]	@ 00063ee6 194c
.org 0x63ee8
	adds r1, r6, #0	@ 00063ee8 311c
.org 0x63eea
	adds r1, #181	@ 00063eea b531
.org 0x63eec
	ldrb r1, [r1, #0]	@ 00063eec 0978
.org 0x63eee
	lsls r1, r1, #2	@ 00063eee 8900
.org 0x63ef0
	adds r1, r1, r4	@ 00063ef0 0919
.org 0x63ef2
	ldr r1, [r1, #0]	@ 00063ef2 0968
.org 0x63ef4
	lsls r2, r2, #2	@ 00063ef4 9200
.org 0x63ef6
	adds r2, r2, r1	@ 00063ef6 5218
.org 0x63ef8
	ldr r1, [r2, #0]	@ 00063ef8 1168
.org 0x63efa
	adds r1, r1, r5	@ 00063efa 4919
.org 0x63efc
	ldrb r1, [r1, #0]	@ 00063efc 0978
.org 0x63efe
	lsls r2, r1, #1	@ 00063efe 4a00
.org 0x63f00
	adds r2, r2, r1	@ 00063f00 5218
.org 0x63f02
	lsls r2, r2, #3	@ 00063f02 d200
.org 0x63f04
	ldr r1, [r3, #0]	@ 00063f04 1968
.org 0x63f06
	adds r1, r1, r2	@ 00063f06 8918
.org 0x63f08
	bl 0x5784	@ 00063f08 a1f73cfc
.org 0x63f0c
	adds r0, r6, #0	@ 00063f0c 301c
.org 0x63f0e
	adds r0, #115	@ 00063f0e 7330
.org 0x63f10
	ldrb r0, [r0, #0]	@ 00063f10 0078
.org 0x63f12
	cmp r0, #3	@ 00063f12 0328
.org 0x63f14
	bne.n 0x63f3a	@ 00063f14 11d1
.org 0x63f16
	mov r1, sp	@ 00063f16 6946
.org 0x63f18
	ldr r0, [pc, #52]	@ 00063f18 0d48
.org 0x63f1a
	ldmia r0!, {r2, r3, r4}	@ 00063f1a 1cc8
.org 0x63f1c
	stmia r1!, {r2, r3, r4}	@ 00063f1c 1cc1
.org 0x63f1e
	adds r0, r6, #0	@ 00063f1e 301c
.org 0x63f20
	bl 0x66160	@ 00063f20 02f01ef9
.org 0x63f24
	lsls r0, r0, #2	@ 00063f24 8000
.org 0x63f26
	add r0, sp	@ 00063f26 6844
.org 0x63f28
	ldr r1, [r0, #0]	@ 00063f28 0168
.org 0x63f2a
	adds r0, r6, #0	@ 00063f2a 301c
.org 0x63f2c
	adds r0, #224	@ 00063f2c e030
.org 0x63f2e
	movs r2, #0	@ 00063f2e 0022
.org 0x63f30
	strb r1, [r0, #0]	@ 00063f30 0170
.org 0x63f32
	movs r0, #13	@ 00063f32 0d20
.org 0x63f34
	strb r0, [r6, #13]	@ 00063f34 7073
.org 0x63f36
	strb r2, [r6, #14]	@ 00063f36 b273
.org 0x63f38
	strb r2, [r6, #15]	@ 00063f38 f273
.org 0x63f3a
	add sp, #12	@ 00063f3a 03b0
.org 0x63f3c
	pop {r4, r5, r6}	@ 00063f3c 70bc
.org 0x63f3e
	pop {r0}	@ 00063f3e 01bc
.org 0x63f40
	bx r0	@ 00063f40 0047
