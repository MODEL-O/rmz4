@ FUN_080c0f50  entry 0x080c0f50  size 278
.thumb
.org 0xc0f50
FUN_080c0f50:
	push {r4, r5, r6, r7, lr}	@ 000c0f50 f0b5
.org 0xc0f52
	mov r7, r8	@ 000c0f52 4746
.org 0xc0f54
	push {r7}	@ 000c0f54 80b4
.org 0xc0f56
	sub sp, #8	@ 000c0f56 82b0
.org 0xc0f58
	adds r4, r0, #0	@ 000c0f58 041c
.org 0xc0f5a
	ldr r0, [r4, #40]	@ 000c0f5a a06a
.org 0xc0f5c
	mov r8, r0	@ 000c0f5c 8046
.org 0xc0f5e
	ldrb r5, [r4, #15]	@ 000c0f5e e57b
.org 0xc0f60
	cmp r5, #0	@ 000c0f60 002d
.org 0xc0f62
	bne.n 0xc0f9e	@ 000c0f62 1cd1
.org 0xc0f64
	adds r0, r4, #0	@ 000c0f64 201c
.org 0xc0f66
	adds r0, #116	@ 000c0f66 7430
.org 0xc0f68
	ldr r1, [pc, #36]	@ 000c0f68 0949
.org 0xc0f6a
	bl 0x5784	@ 000c0f6a 44f70bfc
.org 0xc0f6e
	movs r1, #232	@ 000c0f6e e821
.org 0xc0f70
	lsls r1, r1, #6	@ 000c0f70 8901
.org 0xc0f72
	adds r0, r4, #0	@ 000c0f72 201c
.org 0xc0f74
	bl 0x1cf00	@ 000c0f74 5bf7c4ff
.org 0xc0f78
	ldr r1, [r4, #84]	@ 000c0f78 616d
.org 0xc0f7a
	ldr r2, [r4, #88]	@ 000c0f7a a26d
.org 0xc0f7c
	adds r0, r1, #0	@ 000c0f7c 081c
.org 0xc0f7e
	adds r1, r2, #0	@ 000c0f7e 111c
.org 0xc0f80
	bl 0x7c7c	@ 000c0f80 46f77cfe
.org 0xc0f84
	lsls r0, r0, #16	@ 000c0f84 0004
.org 0xc0f86
	cmp r0, #0	@ 000c0f86 0028
.org 0xc0f88
	beq.n 0xc0f94	@ 000c0f88 04d0
.org 0xc0f8a
	strb r5, [r4, #18]	@ 000c0f8a a574
.org 0xc0f8c
	b.n 0xc0f98	@ 000c0f8c 04e0
.org 0xc0f8e
	.byte 0x00	@ 000c0f8e data
.org 0xc0f8f
	.byte 0x00	@ 000c0f8f data
.org 0xc0f90
	.byte 0xcc,0x51,0x86,0x08	@ 000c0f90 data
.org 0xc0f94
	movs r0, #1	@ 000c0f94 0120
.org 0xc0f96
	strb r0, [r4, #18]	@ 000c0f96 a074
.org 0xc0f98
	ldrb r0, [r4, #15]	@ 000c0f98 e07b
.org 0xc0f9a
	adds r0, #1	@ 000c0f9a 0130
.org 0xc0f9c
	strb r0, [r4, #15]	@ 000c0f9c e073
.org 0xc0f9e
	adds r0, r4, #0	@ 000c0f9e 201c
.org 0xc0fa0
	bl 0x1cff0	@ 000c0fa0 5cf726f8
.org 0xc0fa4
	ldr r1, [r4, #84]	@ 000c0fa4 616d
.org 0xc0fa6
	ldr r0, [r4, #92]	@ 000c0fa6 e06d
.org 0xc0fa8
	adds r5, r1, r0	@ 000c0fa8 0d18
.org 0xc0faa
	str r5, [sp, #0]	@ 000c0faa 0095
.org 0xc0fac
	ldr r1, [r4, #88]	@ 000c0fac a16d
.org 0xc0fae
	ldr r0, [r4, #96]	@ 000c0fae 206e
.org 0xc0fb0
	adds r7, r1, r0	@ 000c0fb0 0f18
.org 0xc0fb2
	str r7, [sp, #4]	@ 000c0fb2 0197
.org 0xc0fb4
	ldrb r0, [r4, #18]	@ 000c0fb4 a07c
.org 0xc0fb6
	cmp r0, #0	@ 000c0fb6 0028
.org 0xc0fb8
	beq.n 0xc0fee	@ 000c0fb8 19d0
.org 0xc0fba
	adds r0, r5, #0	@ 000c0fba 281c
.org 0xc0fbc
	bl 0x7c7c	@ 000c0fbc 46f75efe
.org 0xc0fc0
	lsls r0, r0, #16	@ 000c0fc0 0004
.org 0xc0fc2
	lsrs r6, r0, #16	@ 000c0fc2 060c
.org 0xc0fc4
	cmp r6, #0	@ 000c0fc4 002e
.org 0xc0fc6
	beq.n 0xc0fcc	@ 000c0fc6 01d0
.org 0xc0fc8
	movs r0, #0	@ 000c0fc8 0020
.org 0xc0fca
	b.n 0xc0ffe	@ 000c0fca 18e0
.org 0xc0fcc
	adds r0, r5, #0	@ 000c0fcc 281c
.org 0xc0fce
	adds r1, r7, #0	@ 000c0fce 391c
.org 0xc0fd0
	bl 0x7c7c	@ 000c0fd0 46f754fe
.org 0xc0fd4
	lsls r0, r0, #16	@ 000c0fd4 0004
.org 0xc0fd6
	cmp r0, #0	@ 000c0fd6 0028
.org 0xc0fd8
	beq.n 0xc1000	@ 000c0fd8 12d0
.org 0xc0fda
	adds r0, r5, #0	@ 000c0fda 281c
.org 0xc0fdc
	adds r1, r7, #0	@ 000c0fdc 391c
.org 0xc0fde
	bl 0x8534	@ 000c0fde 47f7a9fa
.org 0xc0fe2
	str r0, [sp, #4]	@ 000c0fe2 0190
.org 0xc0fe4
	movs r0, #1	@ 000c0fe4 0120
.org 0xc0fe6
	strb r0, [r4, #13]	@ 000c0fe6 6073
.org 0xc0fe8
	strb r6, [r4, #14]	@ 000c0fe8 a673
.org 0xc0fea
	strb r6, [r4, #15]	@ 000c0fea e673
.org 0xc0fec
	b.n 0xc1000	@ 000c0fec 08e0
.org 0xc0fee
	adds r0, r5, #0	@ 000c0fee 281c
.org 0xc0ff0
	adds r1, r7, #0	@ 000c0ff0 391c
.org 0xc0ff2
	bl 0x7c7c	@ 000c0ff2 46f743fe
.org 0xc0ff6
	lsls r0, r0, #16	@ 000c0ff6 0004
.org 0xc0ff8
	cmp r0, #0	@ 000c0ff8 0028
.org 0xc0ffa
	bne.n 0xc1000	@ 000c0ffa 01d1
.org 0xc0ffc
	movs r0, #1	@ 000c0ffc 0120
.org 0xc0ffe
	strb r0, [r4, #18]	@ 000c0ffe a074
.org 0xc1000
	ldr r0, [sp, #0]	@ 000c1000 0098
.org 0xc1002
	ldr r1, [sp, #4]	@ 000c1002 0199
.org 0xc1004
	str r0, [r4, #84]	@ 000c1004 6065
.org 0xc1006
	str r1, [r4, #88]	@ 000c1006 a165
.org 0xc1008
	mov r0, r8	@ 000c1008 4046
.org 0xc100a
	bl 0x59be8	@ 000c100a 98f7edfd
.org 0xc100e
	ldr r1, [pc, #92]	@ 000c100e 1749
.org 0xc1010
	adds r0, r0, r1	@ 000c1010 4018
.org 0xc1012
	ldr r1, [r4, #84]	@ 000c1012 616d
.org 0xc1014
	cmp r1, r0	@ 000c1014 8142
.org 0xc1016
	blt.n 0xc1048	@ 000c1016 17db
.org 0xc1018
	mov r0, r8	@ 000c1018 4046
.org 0xc101a
	bl 0x59bf4	@ 000c101a 98f7ebfd
.org 0xc101e
	movs r5, #192	@ 000c101e c025
.org 0xc1020
	lsls r5, r5, #6	@ 000c1020 ad01
.org 0xc1022
	adds r0, r0, r5	@ 000c1022 4019
.org 0xc1024
	ldr r1, [r4, #84]	@ 000c1024 616d
.org 0xc1026
	cmp r1, r0	@ 000c1026 8142
.org 0xc1028
	bgt.n 0xc1048	@ 000c1028 0edc
.org 0xc102a
	mov r0, r8	@ 000c102a 4046
.org 0xc102c
	bl 0x59c00	@ 000c102c 98f7e8fd
.org 0xc1030
	ldr r1, [pc, #56]	@ 000c1030 0e49
.org 0xc1032
	adds r0, r0, r1	@ 000c1032 4018
.org 0xc1034
	ldr r1, [r4, #88]	@ 000c1034 a16d
.org 0xc1036
	cmp r1, r0	@ 000c1036 8142
.org 0xc1038
	blt.n 0xc1048	@ 000c1038 06db
.org 0xc103a
	mov r0, r8	@ 000c103a 4046
.org 0xc103c
	bl 0x59c0c	@ 000c103c 98f7e6fd
.org 0xc1040
	adds r0, r0, r5	@ 000c1040 4019
.org 0xc1042
	ldr r1, [r4, #88]	@ 000c1042 a16d
.org 0xc1044
	cmp r1, r0	@ 000c1044 8142
.org 0xc1046
	ble.n 0xc1060	@ 000c1046 0bdd
.org 0xc1048
	ldr r1, [pc, #36]	@ 000c1048 0949
.org 0xc104a
	ldrb r0, [r4, #9]	@ 000c104a 607a
.org 0xc104c
	lsls r0, r0, #2	@ 000c104c 8000
.org 0xc104e
	adds r0, r0, r1	@ 000c104e 4018
.org 0xc1050
	movs r1, #2	@ 000c1050 0221
.org 0xc1052
	str r1, [r4, #12]	@ 000c1052 e160
.org 0xc1054
	ldr r0, [r0, #0]	@ 000c1054 0068
.org 0xc1056
	ldr r0, [r0, #8]	@ 000c1056 8068
.org 0xc1058
	str r0, [r4, #20]	@ 000c1058 6061
.org 0xc105a
	adds r0, r4, #0	@ 000c105a 201c
.org 0xc105c
	bl 0xc1370	@ 000c105c 00f088f9
.org 0xc1060
	add sp, #8	@ 000c1060 02b0
.org 0xc1062
	pop {r3}	@ 000c1062 08bc
.org 0xc1064
	mov r8, r3	@ 000c1064 9846
