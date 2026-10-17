@ FUN_0801f884  entry 0x0801f884  size 60
.thumb
.org 0x1f884
FUN_0801f884:
	push {r4, r5, r6, lr}	@ 0001f884 70b5
.org 0x1f886
	adds r4, r0, #0	@ 0001f886 041c
.org 0x1f888
	adds r6, r1, #0	@ 0001f888 0e1c
.org 0x1f88a
	str r6, [r4, #12]	@ 0001f88a e660
.org 0x1f88c
	str r2, [r4, #16]	@ 0001f88c 2261
.org 0x1f88e
	movs r5, #0	@ 0001f88e 0025
.org 0x1f890
	str r5, [r4, #56]	@ 0001f890 a563
.org 0x1f892
	str r5, [r4, #60]	@ 0001f892 e563
.org 0x1f894
	adds r1, r4, #0	@ 0001f894 211c
.org 0x1f896
	adds r1, #56	@ 0001f896 3831
.org 0x1f898
	movs r2, #0	@ 0001f898 0022
.org 0x1f89a
	movs r3, #0	@ 0001f89a 0023
.org 0x1f89c
	bl 0x2c0c	@ 0001f89c e3f7b6f9
.org 0x1f8a0
	adds r0, r4, #0	@ 0001f8a0 201c
.org 0x1f8a2
	adds r0, #40	@ 0001f8a2 2830
.org 0x1f8a4
	str r0, [r4, #4]	@ 0001f8a4 6060
.org 0x1f8a6
	strb r5, [r4, #25]	@ 0001f8a6 6576
.org 0x1f8a8
	strh r5, [r4, #34]	@ 0001f8a8 6584
.org 0x1f8aa
	adds r0, r4, #0	@ 0001f8aa 201c
.org 0x1f8ac
	adds r1, r6, #0	@ 0001f8ac 311c
.org 0x1f8ae
	bl 0x1f924	@ 0001f8ae 00f039f8
.org 0x1f8b2
	adds r0, r4, #0	@ 0001f8b2 201c
.org 0x1f8b4
	movs r1, #8	@ 0001f8b4 0821
.org 0x1f8b6
	bl 0x1f998	@ 0001f8b6 00f06ff8
.org 0x1f8ba
	pop {r4, r5, r6}	@ 0001f8ba 70bc
.org 0x1f8bc
	pop {r0}	@ 0001f8bc 01bc
.org 0x1f8be
	bx r0	@ 0001f8be 0047
