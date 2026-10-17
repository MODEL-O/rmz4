@ FUN_08053e9c  entry 0x08053e9c  size 74
.thumb
.org 0x53e9c
FUN_08053e9c:
	push {r4, lr}	@ 00053e9c 10b5
.org 0x53e9e
	adds r4, r0, #0	@ 00053e9e 041c
.org 0x53ea0
	ldrb r0, [r4, #15]	@ 00053ea0 e07b
.org 0x53ea2
	cmp r0, #0	@ 00053ea2 0028
.org 0x53ea4
	bne.n 0x53ec2	@ 00053ea4 0dd1
.org 0x53ea6
	adds r2, r4, #0	@ 00053ea6 221c
.org 0x53ea8
	adds r2, #182	@ 00053ea8 b632
.org 0x53eaa
	ldrb r1, [r2, #0]	@ 00053eaa 1178
.org 0x53eac
	movs r0, #2	@ 00053eac 0220
.org 0x53eae
	orrs r0, r1	@ 00053eae 0843
.org 0x53eb0
	strb r0, [r2, #0]	@ 00053eb0 1070
.org 0x53eb2
	movs r1, #176	@ 00053eb2 b021
.org 0x53eb4
	lsls r1, r1, #6	@ 00053eb4 8901
.org 0x53eb6
	adds r0, r4, #0	@ 00053eb6 201c
.org 0x53eb8
	bl 0x1cf00	@ 00053eb8 c9f722f8
.org 0x53ebc
	ldrb r0, [r4, #15]	@ 00053ebc e07b
.org 0x53ebe
	adds r0, #1	@ 00053ebe 0130
.org 0x53ec0
	strb r0, [r4, #15]	@ 00053ec0 e073
.org 0x53ec2
	adds r0, r4, #0	@ 00053ec2 201c
.org 0x53ec4
	bl 0x1cff0	@ 00053ec4 c9f794f8
.org 0x53ec8
	adds r0, r4, #0	@ 00053ec8 201c
.org 0x53eca
	bl 0x54fb0	@ 00053eca 01f071f8
.org 0x53ece
	ldr r0, [pc, #24]	@ 00053ece 0648
.org 0x53ed0
	ldrb r1, [r0, #18]	@ 00053ed0 817c
.org 0x53ed2
	movs r0, #1	@ 00053ed2 0120
.org 0x53ed4
	ands r0, r1	@ 00053ed4 0840
.org 0x53ed6
	cmp r0, #0	@ 00053ed6 0028
.org 0x53ed8
	bne.n 0x53ee0	@ 00053ed8 02d1
.org 0x53eda
	adds r0, r4, #0	@ 00053eda 201c
.org 0x53edc
	bl 0x54ff0	@ 00053edc 01f088f8
.org 0x53ee0
	pop {r4}	@ 00053ee0 10bc
.org 0x53ee2
	pop {r0}	@ 00053ee2 01bc
.org 0x53ee4
	bx r0	@ 00053ee4 0047
