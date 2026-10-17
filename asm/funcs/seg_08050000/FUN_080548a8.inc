@ FUN_080548a8  entry 0x080548a8  size 136
.thumb
.org 0x548a8
FUN_080548a8:
	push {r4, lr}	@ 000548a8 10b5
.org 0x548aa
	adds r4, r0, #0	@ 000548aa 041c
.org 0x548ac
	ldrb r2, [r4, #15]	@ 000548ac e27b
.org 0x548ae
	cmp r2, #0	@ 000548ae 002a
.org 0x548b0
	bne.n 0x548e8	@ 000548b0 1ad1
.org 0x548b2
	adds r1, r4, #0	@ 000548b2 211c
.org 0x548b4
	adds r1, #196	@ 000548b4 c431
.org 0x548b6
	ldr r0, [r1, #0]	@ 000548b6 0868
.org 0x548b8
	adds r0, #184	@ 000548b8 b830
.org 0x548ba
	strb r2, [r0, #0]	@ 000548ba 0270
.org 0x548bc
	ldr r0, [r1, #0]	@ 000548bc 0868
.org 0x548be
	adds r0, #188	@ 000548be bc30
.org 0x548c0
	movs r3, #0	@ 000548c0 0023
.org 0x548c2
	movs r2, #32	@ 000548c2 2022
.org 0x548c4
	strh r2, [r0, #0]	@ 000548c4 0280
.org 0x548c6
	adds r1, #4	@ 000548c6 0431
.org 0x548c8
	ldr r0, [r1, #0]	@ 000548c8 0868
.org 0x548ca
	adds r0, #184	@ 000548ca b830
.org 0x548cc
	strb r3, [r0, #0]	@ 000548cc 0370
.org 0x548ce
	ldr r0, [r1, #0]	@ 000548ce 0868
.org 0x548d0
	adds r0, #188	@ 000548d0 bc30
.org 0x548d2
	strh r2, [r0, #0]	@ 000548d2 0280
.org 0x548d4
	movs r1, #176	@ 000548d4 b021
.org 0x548d6
	lsls r1, r1, #6	@ 000548d6 8901
.org 0x548d8
	adds r0, r4, #0	@ 000548d8 201c
.org 0x548da
	bl 0x1cf00	@ 000548da c8f711fb
.org 0x548de
	movs r0, #180	@ 000548de b420
.org 0x548e0
	strb r0, [r4, #18]	@ 000548e0 a074
.org 0x548e2
	ldrb r0, [r4, #15]	@ 000548e2 e07b
.org 0x548e4
	adds r0, #1	@ 000548e4 0130
.org 0x548e6
	strb r0, [r4, #15]	@ 000548e6 e073
.org 0x548e8
	adds r0, r4, #0	@ 000548e8 201c
.org 0x548ea
	bl 0x1cff0	@ 000548ea c8f781fb
.org 0x548ee
	ldrb r0, [r4, #18]	@ 000548ee a07c
.org 0x548f0
	cmp r0, #0	@ 000548f0 0028
.org 0x548f2
	beq.n 0x548f8	@ 000548f2 01d0
.org 0x548f4
	subs r0, #1	@ 000548f4 0138
.org 0x548f6
	strb r0, [r4, #18]	@ 000548f6 a074
.org 0x548f8
	adds r0, r4, #0	@ 000548f8 201c
.org 0x548fa
	bl 0x54fb0	@ 000548fa 00f059fb
.org 0x548fe
	adds r0, r4, #0	@ 000548fe 201c
.org 0x54900
	adds r0, #196	@ 00054900 c430
.org 0x54902
	ldr r0, [r0, #0]	@ 00054902 0068
.org 0x54904
	adds r0, #188	@ 00054904 bc30
.org 0x54906
	movs r1, #0	@ 00054906 0021
.org 0x54908
	ldrsh r0, [r0, r1]	@ 00054908 405e
.org 0x5490a
	cmp r0, #0	@ 0005490a 0028
.org 0x5490c
	bne.n 0x5492a	@ 0005490c 0dd1
.org 0x5490e
	adds r0, r4, #0	@ 0005490e 201c
.org 0x54910
	adds r0, #200	@ 00054910 c830
.org 0x54912
	ldr r0, [r0, #0]	@ 00054912 0068
.org 0x54914
	adds r0, #188	@ 00054914 bc30
.org 0x54916
	movs r1, #0	@ 00054916 0021
.org 0x54918
	ldrsh r0, [r0, r1]	@ 00054918 405e
.org 0x5491a
	cmp r0, #0	@ 0005491a 0028
.org 0x5491c
	bne.n 0x5492a	@ 0005491c 05d1
.org 0x5491e
	ldrb r0, [r4, #18]	@ 0005491e a07c
.org 0x54920
	cmp r0, #0	@ 00054920 0028
.org 0x54922
	bne.n 0x5492a	@ 00054922 02d1
.org 0x54924
	adds r0, r4, #0	@ 00054924 201c
.org 0x54926
	bl 0x54ff0	@ 00054926 00f063fb
.org 0x5492a
	pop {r4}	@ 0005492a 10bc
.org 0x5492c
	pop {r0}	@ 0005492c 01bc
.org 0x5492e
	bx r0	@ 0005492e 0047
