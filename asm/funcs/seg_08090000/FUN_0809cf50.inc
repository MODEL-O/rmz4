@ FUN_0809cf50  entry 0x0809cf50  size 188
.thumb
.org 0x9cf50
FUN_0809cf50:
	push {r4, r5, r6, r7, lr}	@ 0009cf50 f0b5
.org 0x9cf52
	adds r6, r0, #0	@ 0009cf52 061c
.org 0x9cf54
	ldr r7, [r6, #40]	@ 0009cf54 b76a
.org 0x9cf56
	bl 0x1cc9c	@ 0009cf56 7ff7a1fe
.org 0x9cf5a
	ldrb r1, [r6, #10]	@ 0009cf5a b17a
.org 0x9cf5c
	movs r0, #1	@ 0009cf5c 0120
.org 0x9cf5e
	movs r5, #0	@ 0009cf5e 0025
.org 0x9cf60
	orrs r0, r1	@ 0009cf60 0843
.org 0x9cf62
	movs r1, #2	@ 0009cf62 0221
.org 0x9cf64
	orrs r0, r1	@ 0009cf64 0843
.org 0x9cf66
	strb r0, [r6, #10]	@ 0009cf66 b072
.org 0x9cf68
	adds r0, r6, #0	@ 0009cf68 301c
.org 0x9cf6a
	bl 0x1ceec	@ 0009cf6a 7ff7bfff
.org 0x9cf6e
	ldr r0, [pc, #68]	@ 0009cf6e 1148
.org 0x9cf70
	adds r1, r0, #0	@ 0009cf70 011c
.org 0x9cf72
	ldrb r0, [r6, #17]	@ 0009cf72 707c
.org 0x9cf74
	adds r1, r1, r0	@ 0009cf74 0918
.org 0x9cf76
	lsls r1, r1, #16	@ 0009cf76 0904
.org 0x9cf78
	lsrs r1, r1, #16	@ 0009cf78 090c
.org 0x9cf7a
	adds r0, r6, #0	@ 0009cf7a 301c
.org 0x9cf7c
	bl 0x1cf00	@ 0009cf7c 7ff7c0ff
.org 0x9cf80
	adds r0, r6, #0	@ 0009cf80 301c
.org 0x9cf82
	bl 0x1cff0	@ 0009cf82 80f735f8
.org 0x9cf86
	ldrb r1, [r6, #10]	@ 0009cf86 b17a
.org 0x9cf88
	movs r0, #4	@ 0009cf88 0420
.org 0x9cf8a
	orrs r0, r1	@ 0009cf8a 0843
.org 0x9cf8c
	strb r0, [r6, #10]	@ 0009cf8c b072
.org 0x9cf8e
	adds r4, r6, #0	@ 0009cf8e 341c
.org 0x9cf90
	adds r4, #116	@ 0009cf90 7434
.org 0x9cf92
	ldr r1, [pc, #36]	@ 0009cf92 0949
.org 0x9cf94
	adds r2, r6, #0	@ 0009cf94 321c
.org 0x9cf96
	adds r2, #84	@ 0009cf96 5432
.org 0x9cf98
	adds r0, r4, #0	@ 0009cf98 201c
.org 0x9cf9a
	movs r3, #8	@ 0009cf9a 0823
.org 0x9cf9c
	bl 0x5760	@ 0009cf9c 68f7e0fb
.org 0x9cfa0
	str r6, [r4, #44]	@ 0009cfa0 e662
.org 0x9cfa2
	str r5, [r4, #36]	@ 0009cfa2 6562
.org 0x9cfa4
	ldrb r0, [r6, #17]	@ 0009cfa4 707c
.org 0x9cfa6
	cmp r0, #0	@ 0009cfa6 0028
.org 0x9cfa8
	beq.n 0x9cfc4	@ 0009cfa8 0cd0
.org 0x9cfaa
	ldr r0, [pc, #16]	@ 0009cfaa 0448
.org 0x9cfac
	str r0, [r6, #92]	@ 0009cfac f065
.org 0x9cfae
	ldr r0, [pc, #16]	@ 0009cfae 0448
.org 0x9cfb0
	b.n 0x9cfce	@ 0009cfb0 0de0
.org 0x9cfb2
	.byte 0x00	@ 0009cfb2 data
.org 0x9cfb3
	.byte 0x00	@ 0009cfb3 data
.org 0x9cfb4
	.byte 0x28,0xa9,0x00,0x00	@ 0009cfb4 data
.org 0x9cfb8
	.byte 0xc0,0x14,0x86,0x08	@ 0009cfb8 data
.org 0x9cfbc
	.byte 0x00,0xfd,0xff,0xff	@ 0009cfbc data
.org 0x9cfc0
	.byte 0x00,0xf5,0xff,0xff	@ 0009cfc0 data
.org 0x9cfc4
	movs r0, #192	@ 0009cfc4 c020
.org 0x9cfc6
	lsls r0, r0, #2	@ 0009cfc6 8000
.org 0x9cfc8
	str r0, [r6, #92]	@ 0009cfc8 f065
.org 0x9cfca
	movs r0, #176	@ 0009cfca b020
.org 0x9cfcc
	lsls r0, r0, #4	@ 0009cfcc 0001
.org 0x9cfce
	str r0, [r6, #100]	@ 0009cfce 7066
.org 0x9cfd0
	movs r0, #128	@ 0009cfd0 8020
.org 0x9cfd2
	lsls r0, r0, #1	@ 0009cfd2 4000
.org 0x9cfd4
	str r0, [r6, #96]	@ 0009cfd4 3066
.org 0x9cfd6
	movs r0, #200	@ 0009cfd6 c820
.org 0x9cfd8
	lsls r0, r0, #5	@ 0009cfd8 4001
.org 0x9cfda
	str r0, [r6, #104]	@ 0009cfda b066
.org 0x9cfdc
	adds r1, r6, #0	@ 0009cfdc 311c
.org 0x9cfde
	adds r1, #180	@ 0009cfde b431
.org 0x9cfe0
	ldr r0, [r6, #84]	@ 0009cfe0 706d
.org 0x9cfe2
	str r0, [r1, #0]	@ 0009cfe2 0860
.org 0x9cfe4
	adds r1, #4	@ 0009cfe4 0431
.org 0x9cfe6
	ldr r0, [r6, #88]	@ 0009cfe6 b06d
.org 0x9cfe8
	str r0, [r1, #0]	@ 0009cfe8 0860
.org 0x9cfea
	adds r2, r6, #0	@ 0009cfea 321c
.org 0x9cfec
	adds r2, #188	@ 0009cfec bc32
.org 0x9cfee
	ldr r0, [r6, #84]	@ 0009cfee 706d
.org 0x9cff0
	ldr r1, [r7, #84]	@ 0009cff0 796d
.org 0x9cff2
	subs r0, r0, r1	@ 0009cff2 401a
.org 0x9cff4
	str r0, [r2, #0]	@ 0009cff4 1060
.org 0x9cff6
	adds r2, #4	@ 0009cff6 0432
.org 0x9cff8
	ldr r0, [r6, #88]	@ 0009cff8 b06d
.org 0x9cffa
	ldr r1, [r7, #88]	@ 0009cffa b96d
.org 0x9cffc
	subs r0, r0, r1	@ 0009cffc 401a
.org 0x9cffe
	str r0, [r2, #0]	@ 0009cffe 1060
.org 0x9d000
	ldr r1, [pc, #28]	@ 0009d000 0749
.org 0x9d002
	ldrb r0, [r6, #9]	@ 0009d002 707a
.org 0x9d004
	lsls r0, r0, #2	@ 0009d004 8000
.org 0x9d006
	adds r0, r0, r1	@ 0009d006 4018
.org 0x9d008
	movs r1, #1	@ 0009d008 0121
.org 0x9d00a
	str r1, [r6, #12]	@ 0009d00a f160
