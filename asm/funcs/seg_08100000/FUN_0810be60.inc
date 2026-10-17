@ FUN_0810be60  entry 0x0810be60  size 352
.thumb
.org 0x10be60
FUN_0810be60:
	push {r4, r5, r6, r7, lr}	@ 0010be60 f0b5
.org 0x10be62
	adds r7, r0, #0	@ 0010be62 071c
.org 0x10be64
	ldrb r0, [r7, #13]	@ 0010be64 787b
.org 0x10be66
	cmp r0, #0	@ 0010be66 0028
.org 0x10be68
	beq.n 0x10be70	@ 0010be68 02d0
.org 0x10be6a
	cmp r0, #1	@ 0010be6a 0128
.org 0x10be6c
	beq.n 0x10bf68	@ 0010be6c 7cd0
.org 0x10be6e
	b.n 0x10bfa6	@ 0010be6e 9ae0
.org 0x10be70
	movs r4, #255	@ 0010be70 ff24
.org 0x10be72
	ldr r1, [pc, #224]	@ 0010be72 3849
.org 0x10be74
	ldr r0, [r7, #40]	@ 0010be74 b86a
.org 0x10be76
	ldr r2, [pc, #224]	@ 0010be76 384a
.org 0x10be78
	adds r3, r0, r2	@ 0010be78 8318
.org 0x10be7a
	ldrb r0, [r3, #4]	@ 0010be7a 1879
.org 0x10be7c
	adds r0, r0, r1	@ 0010be7c 4018
.org 0x10be7e
	ldrb r5, [r0, #0]	@ 0010be7e 0578
.org 0x10be80
	ldr r0, [pc, #216]	@ 0010be80 3648
.org 0x10be82
	ldrh r2, [r0, #4]	@ 0010be82 8288
.org 0x10be84
	movs r0, #64	@ 0010be84 4020
.org 0x10be86
	ands r0, r2	@ 0010be86 1040
.org 0x10be88
	cmp r0, #0	@ 0010be88 0028
.org 0x10be8a
	beq.n 0x10be98	@ 0010be8a 05d0
.org 0x10be8c
	ldr r1, [pc, #208]	@ 0010be8c 3449
.org 0x10be8e
	ldrb r0, [r3, #2]	@ 0010be8e 9878
.org 0x10be90
	adds r0, r0, r5	@ 0010be90 4019
.org 0x10be92
	lsls r0, r0, #2	@ 0010be92 8000
.org 0x10be94
	adds r0, r0, r1	@ 0010be94 4018
.org 0x10be96
	ldrb r4, [r0, #0]	@ 0010be96 0478
.org 0x10be98
	cmp r4, #255	@ 0010be98 ff2c
.org 0x10be9a
	bne.n 0x10bee6	@ 0010be9a 24d1
.org 0x10be9c
	movs r0, #128	@ 0010be9c 8020
.org 0x10be9e
	ands r0, r2	@ 0010be9e 1040
.org 0x10bea0
	cmp r0, #0	@ 0010bea0 0028
.org 0x10bea2
	beq.n 0x10beb2	@ 0010bea2 06d0
.org 0x10bea4
	ldr r1, [pc, #184]	@ 0010bea4 2e49
.org 0x10bea6
	ldrb r0, [r3, #2]	@ 0010bea6 9878
.org 0x10bea8
	adds r0, r0, r5	@ 0010bea8 4019
.org 0x10beaa
	lsls r0, r0, #2	@ 0010beaa 8000
.org 0x10beac
	adds r1, #1	@ 0010beac 0131
.org 0x10beae
	adds r0, r0, r1	@ 0010beae 4018
.org 0x10beb0
	ldrb r4, [r0, #0]	@ 0010beb0 0478
.org 0x10beb2
	cmp r4, #255	@ 0010beb2 ff2c
.org 0x10beb4
	bne.n 0x10bee6	@ 0010beb4 17d1
.org 0x10beb6
	movs r0, #32	@ 0010beb6 2020
.org 0x10beb8
	ands r0, r2	@ 0010beb8 1040
.org 0x10beba
	cmp r0, #0	@ 0010beba 0028
.org 0x10bebc
	beq.n 0x10becc	@ 0010bebc 06d0
.org 0x10bebe
	ldr r1, [pc, #160]	@ 0010bebe 2849
.org 0x10bec0
	ldrb r0, [r3, #2]	@ 0010bec0 9878
.org 0x10bec2
	adds r0, r0, r5	@ 0010bec2 4019
.org 0x10bec4
	lsls r0, r0, #2	@ 0010bec4 8000
.org 0x10bec6
	adds r1, #2	@ 0010bec6 0231
.org 0x10bec8
	adds r0, r0, r1	@ 0010bec8 4018
.org 0x10beca
	ldrb r4, [r0, #0]	@ 0010beca 0478
.org 0x10becc
	cmp r4, #255	@ 0010becc ff2c
.org 0x10bece
	bne.n 0x10bee6	@ 0010bece 0ad1
.org 0x10bed0
	movs r0, #16	@ 0010bed0 1020
.org 0x10bed2
	ands r0, r2	@ 0010bed2 1040
.org 0x10bed4
	cmp r0, #0	@ 0010bed4 0028
.org 0x10bed6
	beq.n 0x10bee6	@ 0010bed6 06d0
.org 0x10bed8
	ldr r1, [pc, #132]	@ 0010bed8 2149
.org 0x10beda
	ldrb r0, [r3, #2]	@ 0010beda 9878
.org 0x10bedc
	adds r0, r0, r5	@ 0010bedc 4019
.org 0x10bede
	lsls r0, r0, #2	@ 0010bede 8000
.org 0x10bee0
	adds r1, #3	@ 0010bee0 0331
.org 0x10bee2
	adds r0, r0, r1	@ 0010bee2 4018
.org 0x10bee4
	ldrb r4, [r0, #0]	@ 0010bee4 0478
.org 0x10bee6
	ldr r0, [r7, #40]	@ 0010bee6 b86a
.org 0x10bee8
	ldr r5, [pc, #108]	@ 0010bee8 1b4d
.org 0x10beea
	adds r0, r0, r5	@ 0010beea 4019
.org 0x10beec
	ldrb r1, [r0, #2]	@ 0010beec 8178
.org 0x10beee
	strb r1, [r0, #3]	@ 0010beee c170
.org 0x10bef0
	cmp r4, #255	@ 0010bef0 ff2c
.org 0x10bef2
	beq.n 0x10bfa6	@ 0010bef2 58d0
.org 0x10bef4
	ldr r1, [r7, #40]	@ 0010bef4 b96a
.org 0x10bef6
	ldrb r0, [r1, #1]	@ 0010bef6 4878
.org 0x10bef8
	cmp r0, #2	@ 0010bef8 0228
.org 0x10befa
	bne.n 0x10bfa6	@ 0010befa 54d1
.org 0x10befc
	ldrb r0, [r1, #2]	@ 0010befc 8878
.org 0x10befe
	cmp r0, #1	@ 0010befe 0128
.org 0x10bf00
	bhi.n 0x10bfa6	@ 0010bf00 51d8
.org 0x10bf02
	movs r0, #1	@ 0010bf02 0120
.org 0x10bf04
	bl 0x2b10	@ 0010bf04 f6f604fe
.org 0x10bf08
	ldr r0, [r7, #40]	@ 0010bf08 b86a
.org 0x10bf0a
	adds r0, r0, r5	@ 0010bf0a 4019
.org 0x10bf0c
	strb r4, [r0, #2]	@ 0010bf0c 8470
.org 0x10bf0e
	ldr r1, [pc, #84]	@ 0010bf0e 1549
.org 0x10bf10
	lsls r0, r4, #3	@ 0010bf10 e000
.org 0x10bf12
	adds r0, r0, r1	@ 0010bf12 4018
.org 0x10bf14
	ldr r1, [r0, #4]	@ 0010bf14 4168
.org 0x10bf16
	ldr r0, [r0, #0]	@ 0010bf16 0068
.org 0x10bf18
	str r0, [r7, #100]	@ 0010bf18 7866
.org 0x10bf1a
	str r1, [r7, #104]	@ 0010bf1a b966
.org 0x10bf1c
	movs r0, #6	@ 0010bf1c 0620
.org 0x10bf1e
	strb r0, [r7, #18]	@ 0010bf1e b874
.org 0x10bf20
	ldr r0, [r7, #100]	@ 0010bf20 786e
.org 0x10bf22
	ldr r5, [r7, #84]	@ 0010bf22 7d6d
.org 0x10bf24
	subs r0, r0, r5	@ 0010bf24 401b
.org 0x10bf26
	movs r1, #6	@ 0010bf26 0621
.org 0x10bf28
	bl 0x128fb8	@ 0010bf28 1df046f8
.org 0x10bf2c
	adds r6, r0, #0	@ 0010bf2c 061c
.org 0x10bf2e
	str r6, [r7, #92]	@ 0010bf2e fe65
.org 0x10bf30
	ldr r0, [r7, #104]	@ 0010bf30 b86e
.org 0x10bf32
	ldr r4, [r7, #88]	@ 0010bf32 bc6d
.org 0x10bf34
	subs r0, r0, r4	@ 0010bf34 001b
.org 0x10bf36
	movs r1, #6	@ 0010bf36 0621
.org 0x10bf38
	bl 0x128fb8	@ 0010bf38 1df03ef8
.org 0x10bf3c
	str r0, [r7, #96]	@ 0010bf3c 3866
.org 0x10bf3e
	movs r1, #5	@ 0010bf3e 0521
.org 0x10bf40
	strb r1, [r7, #18]	@ 0010bf40 b974
.org 0x10bf42
	adds r5, r5, r6	@ 0010bf42 ad19
.org 0x10bf44
	str r5, [r7, #84]	@ 0010bf44 7d65
.org 0x10bf46
	adds r4, r4, r0	@ 0010bf46 2418
.org 0x10bf48
	str r4, [r7, #88]	@ 0010bf48 bc65
.org 0x10bf4a
	ldrb r0, [r7, #13]	@ 0010bf4a 787b
.org 0x10bf4c
	adds r0, #1	@ 0010bf4c 0130
.org 0x10bf4e
	strb r0, [r7, #13]	@ 0010bf4e 7873
.org 0x10bf50
	b.n 0x10bfa6	@ 0010bf50 29e0
.org 0x10bf52
	.byte 0x00	@ 0010bf52 data
.org 0x10bf53
	.byte 0x00	@ 0010bf53 data
.org 0x10bf54
	.byte 0x58,0xcd,0x86,0x08	@ 0010bf54 data
.org 0x10bf58
	.byte 0xcc,0x0d,0x00,0x00	@ 0010bf58 data
.org 0x10bf5c
	.byte 0x60,0x07,0x00,0x02	@ 0010bf5c data
.org 0x10bf60
	.byte 0x62,0xcd,0x86,0x08	@ 0010bf60 data
.org 0x10bf64
	.byte 0xc8,0xcc,0x86,0x08	@ 0010bf64 data
.org 0x10bf68
	ldr r0, [r7, #40]	@ 0010bf68 b86a
.org 0x10bf6a
	ldr r3, [pc, #96]	@ 0010bf6a 184b
.org 0x10bf6c
	adds r0, r0, r3	@ 0010bf6c c018
.org 0x10bf6e
	ldrb r1, [r0, #2]	@ 0010bf6e 8178
.org 0x10bf70
	strb r1, [r0, #3]	@ 0010bf70 c170
.org 0x10bf72
	ldr r0, [r7, #84]	@ 0010bf72 786d
.org 0x10bf74
	ldr r1, [r7, #92]	@ 0010bf74 f96d
.org 0x10bf76
	adds r0, r0, r1	@ 0010bf76 4018
.org 0x10bf78
	str r0, [r7, #84]	@ 0010bf78 7865
.org 0x10bf7a
	ldr r0, [r7, #88]	@ 0010bf7a b86d
.org 0x10bf7c
	ldr r1, [r7, #96]	@ 0010bf7c 396e
.org 0x10bf7e
	adds r0, r0, r1	@ 0010bf7e 4018
.org 0x10bf80
	str r0, [r7, #88]	@ 0010bf80 b865
.org 0x10bf82
	ldrb r0, [r7, #18]	@ 0010bf82 b87c
.org 0x10bf84
	subs r0, #1	@ 0010bf84 0138
.org 0x10bf86
	strb r0, [r7, #18]	@ 0010bf86 b874
.org 0x10bf88
	lsls r0, r0, #24	@ 0010bf88 0006
.org 0x10bf8a
	lsrs r2, r0, #24	@ 0010bf8a 020e
.org 0x10bf8c
	cmp r2, #0	@ 0010bf8c 002a
.org 0x10bf8e
	bne.n 0x10bfa6	@ 0010bf8e 0ad1
.org 0x10bf90
	ldr r1, [pc, #60]	@ 0010bf90 0f49
.org 0x10bf92
	ldr r0, [r7, #40]	@ 0010bf92 b86a
.org 0x10bf94
	adds r0, r0, r3	@ 0010bf94 c018
.org 0x10bf96
	ldrb r0, [r0, #2]	@ 0010bf96 8078
.org 0x10bf98
	lsls r0, r0, #3	@ 0010bf98 c000
.org 0x10bf9a
	adds r0, r0, r1	@ 0010bf9a 4018
.org 0x10bf9c
	ldr r1, [r0, #4]	@ 0010bf9c 4168
.org 0x10bf9e
	ldr r0, [r0, #0]	@ 0010bf9e 0068
.org 0x10bfa0
	str r0, [r7, #84]	@ 0010bfa0 7865
.org 0x10bfa2
	str r1, [r7, #88]	@ 0010bfa2 b965
.org 0x10bfa4
	strb r2, [r7, #13]	@ 0010bfa4 7a73
.org 0x10bfa6
	ldr r0, [r7, #40]	@ 0010bfa6 b86a
.org 0x10bfa8
	ldr r1, [pc, #32]	@ 0010bfa8 0849
.org 0x10bfaa
	adds r0, r0, r1	@ 0010bfaa 4018
.org 0x10bfac
	ldrb r2, [r0, #5]	@ 0010bfac 4279
.org 0x10bfae
	cmp r2, #2	@ 0010bfae 022a
.org 0x10bfb0
	bne.n 0x10bfd8	@ 0010bfb0 12d1
.org 0x10bfb2
	ldr r1, [pc, #32]	@ 0010bfb2 0849
.org 0x10bfb4
	ldrb r0, [r7, #9]	@ 0010bfb4 787a
.org 0x10bfb6
	lsls r0, r0, #2	@ 0010bfb6 8000
.org 0x10bfb8
	adds r0, r0, r1	@ 0010bfb8 4018
.org 0x10bfba
	str r2, [r7, #12]	@ 0010bfba fa60
.org 0x10bfbc
	ldr r0, [r0, #0]	@ 0010bfbc 0068
.org 0x10bfbe
	ldr r0, [r0, #8]	@ 0010bfbe 8068
