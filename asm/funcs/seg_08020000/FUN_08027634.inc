@ FUN_08027634  entry 0x08027634  size 86
.thumb
.org 0x27634
FUN_08027634:
	push {r4, r5, lr}	@ 00027634 30b5
.org 0x27636
	adds r4, r0, #0	@ 00027636 041c
.org 0x27638
	movs r5, #0	@ 00027638 0025
.org 0x2763a
	ldr r0, [pc, #80]	@ 0002763a 1448
.org 0x2763c
	ldrb r1, [r0, #18]	@ 0002763c 817c
.org 0x2763e
	movs r0, #1	@ 0002763e 0120
.org 0x27640
	ands r0, r1	@ 00027640 0840
.org 0x27642
	cmp r0, #0	@ 00027642 0028
.org 0x27644
	beq.n 0x2764e	@ 00027644 03d0
.org 0x27646
	adds r0, r4, #0	@ 00027646 201c
.org 0x27648
	bl 0x2788c	@ 00027648 00f020f9
.org 0x2764c
	adds r5, r0, #0	@ 0002764c 051c
.org 0x2764e
	adds r1, r4, #0	@ 0002764e 211c
.org 0x27650
	adds r1, #208	@ 00027650 d031
.org 0x27652
	ldr r0, [r1, #0]	@ 00027652 0868
.org 0x27654
	adds r0, #1	@ 00027654 0130
.org 0x27656
	str r0, [r1, #0]	@ 00027656 0860
.org 0x27658
	adds r0, r4, #0	@ 00027658 201c
.org 0x2765a
	bl 0x278f4	@ 0002765a 00f04bf9
.org 0x2765e
	adds r0, r4, #0	@ 0002765e 201c
.org 0x27660
	bl 0x27ce8	@ 00027660 00f042fb
.org 0x27664
	adds r0, r4, #0	@ 00027664 201c
.org 0x27666
	bl 0x27d68	@ 00027666 00f07ffb
.org 0x2766a
	adds r0, r4, #0	@ 0002766a 201c
.org 0x2766c
	bl 0x2795c	@ 0002766c 00f076f9
.org 0x27670
	adds r0, r4, #0	@ 00027670 201c
.org 0x27672
	bl 0x27be4	@ 00027672 00f0b7fa
.org 0x27676
	adds r0, r4, #0	@ 00027676 201c
.org 0x27678
	bl 0x27c00	@ 00027678 00f0c2fa
.org 0x2767c
	adds r0, r4, #0	@ 0002767c 201c
.org 0x2767e
	bl 0x27c1c	@ 0002767e 00f0cdfa
.org 0x27682
	adds r0, r5, #0	@ 00027682 281c
.org 0x27684
	pop {r4, r5}	@ 00027684 30bc
.org 0x27686
	pop {r1}	@ 00027686 02bc
.org 0x27688
	bx r1	@ 00027688 0847
