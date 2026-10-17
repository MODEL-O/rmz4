@ FUN_0804cd9c  entry 0x0804cd9c  size 234
.thumb
.org 0x4cd9c
FUN_0804cd9c:
	push {r4, r5, r6, r7, lr}	@ 0004cd9c f0b5
.org 0x4cd9e
	mov r7, r8	@ 0004cd9e 4746
.org 0x4cda0
	push {r7}	@ 0004cda0 80b4
.org 0x4cda2
	adds r7, r0, #0	@ 0004cda2 071c
.org 0x4cda4
	ldr r0, [pc, #92]	@ 0004cda4 1748
.org 0x4cda6
	mov r8, r0	@ 0004cda6 8046
.org 0x4cda8
	ldrb r0, [r7, #9]	@ 0004cda8 787a
.org 0x4cdaa
	lsls r0, r0, #2	@ 0004cdaa 8000
.org 0x4cdac
	add r0, r8	@ 0004cdac 4044
.org 0x4cdae
	movs r1, #1	@ 0004cdae 0121
.org 0x4cdb0
	str r1, [r7, #12]	@ 0004cdb0 f960
.org 0x4cdb2
	ldr r0, [r0, #0]	@ 0004cdb2 0068
.org 0x4cdb4
	ldr r0, [r0, #4]	@ 0004cdb4 4068
.org 0x4cdb6
	str r0, [r7, #20]	@ 0004cdb6 7861
.org 0x4cdb8
	ldr r0, [r7, #84]	@ 0004cdb8 786d
.org 0x4cdba
	ldr r1, [r7, #88]	@ 0004cdba b96d
.org 0x4cdbc
	bl 0x7c7c	@ 0004cdbc baf75eff
.org 0x4cdc0
	lsls r0, r0, #16	@ 0004cdc0 0004
.org 0x4cdc2
	cmp r0, #0	@ 0004cdc2 0028
.org 0x4cdc4
	beq.n 0x4ce0c	@ 0004cdc4 22d0
.org 0x4cdc6
	ldrb r1, [r7, #10]	@ 0004cdc6 b97a
.org 0x4cdc8
	movs r0, #4	@ 0004cdc8 0420
.org 0x4cdca
	movs r6, #0	@ 0004cdca 0026
.org 0x4cdcc
	orrs r0, r1	@ 0004cdcc 0843
.org 0x4cdce
	strb r0, [r7, #10]	@ 0004cdce b872
.org 0x4cdd0
	adds r4, r7, #0	@ 0004cdd0 3c1c
.org 0x4cdd2
	adds r4, #116	@ 0004cdd2 7434
.org 0x4cdd4
	ldr r1, [pc, #48]	@ 0004cdd4 0c49
.org 0x4cdd6
	adds r5, r7, #0	@ 0004cdd6 3d1c
.org 0x4cdd8
	adds r5, #84	@ 0004cdd8 5435
.org 0x4cdda
	adds r0, r4, #0	@ 0004cdda 201c
.org 0x4cddc
	adds r2, r5, #0	@ 0004cddc 2a1c
.org 0x4cdde
	movs r3, #8	@ 0004cdde 0823
.org 0x4cde0
	bl 0x5760	@ 0004cde0 b8f7befc
.org 0x4cde4
	str r7, [r4, #44]	@ 0004cde4 e762
.org 0x4cde6
	str r6, [r4, #36]	@ 0004cde6 6662
.org 0x4cde8
	movs r0, #2	@ 0004cde8 0220
.org 0x4cdea
	adds r1, r5, #0	@ 0004cdea 291c
.org 0x4cdec
	bl 0xd0c88	@ 0004cdec 83f04cff
.org 0x4cdf0
	ldrb r0, [r7, #9]	@ 0004cdf0 787a
.org 0x4cdf2
	lsls r0, r0, #2	@ 0004cdf2 8000
.org 0x4cdf4
	add r0, r8	@ 0004cdf4 4044
.org 0x4cdf6
	movs r1, #2	@ 0004cdf6 0221
.org 0x4cdf8
	str r1, [r7, #12]	@ 0004cdf8 f960
.org 0x4cdfa
	ldr r0, [r0, #0]	@ 0004cdfa 0068
.org 0x4cdfc
	ldr r0, [r0, #8]	@ 0004cdfc 8068
.org 0x4cdfe
	str r0, [r7, #20]	@ 0004cdfe 7861
.org 0x4ce00
	b.n 0x4ce94	@ 0004ce00 48e0
.org 0x4ce02
	.byte 0x00	@ 0004ce02 data
.org 0x4ce03
	.byte 0x00	@ 0004ce03 data
.org 0x4ce04
	.byte 0xf8,0x39,0x85,0x08	@ 0004ce04 data
.org 0x4ce08
	.byte 0x50,0x78,0x85,0x08	@ 0004ce08 data
.org 0x4ce0c
	adds r0, r7, #0	@ 0004ce0c 381c
.org 0x4ce0e
	bl 0x1cc9c	@ 0004ce0e cff745ff
.org 0x4ce12
	adds r0, r7, #0	@ 0004ce12 381c
.org 0x4ce14
	bl 0x1ceec	@ 0004ce14 d0f76af8
.org 0x4ce18
	ldrb r1, [r7, #10]	@ 0004ce18 b97a
.org 0x4ce1a
	movs r0, #1	@ 0004ce1a 0120
.org 0x4ce1c
	orrs r0, r1	@ 0004ce1c 0843
.org 0x4ce1e
	movs r1, #2	@ 0004ce1e 0221
.org 0x4ce20
	orrs r0, r1	@ 0004ce20 0843
.org 0x4ce22
	strb r0, [r7, #10]	@ 0004ce22 b872
.org 0x4ce24
	ldr r1, [pc, #60]	@ 0004ce24 0f49
.org 0x4ce26
	adds r0, r7, #0	@ 0004ce26 381c
.org 0x4ce28
	bl 0x1cf00	@ 0004ce28 d0f76af8
.org 0x4ce2c
	adds r0, r7, #0	@ 0004ce2c 381c
.org 0x4ce2e
	bl 0x1cff0	@ 0004ce2e d0f7dff8
.org 0x4ce32
	ldrb r1, [r7, #10]	@ 0004ce32 b97a
.org 0x4ce34
	movs r0, #4	@ 0004ce34 0420
.org 0x4ce36
	orrs r0, r1	@ 0004ce36 0843
.org 0x4ce38
	strb r0, [r7, #10]	@ 0004ce38 b872
.org 0x4ce3a
	adds r4, r7, #0	@ 0004ce3a 3c1c
.org 0x4ce3c
	adds r4, #116	@ 0004ce3c 7434
.org 0x4ce3e
	ldr r1, [pc, #40]	@ 0004ce3e 0a49
.org 0x4ce40
	adds r2, r7, #0	@ 0004ce40 3a1c
.org 0x4ce42
	adds r2, #84	@ 0004ce42 5432
.org 0x4ce44
	adds r0, r4, #0	@ 0004ce44 201c
.org 0x4ce46
	movs r3, #8	@ 0004ce46 0823
.org 0x4ce48
	bl 0x5760	@ 0004ce48 b8f78afc
.org 0x4ce4c
	str r7, [r4, #44]	@ 0004ce4c e762
.org 0x4ce4e
	ldr r0, [pc, #28]	@ 0004ce4e 0748
.org 0x4ce50
	str r0, [r4, #36]	@ 0004ce50 6062
.org 0x4ce52
	ldrb r1, [r7, #10]	@ 0004ce52 b97a
.org 0x4ce54
	movs r0, #16	@ 0004ce54 1020
.org 0x4ce56
	ands r0, r1	@ 0004ce56 0840
.org 0x4ce58
	cmp r0, #0	@ 0004ce58 0028
.org 0x4ce5a
	beq.n 0x4ce70	@ 0004ce5a 09d0
.org 0x4ce5c
	movs r0, #240	@ 0004ce5c f020
.org 0x4ce5e
	lsls r0, r0, #2	@ 0004ce5e 8000
.org 0x4ce60
	b.n 0x4ce72	@ 0004ce60 07e0
.org 0x4ce62
	.byte 0x00	@ 0004ce62 data
.org 0x4ce63
	.byte 0x00	@ 0004ce63 data
.org 0x4ce64
	.byte 0x1b,0x84,0x00,0x00	@ 0004ce64 data
.org 0x4ce68
	.byte 0x50,0x78,0x85,0x08	@ 0004ce68 data
.org 0x4ce6c
	.byte 0x31,0xd0,0x04,0x08	@ 0004ce6c data
.org 0x4ce70
	ldr r0, [pc, #44]	@ 0004ce70 0b48
.org 0x4ce72
	str r0, [r7, #92]	@ 0004ce72 f865
.org 0x4ce74
	ldr r0, [pc, #44]	@ 0004ce74 0b48
.org 0x4ce76
	str r0, [r7, #96]	@ 0004ce76 3866
.org 0x4ce78
	movs r0, #64	@ 0004ce78 4020
.org 0x4ce7a
	str r0, [r7, #104]	@ 0004ce7a b866
.org 0x4ce7c
	adds r1, r7, #0	@ 0004ce7c 391c
.org 0x4ce7e
	adds r1, #180	@ 0004ce7e b431
.org 0x4ce80
	ldr r0, [r7, #84]	@ 0004ce80 786d
.org 0x4ce82
	str r0, [r1, #0]	@ 0004ce82 0860
.org 0x4ce84
	adds r1, #4	@ 0004ce84 0431
