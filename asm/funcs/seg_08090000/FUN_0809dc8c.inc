@ FUN_0809dc8c  entry 0x0809dc8c  size 72
.thumb
.org 0x9dc8c
FUN_0809dc8c:
	push {r4, r5, lr}	@ 0009dc8c 30b5
.org 0x9dc8e
	adds r4, r0, #0	@ 0009dc8e 041c
.org 0x9dc90
	ldr r0, [r4, #20]	@ 0009dc90 6069
.org 0x9dc92
	movs r5, #1	@ 0009dc92 0125
.org 0x9dc94
	ands r0, r5	@ 0009dc94 2840
.org 0x9dc96
	cmp r0, #0	@ 0009dc96 0028
.org 0x9dc98
	beq.n 0x9dcce	@ 0009dc98 19d0
.org 0x9dc9a
	movs r0, #29	@ 0009dc9a 1d20
.org 0x9dc9c
	bl 0x6984	@ 0009dc9c 68f772fe
.org 0x9dca0
	ldr r2, [r4, #44]	@ 0009dca0 e26a
.org 0x9dca2
	ldr r1, [r4, #20]	@ 0009dca2 6169
.org 0x9dca4
	movs r0, #128	@ 0009dca4 8020
.org 0x9dca6
	lsls r0, r0, #2	@ 0009dca6 8000
.org 0x9dca8
	ands r0, r1	@ 0009dca8 0840
.org 0x9dcaa
	cmp r0, #0	@ 0009dcaa 0028
.org 0x9dcac
	beq.n 0x9dcce	@ 0009dcac 0fd0
.org 0x9dcae
	movs r0, #128	@ 0009dcae 8020
.org 0x9dcb0
	lsls r0, r0, #10	@ 0009dcb0 8002
.org 0x9dcb2
	ands r1, r0	@ 0009dcb2 0140
.org 0x9dcb4
	cmp r1, #0	@ 0009dcb4 0029
.org 0x9dcb6
	beq.n 0x9dcce	@ 0009dcb6 0ad0
.org 0x9dcb8
	adds r0, r2, #0	@ 0009dcb8 101c
.org 0x9dcba
	adds r0, #190	@ 0009dcba be30
.org 0x9dcbc
	strb r5, [r0, #0]	@ 0009dcbc 0570
.org 0x9dcbe
	ldr r0, [pc, #20]	@ 0009dcbe 0548
.org 0x9dcc0
	ldr r0, [r0, #0]	@ 0009dcc0 0068
.org 0x9dcc2
	cmp r0, #0	@ 0009dcc2 0028
.org 0x9dcc4
	beq.n 0x9dcce	@ 0009dcc4 03d0
.org 0x9dcc6
	movs r1, #3	@ 0009dcc6 0321
.org 0x9dcc8
	movs r2, #13	@ 0009dcc8 0d22
.org 0x9dcca
	bl 0x3a578	@ 0009dcca 9cf755fc
.org 0x9dcce
	pop {r4, r5}	@ 0009dcce 30bc
.org 0x9dcd0
	pop {r0}	@ 0009dcd0 01bc
.org 0x9dcd2
	bx r0	@ 0009dcd2 0047
