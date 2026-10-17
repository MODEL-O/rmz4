@ FUN_080ffa50  entry 0x080ffa50  size 124
.thumb
.org 0xffa50
FUN_080ffa50:
	push {r4, r5, lr}	@ 000ffa50 30b5
.org 0xffa52
	adds r4, r0, #0	@ 000ffa52 041c
.org 0xffa54
	adds r5, r4, #0	@ 000ffa54 251c
.org 0xffa56
	adds r5, #192	@ 000ffa56 c035
.org 0xffa58
	ldr r0, [r5, #0]	@ 000ffa58 2868
.org 0xffa5a
	cmp r0, #0	@ 000ffa5a 0028
.org 0xffa5c
	bne.n 0xffaa6	@ 000ffa5c 23d1
.org 0xffa5e
	adds r0, r4, #0	@ 000ffa5e 201c
.org 0xffa60
	adds r0, #140	@ 000ffa60 8c30
.org 0xffa62
	ldr r0, [r0, #0]	@ 000ffa62 0068
.org 0xffa64
	movs r1, #1	@ 000ffa64 0121
.org 0xffa66
	ands r0, r1	@ 000ffa66 0840
.org 0xffa68
	cmp r0, #0	@ 000ffa68 0028
.org 0xffa6a
	beq.n 0xffa9c	@ 000ffa6a 17d0
.org 0xffa6c
	adds r0, r4, #0	@ 000ffa6c 201c
.org 0xffa6e
	adds r0, #151	@ 000ffa6e 9730
.org 0xffa70
	ldrb r1, [r0, #0]	@ 000ffa70 0178
.org 0xffa72
	movs r0, #240	@ 000ffa72 f020
.org 0xffa74
	ands r0, r1	@ 000ffa74 0840
.org 0xffa76
	cmp r0, #48	@ 000ffa76 3028
.org 0xffa78
	bne.n 0xffa9c	@ 000ffa78 10d1
.org 0xffa7a
	ldr r2, [pc, #80]	@ 000ffa7a 144a
.org 0xffa7c
	movs r0, #0	@ 000ffa7c 0020
.org 0xffa7e
	adds r1, r4, #0	@ 000ffa7e 211c
.org 0xffa80
	bl 0x2adac	@ 000ffa80 2bf794f9
.org 0xffa84
	str r0, [r5, #0]	@ 000ffa84 2860
.org 0xffa86
	cmp r0, #0	@ 000ffa86 0028
.org 0xffa88
	beq.n 0xffae0	@ 000ffa88 2ad0
.org 0xffa8a
	ldr r1, [pc, #68]	@ 000ffa8a 1149
.org 0xffa8c
	adds r0, r4, #0	@ 000ffa8c 201c
.org 0xffa8e
	bl 0x1cf00	@ 000ffa8e 1df737fa
.org 0xffa92
	adds r0, r4, #0	@ 000ffa92 201c
.org 0xffa94
	adds r0, #116	@ 000ffa94 7430
.org 0xffa96
	ldr r1, [pc, #60]	@ 000ffa96 0f49
.org 0xffa98
	bl 0x5784	@ 000ffa98 05f774fe
.org 0xffa9c
	adds r0, r4, #0	@ 000ffa9c 201c
.org 0xffa9e
	adds r0, #192	@ 000ffa9e c030
.org 0xffaa0
	ldr r0, [r0, #0]	@ 000ffaa0 0068
.org 0xffaa2
	cmp r0, #0	@ 000ffaa2 0028
.org 0xffaa4
	beq.n 0xffae0	@ 000ffaa4 1cd0
.org 0xffaa6
	adds r5, r4, #0	@ 000ffaa6 251c
.org 0xffaa8
	adds r5, #192	@ 000ffaa8 c035
.org 0xffaaa
	ldr r0, [r5, #0]	@ 000ffaaa 2868
.org 0xffaac
	bl 0x2b3e4	@ 000ffaac 2bf79afc
.org 0xffab0
	cmp r0, #0	@ 000ffab0 0028
.org 0xffab2
	beq.n 0xffaf8	@ 000ffab2 21d0
.org 0xffab4
	ldr r1, [pc, #32]	@ 000ffab4 0849
.org 0xffab6
	adds r0, r4, #0	@ 000ffab6 201c
.org 0xffab8
	bl 0x1cf00	@ 000ffab8 1df722fa
.org 0xffabc
	adds r0, r4, #0	@ 000ffabc 201c
.org 0xffabe
	adds r0, #116	@ 000ffabe 7430
.org 0xffac0
	ldr r1, [pc, #24]	@ 000ffac0 0649
.org 0xffac2
	bl 0x5784	@ 000ffac2 05f75ffe
.org 0xffac6
	movs r0, #0	@ 000ffac6 0020
.org 0xffac8
	str r0, [r5, #0]	@ 000ffac8 2860
.org 0xffaca
	b.n 0xffaf8	@ 000ffaca 15e0
