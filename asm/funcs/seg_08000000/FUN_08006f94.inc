@ FUN_08006f94  entry 0x08006f94  size 136
.thumb
.org 0x6f94
FUN_08006f94:
	push {r4, r5, r6, lr}	@ 00006f94 70b5
.org 0x6f96
	mov r6, r9	@ 00006f96 4e46
.org 0x6f98
	mov r5, r8	@ 00006f98 4546
.org 0x6f9a
	push {r5, r6}	@ 00006f9a 60b4
.org 0x6f9c
	lsls r5, r0, #4	@ 00006f9c 0501
.org 0x6f9e
	adds r5, r5, r0	@ 00006f9e 2d18
.org 0x6fa0
	lsls r5, r5, #3	@ 00006fa0 ed00
.org 0x6fa2
	ldr r0, [pc, #120]	@ 00006fa2 1e48
.org 0x6fa4
	adds r5, r5, r0	@ 00006fa4 2d18
.org 0x6fa6
	adds r5, #20	@ 00006fa6 1435
.org 0x6fa8
	ldr r6, [r1, #0]	@ 00006fa8 0e68
.org 0x6faa
	asrs r6, r6, #8	@ 00006faa 3612
.org 0x6fac
	ldr r1, [r1, #4]	@ 00006fac 4968
.org 0x6fae
	mov r8, r1	@ 00006fae 8846
.org 0x6fb0
	mov r0, r8	@ 00006fb0 4046
.org 0x6fb2
	asrs r0, r0, #8	@ 00006fb2 0012
.org 0x6fb4
	mov r8, r0	@ 00006fb4 8046
.org 0x6fb6
	adds r0, r6, #0	@ 00006fb6 301c
.org 0x6fb8
	movs r1, #240	@ 00006fb8 f021
.org 0x6fba
	bl 0x128fb8	@ 00006fba 21f1fdff
.org 0x6fbe
	adds r4, r0, #0	@ 00006fbe 041c
.org 0x6fc0
	mov r0, r8	@ 00006fc0 4046
.org 0x6fc2
	movs r1, #160	@ 00006fc2 a021
.org 0x6fc4
	bl 0x128fb8	@ 00006fc4 21f1f8ff
.org 0x6fc8
	ldr r2, [r5, #20]	@ 00006fc8 6a69
.org 0x6fca
	ldrb r1, [r2, #0]	@ 00006fca 1178
.org 0x6fcc
	muls r0, r1	@ 00006fcc 4843
.org 0x6fce
	adds r4, r4, r2	@ 00006fce a418
.org 0x6fd0
	adds r4, r4, r0	@ 00006fd0 2418
.org 0x6fd2
	ldrb r4, [r4, #4]	@ 00006fd2 2479
.org 0x6fd4
	mov r9, r4	@ 00006fd4 a146
.org 0x6fd6
	adds r0, r6, #0	@ 00006fd6 301c
.org 0x6fd8
	movs r1, #240	@ 00006fd8 f021
.org 0x6fda
	bl 0x129050	@ 00006fda 22f139f8
.org 0x6fde
	adds r4, r0, #0	@ 00006fde 041c
.org 0x6fe0
	lsls r4, r4, #12	@ 00006fe0 2403
.org 0x6fe2
	lsrs r4, r4, #16	@ 00006fe2 240c
.org 0x6fe4
	mov r0, r8	@ 00006fe4 4046
.org 0x6fe6
	movs r1, #160	@ 00006fe6 a021
.org 0x6fe8
	bl 0x129050	@ 00006fe8 22f132f8
.org 0x6fec
	lsls r0, r0, #12	@ 00006fec 0003
.org 0x6fee
	lsls r4, r4, #16	@ 00006fee 2404
.org 0x6ff0
	asrs r0, r0, #16	@ 00006ff0 0014
.org 0x6ff2
	ldr r3, [r5, #16]	@ 00006ff2 2b69
.org 0x6ff4
	lsls r2, r0, #4	@ 00006ff4 0201
.org 0x6ff6
	subs r2, r2, r0	@ 00006ff6 121a
.org 0x6ff8
	lsls r2, r2, #1	@ 00006ff8 5200
.org 0x6ffa
	asrs r4, r4, #15	@ 00006ffa e413
.org 0x6ffc
	mov r0, r9	@ 00006ffc 4846
.org 0x6ffe
	lsls r1, r0, #2	@ 00006ffe 8100
.org 0x7000
	add r1, r9	@ 00007000 4944
.org 0x7002
	lsls r0, r1, #4	@ 00007002 0801
.org 0x7004
	subs r0, r0, r1	@ 00007004 401a
.org 0x7006
	lsls r0, r0, #2	@ 00007006 8000
.org 0x7008
	adds r0, r0, r3	@ 00007008 c018
.org 0x700a
	adds r4, r4, r0	@ 0000700a 2418
.org 0x700c
	adds r2, r2, r4	@ 0000700c 1219
.org 0x700e
	ldrh r0, [r2, #0]	@ 0000700e 1088
.org 0x7010
	pop {r3, r4}	@ 00007010 18bc
.org 0x7012
	mov r8, r3	@ 00007012 9846
.org 0x7014
	mov r9, r4	@ 00007014 a146
.org 0x7016
	pop {r4, r5, r6}	@ 00007016 70bc
.org 0x7018
	pop {r1}	@ 00007018 02bc
.org 0x701a
	bx r1	@ 0000701a 0847
