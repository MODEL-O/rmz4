@ FUN_080ec888  entry 0x080ec888  size 78
.thumb
.org 0xec888
FUN_080ec888:
	push {r4, r5, r6, lr}	@ 000ec888 70b5
.org 0xec88a
	adds r4, r0, #0	@ 000ec88a 041c
.org 0xec88c
	ldrb r0, [r4, #15]	@ 000ec88c e07b
.org 0xec88e
	cmp r0, #0	@ 000ec88e 0028
.org 0xec890
	bne.n 0xec8a2	@ 000ec890 07d1
.org 0xec892
	movs r1, #184	@ 000ec892 b821
.org 0xec894
	lsls r1, r1, #2	@ 000ec894 8900
.org 0xec896
	movs r0, #9	@ 000ec896 0920
.org 0xec898
	bl 0x249c	@ 000ec898 15f700fe
.org 0xec89c
	ldrb r0, [r4, #15]	@ 000ec89c e07b
.org 0xec89e
	adds r0, #1	@ 000ec89e 0130
.org 0xec8a0
	strb r0, [r4, #15]	@ 000ec8a0 e073
.org 0xec8a2
	movs r0, #9	@ 000ec8a2 0920
.org 0xec8a4
	bl 0x25d8	@ 000ec8a4 15f798fe
.org 0xec8a8
	lsls r0, r0, #24	@ 000ec8a8 0006
.org 0xec8aa
	lsrs r6, r0, #24	@ 000ec8aa 060e
.org 0xec8ac
	adds r0, r4, #0	@ 000ec8ac 201c
.org 0xec8ae
	bl 0x1cff0	@ 000ec8ae 30f79ffb
.org 0xec8b2
	adds r0, r4, #0	@ 000ec8b2 201c
.org 0xec8b4
	adds r0, #180	@ 000ec8b4 b430
.org 0xec8b6
	ldrb r5, [r0, #0]	@ 000ec8b6 0578
.org 0xec8b8
	cmp r5, #0	@ 000ec8b8 002d
.org 0xec8ba
	bne.n 0xec8d0	@ 000ec8ba 09d1
.org 0xec8bc
	subs r0, r6, #3	@ 000ec8bc f01e
.org 0xec8be
	cmp r0, #1	@ 000ec8be 0128
.org 0xec8c0
	bhi.n 0xec8d0	@ 000ec8c0 06d8
.org 0xec8c2
	movs r0, #9	@ 000ec8c2 0920
.org 0xec8c4
	bl 0x2624	@ 000ec8c4 15f7aefe
.org 0xec8c8
	movs r0, #2	@ 000ec8c8 0220
.org 0xec8ca
	strb r0, [r4, #13]	@ 000ec8ca 6073
.org 0xec8cc
	strb r5, [r4, #14]	@ 000ec8cc a573
.org 0xec8ce
	strb r5, [r4, #15]	@ 000ec8ce e573
.org 0xec8d0
	pop {r4, r5, r6}	@ 000ec8d0 70bc
.org 0xec8d2
	pop {r0}	@ 000ec8d2 01bc
.org 0xec8d4
	bx r0	@ 000ec8d4 0047
