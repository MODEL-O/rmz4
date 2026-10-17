@ FUN_080df840  entry 0x080df840  size 44
.thumb
.org 0xdf840
FUN_080df840:
	push {r4, lr}	@ 000df840 10b5
.org 0xdf842
	adds r4, r0, #0	@ 000df842 041c
.org 0xdf844
	ldrb r0, [r4, #13]	@ 000df844 607b
.org 0xdf846
	cmp r0, #0	@ 000df846 0028
.org 0xdf848
	bne.n 0xdf860	@ 000df848 0ad1
.org 0xdf84a
	ldr r1, [pc, #32]	@ 000df84a 0849
.org 0xdf84c
	adds r0, r4, #0	@ 000df84c 201c
.org 0xdf84e
	bl 0x1cf00	@ 000df84e 3df757fb
.org 0xdf852
	ldrb r1, [r4, #17]	@ 000df852 617c
.org 0xdf854
	adds r0, r4, #0	@ 000df854 201c
.org 0xdf856
	bl 0xdf71c	@ 000df856 fff761ff
.org 0xdf85a
	ldrb r0, [r4, #13]	@ 000df85a 607b
.org 0xdf85c
	adds r0, #1	@ 000df85c 0130
.org 0xdf85e
	strb r0, [r4, #13]	@ 000df85e 6073
.org 0xdf860
	adds r0, r4, #0	@ 000df860 201c
.org 0xdf862
	bl 0xdf7ac	@ 000df862 fff7a3ff
.org 0xdf866
	pop {r4}	@ 000df866 10bc
.org 0xdf868
	pop {r0}	@ 000df868 01bc
.org 0xdf86a
	bx r0	@ 000df86a 0047
