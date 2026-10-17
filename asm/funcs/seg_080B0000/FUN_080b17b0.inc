@ FUN_080b17b0  entry 0x080b17b0  size 102
.thumb
.org 0xb17b0
FUN_080b17b0:
	push {r4, lr}	@ 000b17b0 10b5
.org 0xb17b2
	adds r4, r0, #0	@ 000b17b2 041c
.org 0xb17b4
	adds r0, #140	@ 000b17b4 8c30
.org 0xb17b6
	ldr r0, [r0, #0]	@ 000b17b6 0068
.org 0xb17b8
	movs r1, #128	@ 000b17b8 8021
.org 0xb17ba
	lsls r1, r1, #2	@ 000b17ba 8900
.org 0xb17bc
	ands r0, r1	@ 000b17bc 0840
.org 0xb17be
	cmp r0, #0	@ 000b17be 0028
.org 0xb17c0
	beq.n 0xb17e0	@ 000b17c0 0ed0
.org 0xb17c2
	ldr r1, [pc, #24]	@ 000b17c2 0649
.org 0xb17c4
	ldrb r0, [r4, #9]	@ 000b17c4 607a
.org 0xb17c6
	lsls r0, r0, #2	@ 000b17c6 8000
.org 0xb17c8
	adds r0, r0, r1	@ 000b17c8 4018
.org 0xb17ca
	movs r1, #2	@ 000b17ca 0221
.org 0xb17cc
	str r1, [r4, #12]	@ 000b17cc e160
.org 0xb17ce
	ldr r0, [r0, #0]	@ 000b17ce 0068
.org 0xb17d0
	ldr r0, [r0, #8]	@ 000b17d0 8068
.org 0xb17d2
	str r0, [r4, #20]	@ 000b17d2 6061
.org 0xb17d4
	adds r0, r4, #0	@ 000b17d4 201c
.org 0xb17d6
	bl 0xb1820	@ 000b17d6 00f023f8
.org 0xb17da
	b.n 0xb1814	@ 000b17da 1be0
.org 0xb17dc
	.byte 0x40,0xdb,0x85,0x08	@ 000b17dc data
.org 0xb17e0
	adds r0, r4, #0	@ 000b17e0 201c
.org 0xb17e2
	bl 0xb1a00	@ 000b17e2 00f00df9
.org 0xb17e6
	adds r0, r4, #0	@ 000b17e6 201c
.org 0xb17e8
	adds r0, #192	@ 000b17e8 c030
.org 0xb17ea
	ldr r0, [r0, #0]	@ 000b17ea 0068
.org 0xb17ec
	cmp r0, #0	@ 000b17ec 0028
.org 0xb17ee
	beq.n 0xb17fe	@ 000b17ee 06d0
.org 0xb17f0
	adds r0, r4, #0	@ 000b17f0 201c
.org 0xb17f2
	bl 0xb1a58	@ 000b17f2 00f031f9
.org 0xb17f6
	adds r0, r4, #0	@ 000b17f6 201c
.org 0xb17f8
	bl 0x1d1f4	@ 000b17f8 6bf7fcfc
.org 0xb17fc
	b.n 0xb1814	@ 000b17fc 0ae0
.org 0xb17fe
	ldr r0, [pc, #28]	@ 000b17fe 0748
.org 0xb1800
	ldrb r1, [r4, #13]	@ 000b1800 617b
.org 0xb1802
	lsls r1, r1, #2	@ 000b1802 8900
.org 0xb1804
	adds r1, r1, r0	@ 000b1804 0918
.org 0xb1806
	ldr r1, [r1, #0]	@ 000b1806 0968
.org 0xb1808
	adds r0, r4, #0	@ 000b1808 201c
.org 0xb180a
	bl 0x128f80	@ 000b180a 77f0b9fb
.org 0xb180e
	adds r0, r4, #0	@ 000b180e 201c
.org 0xb1810
	bl 0x1cff0	@ 000b1810 6bf7eefb
.org 0xb1814
	pop {r4}	@ 000b1814 10bc
