@ FUN_08060868  entry 0x08060868  size 52
.thumb
.org 0x60868
FUN_08060868:
	push {r4, lr}	@ 00060868 10b5
.org 0x6086a
	adds r4, r0, #0	@ 0006086a 041c
.org 0x6086c
	ldrb r0, [r4, #14]	@ 0006086c a07b
.org 0x6086e
	cmp r0, #0	@ 0006086e 0028
.org 0x60870
	bne.n 0x60880	@ 00060870 06d1
.org 0x60872
	ldr r1, [pc, #40]	@ 00060872 0a49
.org 0x60874
	adds r0, r4, #0	@ 00060874 201c
.org 0x60876
	bl 0x1cf00	@ 00060876 bcf743fb
.org 0x6087a
	ldrb r0, [r4, #14]	@ 0006087a a07b
.org 0x6087c
	adds r0, #1	@ 0006087c 0130
.org 0x6087e
	strb r0, [r4, #14]	@ 0006087e a073
.org 0x60880
	adds r0, r4, #0	@ 00060880 201c
.org 0x60882
	bl 0x1cff0	@ 00060882 bcf7b5fb
.org 0x60886
	adds r0, r4, #0	@ 00060886 201c
.org 0x60888
	adds r0, #115	@ 00060888 7330
.org 0x6088a
	ldrb r1, [r0, #0]	@ 0006088a 0178
.org 0x6088c
	cmp r1, #3	@ 0006088c 0329
.org 0x6088e
	bne.n 0x60896	@ 0006088e 02d1
.org 0x60890
	movs r0, #0	@ 00060890 0020
.org 0x60892
	strb r1, [r4, #13]	@ 00060892 6173
.org 0x60894
	strb r0, [r4, #14]	@ 00060894 a073
.org 0x60896
	pop {r4}	@ 00060896 10bc
.org 0x60898
	pop {r0}	@ 00060898 01bc
.org 0x6089a
	bx r0	@ 0006089a 0047
