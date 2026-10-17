@ FUN_080ba828  entry 0x080ba828  size 76
.thumb
.org 0xba828
FUN_080ba828:
	push {r4, lr}	@ 000ba828 10b5
.org 0xba82a
	adds r4, r0, #0	@ 000ba82a 041c
.org 0xba82c
	ldrb r0, [r4, #15]	@ 000ba82c e07b
.org 0xba82e
	cmp r0, #0	@ 000ba82e 0028
.org 0xba830
	bne.n 0xba84e	@ 000ba830 0dd1
.org 0xba832
	adds r0, r4, #0	@ 000ba832 201c
.org 0xba834
	adds r0, #116	@ 000ba834 7430
.org 0xba836
	ldr r1, [pc, #60]	@ 000ba836 0f49
.org 0xba838
	bl 0x5784	@ 000ba838 4af7a4ff
.org 0xba83c
	ldr r1, [pc, #56]	@ 000ba83c 0e49
.org 0xba83e
	adds r0, r4, #0	@ 000ba83e 201c
.org 0xba840
	bl 0x1cf00	@ 000ba840 62f75efb
.org 0xba844
	movs r0, #16	@ 000ba844 1020
.org 0xba846
	strb r0, [r4, #18]	@ 000ba846 a074
.org 0xba848
	ldrb r0, [r4, #15]	@ 000ba848 e07b
.org 0xba84a
	adds r0, #1	@ 000ba84a 0130
.org 0xba84c
	strb r0, [r4, #15]	@ 000ba84c e073
.org 0xba84e
	adds r0, r4, #0	@ 000ba84e 201c
.org 0xba850
	bl 0x1cff0	@ 000ba850 62f7cefb
.org 0xba854
	ldrb r0, [r4, #18]	@ 000ba854 a07c
.org 0xba856
	cmp r0, #0	@ 000ba856 0028
.org 0xba858
	beq.n 0xba864	@ 000ba858 04d0
.org 0xba85a
	subs r0, #1	@ 000ba85a 0138
.org 0xba85c
	strb r0, [r4, #18]	@ 000ba85c a074
.org 0xba85e
	lsls r0, r0, #24	@ 000ba85e 0006
.org 0xba860
	cmp r0, #0	@ 000ba860 0028
.org 0xba862
	bne.n 0xba86e	@ 000ba862 04d1
.org 0xba864
	movs r1, #0	@ 000ba864 0021
.org 0xba866
	movs r0, #2	@ 000ba866 0220
.org 0xba868
	strb r0, [r4, #13]	@ 000ba868 6073
.org 0xba86a
	strb r1, [r4, #14]	@ 000ba86a a173
.org 0xba86c
	strb r1, [r4, #15]	@ 000ba86c e173
.org 0xba86e
	pop {r4}	@ 000ba86e 10bc
.org 0xba870
	pop {r0}	@ 000ba870 01bc
.org 0xba872
	bx r0	@ 000ba872 0047
