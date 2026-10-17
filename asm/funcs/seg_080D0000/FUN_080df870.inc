@ FUN_080df870  entry 0x080df870  size 44
.thumb
.org 0xdf870
FUN_080df870:
	push {r4, lr}	@ 000df870 10b5
.org 0xdf872
	adds r4, r0, #0	@ 000df872 041c
.org 0xdf874
	ldrb r0, [r4, #13]	@ 000df874 607b
.org 0xdf876
	cmp r0, #0	@ 000df876 0028
.org 0xdf878
	bne.n 0xdf890	@ 000df878 0ad1
.org 0xdf87a
	ldr r1, [pc, #32]	@ 000df87a 0849
.org 0xdf87c
	adds r0, r4, #0	@ 000df87c 201c
.org 0xdf87e
	bl 0x1cf00	@ 000df87e 3df73ffb
.org 0xdf882
	ldrb r1, [r4, #17]	@ 000df882 617c
.org 0xdf884
	adds r0, r4, #0	@ 000df884 201c
.org 0xdf886
	bl 0xdf71c	@ 000df886 fff749ff
.org 0xdf88a
	ldrb r0, [r4, #13]	@ 000df88a 607b
.org 0xdf88c
	adds r0, #1	@ 000df88c 0130
.org 0xdf88e
	strb r0, [r4, #13]	@ 000df88e 6073
.org 0xdf890
	adds r0, r4, #0	@ 000df890 201c
.org 0xdf892
	bl 0xdf7ac	@ 000df892 fff78bff
.org 0xdf896
	pop {r4}	@ 000df896 10bc
.org 0xdf898
	pop {r0}	@ 000df898 01bc
.org 0xdf89a
	bx r0	@ 000df89a 0047
