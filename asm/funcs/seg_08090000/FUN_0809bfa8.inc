@ FUN_0809bfa8  entry 0x0809bfa8  size 198
.thumb
.org 0x9bfa8
FUN_0809bfa8:
	push {r4, r5, r6, lr}	@ 0009bfa8 70b5
.org 0x9bfaa
	sub sp, #4	@ 0009bfaa 81b0
.org 0x9bfac
	adds r4, r0, #0	@ 0009bfac 041c
.org 0x9bfae
	ldr r1, [pc, #64]	@ 0009bfae 1049
.org 0x9bfb0
	mov r0, sp	@ 0009bfb0 6846
.org 0x9bfb2
	movs r2, #4	@ 0009bfb2 0422
.org 0x9bfb4
	bl 0x129258	@ 0009bfb4 8df050f9
.org 0x9bfb8
	ldrb r6, [r4, #17]	@ 0009bfb8 667c
.org 0x9bfba
	ldrb r0, [r4, #15]	@ 0009bfba e07b
.org 0x9bfbc
	cmp r0, #0	@ 0009bfbc 0028
.org 0x9bfbe
	bne.n 0x9c010	@ 0009bfbe 27d1
.org 0x9bfc0
	ldr r1, [pc, #48]	@ 0009bfc0 0c49
.org 0x9bfc2
	lsls r2, r6, #3	@ 0009bfc2 f200
.org 0x9bfc4
	adds r0, r2, r1	@ 0009bfc4 5018
.org 0x9bfc6
	ldr r0, [r0, #0]	@ 0009bfc6 0068
.org 0x9bfc8
	negs r3, r0	@ 0009bfc8 4342
.org 0x9bfca
	str r3, [r4, #92]	@ 0009bfca e365
.org 0x9bfcc
	adds r1, #4	@ 0009bfcc 0431
.org 0x9bfce
	adds r2, r2, r1	@ 0009bfce 5218
.org 0x9bfd0
	ldr r0, [r2, #0]	@ 0009bfd0 1068
.org 0x9bfd2
	negs r5, r0	@ 0009bfd2 4542
.org 0x9bfd4
	str r5, [r4, #96]	@ 0009bfd4 2566
.org 0x9bfd6
	adds r0, r4, #0	@ 0009bfd6 201c
.org 0x9bfd8
	adds r0, #180	@ 0009bfd8 b430
.org 0x9bfda
	ldr r1, [r0, #0]	@ 0009bfda 0168
.org 0x9bfdc
	str r1, [r4, #100]	@ 0009bfdc 6166
.org 0x9bfde
	adds r0, #4	@ 0009bfde 0430
.org 0x9bfe0
	ldr r2, [r0, #0]	@ 0009bfe0 0268
.org 0x9bfe2
	str r2, [r4, #104]	@ 0009bfe2 a266
.org 0x9bfe4
	cmp r3, #0	@ 0009bfe4 002b
.org 0x9bfe6
	beq.n 0x9bff8	@ 0009bfe6 07d0
.org 0x9bfe8
	ldr r0, [r4, #84]	@ 0009bfe8 606d
.org 0x9bfea
	subs r0, r1, r0	@ 0009bfea 081a
.org 0x9bfec
	adds r1, r3, #0	@ 0009bfec 191c
.org 0x9bfee
	b.n 0x9bffe	@ 0009bfee 06e0
.org 0x9bff0
	.byte 0x98,0x9c,0x12,0x08	@ 0009bff0 data
.org 0x9bff4
	.byte 0x70,0x13,0x86,0x08	@ 0009bff4 data
.org 0x9bff8
	ldr r0, [r4, #88]	@ 0009bff8 a06d
.org 0x9bffa
	subs r0, r2, r0	@ 0009bffa 101a
.org 0x9bffc
	adds r1, r5, #0	@ 0009bffc 291c
.org 0x9bffe
	bl 0x128fb8	@ 0009bffe 8cf0dbff
.org 0x9c002
	strb r0, [r4, #18]	@ 0009c002 a074
.org 0x9c004
	ldrb r0, [r4, #18]	@ 0009c004 a07c
.org 0x9c006
	lsls r0, r0, #1	@ 0009c006 4000
.org 0x9c008
	strb r0, [r4, #18]	@ 0009c008 a074
.org 0x9c00a
	ldrb r0, [r4, #15]	@ 0009c00a e07b
.org 0x9c00c
	adds r0, #1	@ 0009c00c 0130
.org 0x9c00e
	strb r0, [r4, #15]	@ 0009c00e e073
.org 0x9c010
	adds r0, r4, #0	@ 0009c010 201c
.org 0x9c012
	bl 0x1cff0	@ 0009c012 80f7edff
.org 0x9c016
	ldrb r0, [r4, #18]	@ 0009c016 a07c
.org 0x9c018
	cmp r0, #0	@ 0009c018 0028
.org 0x9c01a
	beq.n 0x9c020	@ 0009c01a 01d0
.org 0x9c01c
	subs r0, #1	@ 0009c01c 0138
.org 0x9c01e
	strb r0, [r4, #18]	@ 0009c01e a074
.org 0x9c020
	adds r0, r4, #0	@ 0009c020 201c
.org 0x9c022
	adds r0, #116	@ 0009c022 7430
.org 0x9c024
	ldr r3, [pc, #80]	@ 0009c024 144b
.org 0x9c026
	mov r2, sp	@ 0009c026 6a46
.org 0x9c028
	adds r1, r2, r6	@ 0009c028 9119
.org 0x9c02a
	ldrb r2, [r1, #0]	@ 0009c02a 0a78
.org 0x9c02c
	lsls r2, r2, #2	@ 0009c02c 9200
.org 0x9c02e
	adds r2, r2, r3	@ 0009c02e d218
.org 0x9c030
	adds r1, r4, #0	@ 0009c030 211c
.org 0x9c032
	adds r1, #113	@ 0009c032 7131
.org 0x9c034
	ldrb r1, [r1, #0]	@ 0009c034 0978
.org 0x9c036
	lsls r1, r1, #24	@ 0009c036 0906
.org 0x9c038
	asrs r1, r1, #24	@ 0009c038 0916
.org 0x9c03a
	ldr r2, [r2, #0]	@ 0009c03a 1268
.org 0x9c03c
	lsls r1, r1, #2	@ 0009c03c 8900
.org 0x9c03e
	adds r1, r1, r2	@ 0009c03e 8918
.org 0x9c040
	ldr r1, [r1, #0]	@ 0009c040 0968
.org 0x9c042
	bl 0x5784	@ 0009c042 69f79ffb
.org 0x9c046
	ldrb r1, [r4, #18]	@ 0009c046 a17c
.org 0x9c048
	lsrs r1, r1, #1	@ 0009c048 4908
.org 0x9c04a
	ldr r0, [r4, #92]	@ 0009c04a e06d
.org 0x9c04c
	adds r2, r0, #0	@ 0009c04c 021c
.org 0x9c04e
	muls r2, r1	@ 0009c04e 4a43
.org 0x9c050
	ldr r0, [r4, #100]	@ 0009c050 606e
.org 0x9c052
	subs r0, r0, r2	@ 0009c052 801a
.org 0x9c054
	str r0, [r4, #84]	@ 0009c054 6065
.org 0x9c056
	ldr r0, [r4, #96]	@ 0009c056 206e
.org 0x9c058
	muls r1, r0	@ 0009c058 4143
.org 0x9c05a
	ldr r0, [r4, #104]	@ 0009c05a a06e
.org 0x9c05c
	subs r0, r0, r1	@ 0009c05c 401a
.org 0x9c05e
	str r0, [r4, #88]	@ 0009c05e a065
.org 0x9c060
	ldrb r1, [r4, #18]	@ 0009c060 a17c
.org 0x9c062
	cmp r1, #0	@ 0009c062 0029
.org 0x9c064
	bne.n 0x9c06e	@ 0009c064 03d1
.org 0x9c066
	movs r0, #4	@ 0009c066 0420
.org 0x9c068
	strb r0, [r4, #13]	@ 0009c068 6073
.org 0x9c06a
	strb r1, [r4, #14]	@ 0009c06a a173
.org 0x9c06c
	strb r1, [r4, #15]	@ 0009c06c e173
