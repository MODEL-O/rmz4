@ FUN_08054868  entry 0x08054868  size 60
.thumb
.org 0x54868
FUN_08054868:
	push {r4, lr}	@ 00054868 10b5
.org 0x5486a
	adds r4, r0, #0	@ 0005486a 041c
.org 0x5486c
	ldrb r0, [r4, #15]	@ 0005486c e07b
.org 0x5486e
	cmp r0, #0	@ 0005486e 0028
.org 0x54870
	bne.n 0x54880	@ 00054870 06d1
.org 0x54872
	ldr r1, [pc, #48]	@ 00054872 0c49
.org 0x54874
	adds r0, r4, #0	@ 00054874 201c
.org 0x54876
	bl 0x1cf00	@ 00054876 c8f743fb
.org 0x5487a
	ldrb r0, [r4, #15]	@ 0005487a e07b
.org 0x5487c
	adds r0, #1	@ 0005487c 0130
.org 0x5487e
	strb r0, [r4, #15]	@ 0005487e e073
.org 0x54880
	adds r0, r4, #0	@ 00054880 201c
.org 0x54882
	bl 0x1cff0	@ 00054882 c8f7b5fb
.org 0x54886
	adds r0, r4, #0	@ 00054886 201c
.org 0x54888
	bl 0x54fb0	@ 00054888 00f092fb
.org 0x5488c
	adds r0, r4, #0	@ 0005488c 201c
.org 0x5488e
	adds r0, #115	@ 0005488e 7330
.org 0x54890
	ldrb r0, [r0, #0]	@ 00054890 0078
.org 0x54892
	cmp r0, #3	@ 00054892 0328
.org 0x54894
	bne.n 0x5489e	@ 00054894 03d1
.org 0x54896
	movs r1, #0	@ 00054896 0021
.org 0x54898
	movs r0, #5	@ 00054898 0520
.org 0x5489a
	strb r0, [r4, #14]	@ 0005489a a073
.org 0x5489c
	strb r1, [r4, #15]	@ 0005489c e173
.org 0x5489e
	pop {r4}	@ 0005489e 10bc
.org 0x548a0
	pop {r0}	@ 000548a0 01bc
.org 0x548a2
	bx r0	@ 000548a2 0047
