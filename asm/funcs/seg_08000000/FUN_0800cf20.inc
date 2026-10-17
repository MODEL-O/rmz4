@ FUN_0800cf20  entry 0x0800cf20  size 204
.thumb
.org 0xcf20
FUN_0800cf20:
	push {r4, r5, r6, r7, lr}	@ 0000cf20 f0b5
.org 0xcf22
	mov r7, r8	@ 0000cf22 4746
.org 0xcf24
	push {r7}	@ 0000cf24 80b4
.org 0xcf26
	sub sp, #8	@ 0000cf26 82b0
.org 0xcf28
	mov r8, r0	@ 0000cf28 8046
.org 0xcf2a
	ldr r0, [r0, #92]	@ 0000cf2a c06d
.org 0xcf2c
	lsls r5, r0, #16	@ 0000cf2c 0504
.org 0xcf2e
	movs r7, #0	@ 0000cf2e 0027
.org 0xcf30
	mov r1, r8	@ 0000cf30 4146
.org 0xcf32
	ldrb r0, [r1, #14]	@ 0000cf32 887b
.org 0xcf34
	cmp r0, #0	@ 0000cf34 0028
.org 0xcf36
	bne.n 0xcfa0	@ 0000cf36 33d1
.org 0xcf38
	lsrs r5, r5, #20	@ 0000cf38 2d0d
.org 0xcf3a
	lsls r5, r5, #1	@ 0000cf3a 6d00
.org 0xcf3c
	ldr r0, [pc, #140]	@ 0000cf3c 2348
.org 0xcf3e
	adds r5, r5, r0	@ 0000cf3e 2d18
.org 0xcf40
	ldr r1, [r1, #100]	@ 0000cf40 496e
.org 0xcf42
	ldr r2, [pc, #140]	@ 0000cf42 234a
.org 0xcf44
	adds r0, r2, #0	@ 0000cf44 101c
.org 0xcf46
	orrs r1, r0	@ 0000cf46 0143
.org 0xcf48
	strh r1, [r5, #0]	@ 0000cf48 2980
.org 0xcf4a
	movs r4, #248	@ 0000cf4a f824
.org 0xcf4c
	lsls r4, r4, #5	@ 0000cf4c 6401
.org 0xcf4e
	ands r1, r4	@ 0000cf4e 2140
.org 0xcf50
	lsls r1, r1, #3	@ 0000cf50 c900
.org 0xcf52
	movs r0, #192	@ 0000cf52 c020
.org 0xcf54
	lsls r0, r0, #19	@ 0000cf54 c004
.org 0xcf56
	adds r1, r1, r0	@ 0000cf56 0918
.org 0xcf58
	str r7, [sp, #0]	@ 0000cf58 0097
.org 0xcf5a
	movs r6, #128	@ 0000cf5a 8026
.org 0xcf5c
	lsls r6, r6, #2	@ 0000cf5c b600
.org 0xcf5e
	ldr r2, [pc, #116]	@ 0000cf5e 1d4a
.org 0xcf60
	mov r0, sp	@ 0000cf60 6846
.org 0xcf62
	bl 0x128be0	@ 0000cf62 1bf13dfe
.org 0xcf66
	ldr r0, [pc, #112]	@ 0000cf66 1c48
.org 0xcf68
	ldr r0, [r0, #0]	@ 0000cf68 0068
.org 0xcf6a
	ldr r3, [pc, #112]	@ 0000cf6a 1c4b
.org 0xcf6c
	adds r0, r0, r3	@ 0000cf6c c018
.org 0xcf6e
	ldrh r1, [r5, #0]	@ 0000cf6e 2988
.org 0xcf70
	ands r4, r1	@ 0000cf70 0c40
.org 0xcf72
	lsls r4, r4, #3	@ 0000cf72 e400
.org 0xcf74
	ldr r1, [pc, #104]	@ 0000cf74 1a49
.org 0xcf76
	adds r4, r4, r1	@ 0000cf76 6418
.org 0xcf78
	adds r1, r4, #0	@ 0000cf78 211c
.org 0xcf7a
	adds r2, r6, #0	@ 0000cf7a 321c
.org 0xcf7c
	bl 0x128be0	@ 0000cf7c 1bf130fe
.org 0xcf80
	ldr r1, [pc, #96]	@ 0000cf80 1849
.org 0xcf82
	ldrh r2, [r1, #0]	@ 0000cf82 0a88
.org 0xcf84
	movs r3, #128	@ 0000cf84 8023
.org 0xcf86
	lsls r3, r3, #7	@ 0000cf86 db01
.org 0xcf88
	adds r0, r3, #0	@ 0000cf88 181c
.org 0xcf8a
	orrs r0, r2	@ 0000cf8a 1043
.org 0xcf8c
	strh r0, [r1, #0]	@ 0000cf8c 0880
.org 0xcf8e
	movs r0, #251	@ 0000cf8e fb20
.org 0xcf90
	strb r0, [r1, #13]	@ 0000cf90 4873
.org 0xcf92
	strh r7, [r1, #6]	@ 0000cf92 cf80
.org 0xcf94
	movs r0, #255	@ 0000cf94 ff20
.org 0xcf96
	strh r0, [r1, #10]	@ 0000cf96 4881
.org 0xcf98
	mov r1, r8	@ 0000cf98 4146
.org 0xcf9a
	ldrb r0, [r1, #14]	@ 0000cf9a 887b
.org 0xcf9c
	adds r0, #1	@ 0000cf9c 0130
.org 0xcf9e
	strb r0, [r1, #14]	@ 0000cf9e 8873
.org 0xcfa0
	ldr r0, [pc, #68]	@ 0000cfa0 1148
.org 0xcfa2
	ldr r2, [pc, #72]	@ 0000cfa2 124a
.org 0xcfa4
	adds r0, r0, r2	@ 0000cfa4 8018
.org 0xcfa6
	ldr r0, [r0, #0]	@ 0000cfa6 0068
.org 0xcfa8
	asrs r0, r0, #8	@ 0000cfa8 0012
.org 0xcfaa
	mov r3, r8	@ 0000cfaa 4346
.org 0xcfac
	ldr r1, [r3, #52]	@ 0000cfac 596b
.org 0xcfae
	subs r1, r0, r1	@ 0000cfae 411a
.org 0xcfb0
	adds r7, r1, #0	@ 0000cfb0 0f1c
.org 0xcfb2
	subs r7, #80	@ 0000cfb2 503f
.org 0xcfb4
	cmp r7, #0	@ 0000cfb4 002f
.org 0xcfb6
	bge.n 0xcff4	@ 0000cfb6 1dda
.org 0xcfb8
	ldr r0, [pc, #52]	@ 0000cfb8 0d48
.org 0xcfba
	cmp r7, r0	@ 0000cfba 8742
.org 0xcfbc
	ble.n 0xcff4	@ 0000cfbc 1add
.org 0xcfbe
	ldr r0, [pc, #36]	@ 0000cfbe 0948
.org 0xcfc0
	adds r1, #175	@ 0000cfc0 af31
.org 0xcfc2
	lsls r1, r1, #8	@ 0000cfc2 0902
.org 0xcfc4
	movs r2, #255	@ 0000cfc4 ff22
.org 0xcfc6
	orrs r1, r2	@ 0000cfc6 1143
.org 0xcfc8
	strh r1, [r0, #6]	@ 0000cfc8 c180
.org 0xcfca
	b.n 0xd00e	@ 0000cfca 20e0
.org 0xcfcc
	.byte 0x04,0x0a,0x00,0x02	@ 0000cfcc data
.org 0xcfd0
	.byte 0x47,0x80,0x00,0x00	@ 0000cfd0 data
.org 0xcfd4
	.byte 0x00,0x02,0x00,0x01	@ 0000cfd4 data
.org 0xcfd8
	.byte 0xc4,0xc0,0xb2,0x08	@ 0000cfd8 data
.org 0xcfdc
	.byte 0xcc,0xc0,0xb2,0x08	@ 0000cfdc data
.org 0xcfe0
	.byte 0x00,0x08,0x00,0x06	@ 0000cfe0 data
.org 0xcfe4
	.byte 0x50,0x0a,0x00,0x02	@ 0000cfe4 data
.org 0xcfe8
	.byte 0xb0,0x0a,0x00,0x02	@ 0000cfe8 data
