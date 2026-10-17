@ FUN_0801e918  entry 0x0801e918  size 36
.thumb
.org 0x1e918
FUN_0801e918:
	push {r4, r5, lr}	@ 0001e918 30b5
.org 0x1e91a
	adds r4, r0, #0	@ 0001e91a 041c
.org 0x1e91c
	ldr r5, [pc, #28]	@ 0001e91c 074d
.org 0x1e91e
	adds r0, r5, #0	@ 0001e91e 281c
.org 0x1e920
	adds r1, r4, #0	@ 0001e920 211c
.org 0x1e922
	movs r2, #8	@ 0001e922 0822
.org 0x1e924
	bl 0x128be0	@ 0001e924 0af15cf9
.org 0x1e928
	adds r5, #32	@ 0001e928 2035
.org 0x1e92a
	adds r4, #32	@ 0001e92a 2034
.org 0x1e92c
	ldr r2, [pc, #16]	@ 0001e92c 044a
.org 0x1e92e
	adds r0, r5, #0	@ 0001e92e 281c
.org 0x1e930
	adds r1, r4, #0	@ 0001e930 211c
.org 0x1e932
	bl 0x128be4	@ 0001e932 0af157f9
.org 0x1e936
	pop {r4, r5}	@ 0001e936 30bc
.org 0x1e938
	pop {r0}	@ 0001e938 01bc
.org 0x1e93a
	bx r0	@ 0001e93a 0047
