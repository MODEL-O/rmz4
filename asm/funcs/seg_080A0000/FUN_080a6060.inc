@ FUN_080a6060  entry 0x080a6060  size 80
.thumb
.org 0xa6060
FUN_080a6060:
	push {r4, lr}	@ 000a6060 10b5
.org 0xa6062
	adds r4, r0, #0	@ 000a6062 041c
.org 0xa6064
	ldrb r0, [r4, #15]	@ 000a6064 e07b
.org 0xa6066
	cmp r0, #0	@ 000a6066 0028
.org 0xa6068
	bne.n 0xa6080	@ 000a6068 0ad1
.org 0xa606a
	ldr r1, [pc, #68]	@ 000a606a 1149
.org 0xa606c
	adds r0, r4, #0	@ 000a606c 201c
.org 0xa606e
	bl 0x1cf00	@ 000a606e 76f747ff
.org 0xa6072
	adds r0, r4, #0	@ 000a6072 201c
.org 0xa6074
	movs r1, #6	@ 000a6074 0621
.org 0xa6076
	bl 0x1d3d0	@ 000a6076 77f7abf9
.org 0xa607a
	ldrb r0, [r4, #15]	@ 000a607a e07b
.org 0xa607c
	adds r0, #1	@ 000a607c 0130
.org 0xa607e
	strb r0, [r4, #15]	@ 000a607e e073
.org 0xa6080
	adds r0, r4, #0	@ 000a6080 201c
.org 0xa6082
	bl 0x1cff0	@ 000a6082 76f7b5ff
.org 0xa6086
	adds r0, r4, #0	@ 000a6086 201c
.org 0xa6088
	adds r0, #115	@ 000a6088 7330
.org 0xa608a
	ldrb r0, [r0, #0]	@ 000a608a 0078
.org 0xa608c
	cmp r0, #3	@ 000a608c 0328
.org 0xa608e
	bne.n 0xa60aa	@ 000a608e 0cd1
.org 0xa6090
	ldrb r1, [r4, #10]	@ 000a6090 a17a
.org 0xa6092
	movs r0, #254	@ 000a6092 fe20
.org 0xa6094
	ands r0, r1	@ 000a6094 0840
.org 0xa6096
	strb r0, [r4, #10]	@ 000a6096 a072
.org 0xa6098
	ldr r1, [pc, #24]	@ 000a6098 0649
.org 0xa609a
	ldrb r0, [r4, #9]	@ 000a609a 607a
.org 0xa609c
	lsls r0, r0, #2	@ 000a609c 8000
.org 0xa609e
	adds r0, r0, r1	@ 000a609e 4018
.org 0xa60a0
	movs r1, #4	@ 000a60a0 0421
.org 0xa60a2
	str r1, [r4, #12]	@ 000a60a2 e160
.org 0xa60a4
	ldr r0, [r0, #0]	@ 000a60a4 0068
.org 0xa60a6
	ldr r0, [r0, #16]	@ 000a60a6 0069
.org 0xa60a8
	str r0, [r4, #20]	@ 000a60a8 6061
.org 0xa60aa
	pop {r4}	@ 000a60aa 10bc
.org 0xa60ac
	pop {r0}	@ 000a60ac 01bc
.org 0xa60ae
	bx r0	@ 000a60ae 0047
