@ FUN_08037804  entry 0x08037804  size 62
.thumb
.org 0x37804
FUN_08037804:
	push {r4, r5, lr}	@ 00037804 30b5
.org 0x37806
	adds r5, r0, #0	@ 00037806 051c
.org 0x37808
	movs r4, #144	@ 00037808 9024
.org 0x3780a
	lsls r4, r4, #6	@ 0003780a a401
.org 0x3780c
	adds r1, r4, #0	@ 0003780c 211c
.org 0x3780e
	bl 0x3a3b0	@ 0003780e 02f0cffd
.org 0x37812
	adds r0, r5, #0	@ 00037812 281c
.org 0x37814
	adds r1, r4, #0	@ 00037814 211c
.org 0x37816
	bl 0x3a3f0	@ 00037816 02f0ebfd
.org 0x3781a
	adds r0, r5, #0	@ 0003781a 281c
.org 0x3781c
	adds r0, #115	@ 0003781c 7330
.org 0x3781e
	ldrb r0, [r0, #0]	@ 0003781e 0078
.org 0x37820
	cmp r0, #3	@ 00037820 0328
.org 0x37822
	bne.n 0x3783c	@ 00037822 0bd1
.org 0x37824
	movs r1, #160	@ 00037824 a021
.org 0x37826
	lsls r1, r1, #3	@ 00037826 c900
.org 0x37828
	adds r0, r5, #0	@ 00037828 281c
.org 0x3782a
	movs r2, #4	@ 0003782a 0422
.org 0x3782c
	movs r3, #1	@ 0003782c 0123
.org 0x3782e
	bl 0x1cfc8	@ 0003782e e5f7cbfb
.org 0x37832
	movs r0, #128	@ 00037832 8020
.org 0x37834
	lsls r0, r0, #1	@ 00037834 4000
.org 0x37836
	adds r1, r5, r0	@ 00037836 2918
.org 0x37838
	movs r0, #0	@ 00037838 0020
.org 0x3783a
	strb r0, [r1, #0]	@ 0003783a 0870
.org 0x3783c
	pop {r4, r5}	@ 0003783c 30bc
.org 0x3783e
	pop {r0}	@ 0003783e 01bc
.org 0x37840
	bx r0	@ 00037840 0047
