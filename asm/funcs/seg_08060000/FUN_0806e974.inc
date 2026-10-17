@ FUN_0806e974  entry 0x0806e974  size 238
.thumb
.org 0x6e974
FUN_0806e974:
	push {r4, r5, lr}	@ 0006e974 30b5
.org 0x6e976
	sub sp, #8	@ 0006e976 82b0
.org 0x6e978
	adds r5, r0, #0	@ 0006e978 051c
.org 0x6e97a
	ldrb r4, [r5, #15]	@ 0006e97a ec7b
.org 0x6e97c
	cmp r4, #0	@ 0006e97c 002c
.org 0x6e97e
	bne.n 0x6e9fa	@ 0006e97e 3cd1
.org 0x6e980
	movs r1, #168	@ 0006e980 a821
.org 0x6e982
	lsls r1, r1, #2	@ 0006e982 8900
.org 0x6e984
	movs r0, #119	@ 0006e984 7720
.org 0x6e986
	bl 0x249c	@ 0006e986 93f789fd
.org 0x6e98a
	adds r0, r5, #0	@ 0006e98a 281c
.org 0x6e98c
	adds r0, #116	@ 0006e98c 7430
.org 0x6e98e
	ldr r1, [pc, #60]	@ 0006e98e 0f49
.org 0x6e990
	bl 0x5784	@ 0006e990 96f7f8fe
.org 0x6e994
	movs r0, #154	@ 0006e994 9a20
.org 0x6e996
	lsls r0, r0, #2	@ 0006e996 8000
.org 0x6e998
	str r0, [r5, #100]	@ 0006e998 6866
.org 0x6e99a
	strb r4, [r5, #18]	@ 0006e99a ac74
.org 0x6e99c
	ldr r0, [pc, #48]	@ 0006e99c 0c48
.org 0x6e99e
	ldr r2, [r0, #0]	@ 0006e99e 0268
.org 0x6e9a0
	ldr r1, [r2, #88]	@ 0006e9a0 916d
.org 0x6e9a2
	ldr r0, [pc, #48]	@ 0006e9a2 0c48
.org 0x6e9a4
	adds r1, r1, r0	@ 0006e9a4 0918
.org 0x6e9a6
	adds r0, r5, #0	@ 0006e9a6 281c
.org 0x6e9a8
	adds r0, #184	@ 0006e9a8 b830
.org 0x6e9aa
	ldr r0, [r0, #0]	@ 0006e9aa 0068
.org 0x6e9ac
	ldr r3, [pc, #40]	@ 0006e9ac 0a4b
.org 0x6e9ae
	adds r0, r0, r3	@ 0006e9ae c018
.org 0x6e9b0
	cmp r1, r0	@ 0006e9b0 8142
.org 0x6e9b2
	bge.n 0x6e9dc	@ 0006e9b2 13da
.org 0x6e9b4
	adds r0, r5, #0	@ 0006e9b4 281c
.org 0x6e9b6
	adds r0, #188	@ 0006e9b6 bc30
.org 0x6e9b8
	ldr r0, [r0, #0]	@ 0006e9b8 0068
.org 0x6e9ba
	movs r1, #208	@ 0006e9ba d021
.org 0x6e9bc
	lsls r1, r1, #7	@ 0006e9bc c901
.org 0x6e9be
	adds r0, r0, r1	@ 0006e9be 4018
.org 0x6e9c0
	ldr r1, [r2, #84]	@ 0006e9c0 516d
.org 0x6e9c2
	movs r3, #2	@ 0006e9c2 0223
.org 0x6e9c4
	cmp r1, r0	@ 0006e9c4 8142
.org 0x6e9c6
	bge.n 0x6e9f2	@ 0006e9c6 14da
.org 0x6e9c8
	movs r3, #3	@ 0006e9c8 0323
.org 0x6e9ca
	b.n 0x6e9f2	@ 0006e9ca 12e0
.org 0x6e9cc
	.byte 0xdc,0xc5,0x85,0x08	@ 0006e9cc data
.org 0x6e9d0
	.byte 0xf0,0xdb,0x02,0x02	@ 0006e9d0 data
.org 0x6e9d4
	.byte 0x00,0xf0,0xff,0xff	@ 0006e9d4 data
.org 0x6e9d8
	.byte 0x01,0xc0,0xff,0xff	@ 0006e9d8 data
.org 0x6e9dc
	adds r0, r5, #0	@ 0006e9dc 281c
.org 0x6e9de
	adds r0, #188	@ 0006e9de bc30
.org 0x6e9e0
	ldr r0, [r0, #0]	@ 0006e9e0 0068
.org 0x6e9e2
	movs r3, #208	@ 0006e9e2 d023
.org 0x6e9e4
	lsls r3, r3, #7	@ 0006e9e4 db01
.org 0x6e9e6
	adds r0, r0, r3	@ 0006e9e6 c018
.org 0x6e9e8
	ldr r1, [r2, #84]	@ 0006e9e8 516d
.org 0x6e9ea
	movs r3, #0	@ 0006e9ea 0023
.org 0x6e9ec
	cmp r1, r0	@ 0006e9ec 8142
.org 0x6e9ee
	bge.n 0x6e9f2	@ 0006e9ee 00da
.org 0x6e9f0
	movs r3, #1	@ 0006e9f0 0123
.org 0x6e9f2
	strb r3, [r5, #19]	@ 0006e9f2 eb74
.org 0x6e9f4
	ldrb r0, [r5, #15]	@ 0006e9f4 e87b
.org 0x6e9f6
	adds r0, #1	@ 0006e9f6 0130
.org 0x6e9f8
	strb r0, [r5, #15]	@ 0006e9f8 e873
.org 0x6e9fa
	movs r0, #119	@ 0006e9fa 7720
.org 0x6e9fc
	bl 0x25d8	@ 0006e9fc 93f7ecfd
.org 0x6ea00
	ldr r0, [r5, #100]	@ 0006ea00 686e
.org 0x6ea02
	movs r1, #28	@ 0006ea02 1c21
.org 0x6ea04
	bl 0x129050	@ 0006ea04 baf024fb
.org 0x6ea08
	cmp r0, #0	@ 0006ea08 0028
.org 0x6ea0a
	bne.n 0x6ea5a	@ 0006ea0a 26d1
.org 0x6ea0c
	ldrb r3, [r5, #19]	@ 0006ea0c eb7c
.org 0x6ea0e
	ldrb r2, [r5, #18]	@ 0006ea0e aa7c
.org 0x6ea10
	ldr r1, [pc, #96]	@ 0006ea10 1849
.org 0x6ea12
	lsls r0, r3, #2	@ 0006ea12 9800
.org 0x6ea14
	adds r0, r0, r1	@ 0006ea14 4018
.org 0x6ea16
	ldr r0, [r0, #0]	@ 0006ea16 0068
.org 0x6ea18
	adds r0, r0, r2	@ 0006ea18 8018
.org 0x6ea1a
	ldrb r2, [r0, #0]	@ 0006ea1a 0278
.org 0x6ea1c
	adds r4, r5, #0	@ 0006ea1c 2c1c
.org 0x6ea1e
	adds r4, #188	@ 0006ea1e bc34
.org 0x6ea20
	ldr r3, [pc, #84]	@ 0006ea20 154b
.org 0x6ea22
	lsls r2, r2, #3	@ 0006ea22 d200
.org 0x6ea24
	adds r0, r2, r3	@ 0006ea24 d018
.org 0x6ea26
	ldr r1, [r0, #0]	@ 0006ea26 0168
.org 0x6ea28
	movs r0, #208	@ 0006ea28 d020
.org 0x6ea2a
	lsls r0, r0, #7	@ 0006ea2a c001
.org 0x6ea2c
	adds r1, r1, r0	@ 0006ea2c 0918
.org 0x6ea2e
	ldr r0, [r4, #0]	@ 0006ea2e 2068
.org 0x6ea30
	adds r0, r0, r1	@ 0006ea30 4018
.org 0x6ea32
	str r0, [sp, #0]	@ 0006ea32 0090
.org 0x6ea34
	adds r0, r5, #0	@ 0006ea34 281c
.org 0x6ea36
	adds r0, #184	@ 0006ea36 b830
.org 0x6ea38
	adds r3, #4	@ 0006ea38 0433
.org 0x6ea3a
	adds r2, r2, r3	@ 0006ea3a d218
.org 0x6ea3c
	ldr r1, [r2, #0]	@ 0006ea3c 1168
.org 0x6ea3e
	ldr r2, [pc, #60]	@ 0006ea3e 0f4a
.org 0x6ea40
	adds r1, r1, r2	@ 0006ea40 8918
.org 0x6ea42
	ldr r0, [r0, #0]	@ 0006ea42 0068
.org 0x6ea44
	adds r0, r0, r1	@ 0006ea44 4018
.org 0x6ea46
	str r0, [sp, #4]	@ 0006ea46 0190
.org 0x6ea48
	adds r0, r5, #0	@ 0006ea48 281c
.org 0x6ea4a
	mov r1, sp	@ 0006ea4a 6946
.org 0x6ea4c
	movs r2, #1	@ 0006ea4c 0122
.org 0x6ea4e
	movs r3, #0	@ 0006ea4e 0023
.org 0x6ea50
	bl 0xa5888	@ 0006ea50 36f01aff
.org 0x6ea54
	ldrb r0, [r5, #18]	@ 0006ea54 a87c
.org 0x6ea56
	adds r0, #1	@ 0006ea56 0130
.org 0x6ea58
	strb r0, [r5, #18]	@ 0006ea58 a874
.org 0x6ea5a
	ldr r0, [r5, #100]	@ 0006ea5a 686e
.org 0x6ea5c
	subs r1, r0, #1	@ 0006ea5c 411e
.org 0x6ea5e
	str r1, [r5, #100]	@ 0006ea5e 6966
.org 0x6ea60
	cmp r1, #0	@ 0006ea60 0029
