@ FUN_080af84c  entry 0x080af84c  size 24
.thumb
.org 0xaf84c
FUN_080af84c:
	push {lr}	@ 000af84c 00b5
.org 0xaf84e
	adds r1, r0, #0	@ 000af84e 011c
.org 0xaf850
	ldrb r0, [r1, #18]	@ 000af850 887c
.org 0xaf852
	cmp r0, #0	@ 000af852 0028
.org 0xaf854
	beq.n 0xaf85e	@ 000af854 03d0
.org 0xaf856
	subs r0, #1	@ 000af856 0138
.org 0xaf858
	strb r0, [r1, #18]	@ 000af858 8874
.org 0xaf85a
	movs r0, #0	@ 000af85a 0020
.org 0xaf85c
	b.n 0xaf860	@ 000af85c 00e0
.org 0xaf85e
	movs r0, #1	@ 000af85e 0120
.org 0xaf860
	pop {r1}	@ 000af860 02bc
.org 0xaf862
	bx r1	@ 000af862 0847
