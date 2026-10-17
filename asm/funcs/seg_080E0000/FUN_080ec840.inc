@ FUN_080ec840  entry 0x080ec840  size 70
.thumb
.org 0xec840
FUN_080ec840:
	push {r4, lr}	@ 000ec840 10b5
.org 0xec842
	adds r4, r0, #0	@ 000ec842 041c
.org 0xec844
	ldrb r0, [r4, #15]	@ 000ec844 e07b
.org 0xec846
	cmp r0, #0	@ 000ec846 0028
.org 0xec848
	bne.n 0xec85a	@ 000ec848 07d1
.org 0xec84a
	movs r1, #184	@ 000ec84a b821
.org 0xec84c
	lsls r1, r1, #2	@ 000ec84c 8900
.org 0xec84e
	movs r0, #8	@ 000ec84e 0820
.org 0xec850
	bl 0x249c	@ 000ec850 15f724fe
.org 0xec854
	ldrb r0, [r4, #15]	@ 000ec854 e07b
.org 0xec856
	adds r0, #1	@ 000ec856 0130
.org 0xec858
	strb r0, [r4, #15]	@ 000ec858 e073
.org 0xec85a
	movs r0, #9	@ 000ec85a 0920
.org 0xec85c
	bl 0x25d8	@ 000ec85c 15f7bcfe
.org 0xec860
	adds r0, r4, #0	@ 000ec860 201c
.org 0xec862
	bl 0x1cff0	@ 000ec862 30f7c5fb
.org 0xec866
	adds r0, r4, #0	@ 000ec866 201c
.org 0xec868
	adds r0, #180	@ 000ec868 b430
.org 0xec86a
	ldrb r0, [r0, #0]	@ 000ec86a 0078
.org 0xec86c
	cmp r0, #0	@ 000ec86c 0028
.org 0xec86e
	beq.n 0xec880	@ 000ec86e 07d0
.org 0xec870
	movs r0, #8	@ 000ec870 0820
.org 0xec872
	bl 0x2624	@ 000ec872 15f7d7fe
.org 0xec876
	movs r1, #0	@ 000ec876 0021
.org 0xec878
	movs r0, #1	@ 000ec878 0120
.org 0xec87a
	strb r0, [r4, #13]	@ 000ec87a 6073
.org 0xec87c
	strb r1, [r4, #14]	@ 000ec87c a173
.org 0xec87e
	strb r1, [r4, #15]	@ 000ec87e e173
.org 0xec880
	pop {r4}	@ 000ec880 10bc
.org 0xec882
	pop {r0}	@ 000ec882 01bc
.org 0xec884
	bx r0	@ 000ec884 0047
