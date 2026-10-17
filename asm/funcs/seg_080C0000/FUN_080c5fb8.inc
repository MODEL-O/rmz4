@ FUN_080c5fb8  entry 0x080c5fb8  size 186
.thumb
.org 0xc5fb8
FUN_080c5fb8:
	push {r4, r5, r6, r7, lr}	@ 000c5fb8 f0b5
.org 0xc5fba
	mov r7, sl	@ 000c5fba 5746
.org 0xc5fbc
	mov r6, r9	@ 000c5fbc 4e46
.org 0xc5fbe
	mov r5, r8	@ 000c5fbe 4546
.org 0xc5fc0
	push {r5, r6, r7}	@ 000c5fc0 e0b4
.org 0xc5fc2
	sub sp, #16	@ 000c5fc2 84b0
.org 0xc5fc4
	adds r6, r0, #0	@ 000c5fc4 061c
.org 0xc5fc6
	ldrb r0, [r6, #10]	@ 000c5fc6 b07a
.org 0xc5fc8
	lsrs r5, r0, #4	@ 000c5fc8 0509
.org 0xc5fca
	movs r2, #1	@ 000c5fca 0122
.org 0xc5fcc
	ands r5, r2	@ 000c5fcc 1540
.org 0xc5fce
	str r5, [sp, #8]	@ 000c5fce 0295
.org 0xc5fd0
	ldr r3, [pc, #160]	@ 000c5fd0 284b
.org 0xc5fd2
	ldr r0, [r3, #0]	@ 000c5fd2 1868
.org 0xc5fd4
	ldr r1, [pc, #160]	@ 000c5fd4 2849
.org 0xc5fd6
	mov r8, r1	@ 000c5fd6 8846
.org 0xc5fd8
	mov r1, r8	@ 000c5fd8 4146
.org 0xc5fda
	muls r1, r0	@ 000c5fda 4143
.org 0xc5fdc
	adds r0, r1, #0	@ 000c5fdc 081c
.org 0xc5fde
	ldr r7, [pc, #156]	@ 000c5fde 274f
.org 0xc5fe0
	adds r0, r0, r7	@ 000c5fe0 c019
.org 0xc5fe2
	lsls r0, r0, #1	@ 000c5fe2 4000
.org 0xc5fe4
	lsrs r1, r0, #1	@ 000c5fe4 4108
.org 0xc5fe6
	str r1, [r3, #0]	@ 000c5fe6 1960
.org 0xc5fe8
	lsrs r0, r0, #17	@ 000c5fe8 400c
.org 0xc5fea
	ands r0, r2	@ 000c5fea 1040
.org 0xc5fec
	adds r4, r0, #5	@ 000c5fec 441d
.org 0xc5fee
	cmp r4, #0	@ 000c5fee 002c
.org 0xc5ff0
	beq.n 0xc6062	@ 000c5ff0 37d0
.org 0xc5ff2
	mov sl, r3	@ 000c5ff2 9a46
.org 0xc5ff4
	mov r9, r8	@ 000c5ff4 c146
.org 0xc5ff6
	mov r8, r7	@ 000c5ff6 b846
.org 0xc5ff8
	movs r7, #15	@ 000c5ff8 0f27
.org 0xc5ffa
	mov r2, sp	@ 000c5ffa 6a46
.org 0xc5ffc
	str r2, [sp, #12]	@ 000c5ffc 0392
.org 0xc5ffe
	mov r1, sl	@ 000c5ffe 5146
.org 0xc6000
	ldr r0, [r1, #0]	@ 000c6000 0868
.org 0xc6002
	mov r2, r9	@ 000c6002 4a46
.org 0xc6004
	muls r2, r0	@ 000c6004 4243
.org 0xc6006
	adds r0, r2, #0	@ 000c6006 101c
.org 0xc6008
	add r0, r8	@ 000c6008 4044
.org 0xc600a
	lsls r0, r0, #1	@ 000c600a 4000
.org 0xc600c
	lsrs r2, r0, #1	@ 000c600c 4208
.org 0xc600e
	lsrs r0, r0, #17	@ 000c600e 400c
.org 0xc6010
	ands r0, r7	@ 000c6010 3840
.org 0xc6012
	subs r0, #7	@ 000c6012 0738
.org 0xc6014
	lsls r0, r0, #8	@ 000c6014 0002
.org 0xc6016
	ldr r1, [r6, #84]	@ 000c6016 716d
.org 0xc6018
	adds r1, r1, r0	@ 000c6018 0918
.org 0xc601a
	str r1, [sp, #0]	@ 000c601a 0091
.org 0xc601c
	mov r0, r9	@ 000c601c 4846
.org 0xc601e
	muls r0, r2	@ 000c601e 5043
.org 0xc6020
	add r0, r8	@ 000c6020 4044
.org 0xc6022
	lsls r0, r0, #1	@ 000c6022 4000
.org 0xc6024
	lsrs r1, r0, #1	@ 000c6024 4108
.org 0xc6026
	mov r2, sl	@ 000c6026 5246
.org 0xc6028
	str r1, [r2, #0]	@ 000c6028 1160
.org 0xc602a
	lsrs r0, r0, #17	@ 000c602a 400c
.org 0xc602c
	ands r0, r7	@ 000c602c 3840
.org 0xc602e
	lsls r0, r0, #8	@ 000c602e 0002
.org 0xc6030
	ldr r1, [pc, #76]	@ 000c6030 1349
.org 0xc6032
	adds r0, r0, r1	@ 000c6032 4018
.org 0xc6034
	ldr r1, [r6, #88]	@ 000c6034 b16d
.org 0xc6036
	adds r1, r1, r0	@ 000c6036 0918
.org 0xc6038
	ldr r2, [sp, #12]	@ 000c6038 039a
.org 0xc603a
	str r1, [r2, #4]	@ 000c603a 5160
.org 0xc603c
	movs r0, #3	@ 000c603c 0320
.org 0xc603e
	ands r0, r4	@ 000c603e 2040
.org 0xc6040
	lsls r1, r0, #3	@ 000c6040 c100
.org 0xc6042
	subs r1, r1, r0	@ 000c6042 091a
.org 0xc6044
	lsls r1, r1, #2	@ 000c6044 8900
.org 0xc6046
	ldr r0, [pc, #60]	@ 000c6046 0f48
.org 0xc6048
	adds r1, r1, r0	@ 000c6048 0918
.org 0xc604a
	ldr r0, [sp, #8]	@ 000c604a 0298
.org 0xc604c
	lsls r3, r0, #4	@ 000c604c 0301
.org 0xc604e
	orrs r3, r5	@ 000c604e 2b43
.org 0xc6050
	lsls r3, r3, #24	@ 000c6050 1b06
.org 0xc6052
	mov r0, sp	@ 000c6052 6846
.org 0xc6054
	movs r2, #0	@ 000c6054 0022
.org 0xc6056
	lsrs r3, r3, #24	@ 000c6056 1b0e
.org 0xc6058
	bl 0xd4c8c	@ 000c6058 0ef018fe
.org 0xc605c
	subs r4, #1	@ 000c605c 013c
.org 0xc605e
	cmp r4, #0	@ 000c605e 002c
.org 0xc6060
	bne.n 0xc5ffe	@ 000c6060 cdd1
.org 0xc6062
	add sp, #16	@ 000c6062 04b0
.org 0xc6064
	pop {r3, r4, r5}	@ 000c6064 38bc
.org 0xc6066
	mov r8, r3	@ 000c6066 9846
.org 0xc6068
	mov r9, r4	@ 000c6068 a146
.org 0xc606a
	mov sl, r5	@ 000c606a aa46
.org 0xc606c
	pop {r4, r5, r6, r7}	@ 000c606c f0bc
.org 0xc606e
	pop {r0}	@ 000c606e 01bc
.org 0xc6070
	bx r0	@ 000c6070 0047
