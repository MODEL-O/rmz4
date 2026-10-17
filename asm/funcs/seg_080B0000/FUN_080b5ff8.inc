@ FUN_080b5ff8  entry 0x080b5ff8  size 112
.thumb
.org 0xb5ff8
FUN_080b5ff8:
	push {r4, r5, lr}	@ 000b5ff8 30b5
.org 0xb5ffa
	adds r4, r0, #0	@ 000b5ffa 041c
.org 0xb5ffc
	ldr r5, [r4, #40]	@ 000b5ffc a56a
.org 0xb5ffe
	ldrb r1, [r4, #15]	@ 000b5ffe e17b
.org 0xb6000
	cmp r1, #0	@ 000b6000 0029
.org 0xb6002
	bne.n 0xb6026	@ 000b6002 10d1
.org 0xb6004
	adds r0, #140	@ 000b6004 8c30
.org 0xb6006
	str r1, [r0, #0]	@ 000b6006 0160
.org 0xb6008
	adds r0, #4	@ 000b6008 0430
.org 0xb600a
	str r1, [r0, #0]	@ 000b600a 0160
.org 0xb600c
	adds r0, #4	@ 000b600c 0430
.org 0xb600e
	strb r1, [r0, #0]	@ 000b600e 0170
.org 0xb6010
	ldrb r1, [r4, #10]	@ 000b6010 a17a
.org 0xb6012
	movs r0, #251	@ 000b6012 fb20
.org 0xb6014
	ands r0, r1	@ 000b6014 0840
.org 0xb6016
	strb r0, [r4, #10]	@ 000b6016 a072
.org 0xb6018
	ldr r1, [pc, #76]	@ 000b6018 1349
.org 0xb601a
	adds r0, r4, #0	@ 000b601a 201c
.org 0xb601c
	bl 0x1cf00	@ 000b601c 66f770ff
.org 0xb6020
	ldrb r0, [r4, #15]	@ 000b6020 e07b
.org 0xb6022
	adds r0, #1	@ 000b6022 0130
.org 0xb6024
	strb r0, [r4, #15]	@ 000b6024 e073
.org 0xb6026
	adds r0, r4, #0	@ 000b6026 201c
.org 0xb6028
	bl 0x1cff0	@ 000b6028 66f7e2ff
.org 0xb602c
	adds r0, r4, #0	@ 000b602c 201c
.org 0xb602e
	adds r0, #115	@ 000b602e 7330
.org 0xb6030
	ldrb r0, [r0, #0]	@ 000b6030 0078
.org 0xb6032
	cmp r0, #3	@ 000b6032 0328
.org 0xb6034
	bne.n 0xb6062	@ 000b6034 15d1
.org 0xb6036
	adds r1, r5, #0	@ 000b6036 291c
.org 0xb6038
	adds r1, #204	@ 000b6038 cc31
.org 0xb603a
	ldrh r2, [r1, #0]	@ 000b603a 0a88
.org 0xb603c
	movs r3, #0	@ 000b603c 0023
.org 0xb603e
	ldrsh r0, [r1, r3]	@ 000b603e c85e
.org 0xb6040
	cmp r0, #0	@ 000b6040 0028
.org 0xb6042
	beq.n 0xb6048	@ 000b6042 01d0
.org 0xb6044
	subs r0, r2, #1	@ 000b6044 501e
.org 0xb6046
	strh r0, [r1, #0]	@ 000b6046 0880
.org 0xb6048
	ldrb r1, [r4, #10]	@ 000b6048 a17a
.org 0xb604a
	movs r0, #254	@ 000b604a fe20
.org 0xb604c
	ands r0, r1	@ 000b604c 0840
.org 0xb604e
	strb r0, [r4, #10]	@ 000b604e a072
.org 0xb6050
	ldr r1, [pc, #24]	@ 000b6050 0649
.org 0xb6052
	ldrb r0, [r4, #9]	@ 000b6052 607a
.org 0xb6054
	lsls r0, r0, #2	@ 000b6054 8000
.org 0xb6056
	adds r0, r0, r1	@ 000b6056 4018
.org 0xb6058
	movs r1, #4	@ 000b6058 0421
.org 0xb605a
	str r1, [r4, #12]	@ 000b605a e160
.org 0xb605c
	ldr r0, [r0, #0]	@ 000b605c 0068
.org 0xb605e
	ldr r0, [r0, #16]	@ 000b605e 0069
.org 0xb6060
	str r0, [r4, #20]	@ 000b6060 6061
.org 0xb6062
	pop {r4, r5}	@ 000b6062 30bc
.org 0xb6064
	pop {r0}	@ 000b6064 01bc
.org 0xb6066
	bx r0	@ 000b6066 0047
