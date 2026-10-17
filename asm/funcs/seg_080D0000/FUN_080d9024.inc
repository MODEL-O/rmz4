@ FUN_080d9024  entry 0x080d9024  size 80
.thumb
.org 0xd9024
FUN_080d9024:
	push {r4, lr}	@ 000d9024 10b5
.org 0xd9026
	adds r4, r0, #0	@ 000d9026 041c
.org 0xd9028
	movs r1, #0	@ 000d9028 0021
.org 0xd902a
	movs r0, #20	@ 000d902a 1420
.org 0xd902c
	strb r0, [r4, #18]	@ 000d902c a074
.org 0xd902e
	strb r1, [r4, #19]	@ 000d902e e174
.org 0xd9030
	ldr r0, [r4, #92]	@ 000d9030 e06d
.org 0xd9032
	negs r0, r0	@ 000d9032 4042
.org 0xd9034
	lsls r0, r0, #1	@ 000d9034 4000
.org 0xd9036
	movs r1, #3	@ 000d9036 0321
.org 0xd9038
	bl 0x128fb8	@ 000d9038 4ff0beff
.org 0xd903c
	str r0, [r4, #92]	@ 000d903c e065
.org 0xd903e
	ldr r0, [r4, #96]	@ 000d903e 206e
.org 0xd9040
	cmp r0, #0	@ 000d9040 0028
.org 0xd9042
	beq.n 0xd9048	@ 000d9042 01d0
.org 0xd9044
	movs r0, #1	@ 000d9044 0120
.org 0xd9046
	strb r0, [r4, #19]	@ 000d9046 e074
.org 0xd9048
	adds r1, r4, #0	@ 000d9048 211c
.org 0xd904a
	adds r1, #124	@ 000d904a 7c31
.org 0xd904c
	ldrb r0, [r1, #0]	@ 000d904c 0878
.org 0xd904e
	cmp r0, #1	@ 000d904e 0128
.org 0xd9050
	bne.n 0xd905e	@ 000d9050 05d1
.org 0xd9052
	strb r0, [r4, #19]	@ 000d9052 e074
.org 0xd9054
	ldr r0, [r4, #88]	@ 000d9054 a06d
.org 0xd9056
	movs r2, #128	@ 000d9056 8022
.org 0xd9058
	lsls r2, r2, #4	@ 000d9058 1201
.org 0xd905a
	adds r0, r0, r2	@ 000d905a 8018
.org 0xd905c
	str r0, [r4, #88]	@ 000d905c a065
.org 0xd905e
	ldrb r1, [r1, #0]	@ 000d905e 0978
.org 0xd9060
	lsls r1, r1, #17	@ 000d9060 4904
.org 0xd9062
	ldr r0, [pc, #16]	@ 000d9062 0448
.org 0xd9064
	adds r1, r1, r0	@ 000d9064 0918
.org 0xd9066
	lsrs r1, r1, #16	@ 000d9066 090c
.org 0xd9068
	adds r0, r4, #0	@ 000d9068 201c
.org 0xd906a
	bl 0x1cf00	@ 000d906a 43f749ff
.org 0xd906e
	pop {r4}	@ 000d906e 10bc
.org 0xd9070
	pop {r0}	@ 000d9070 01bc
.org 0xd9072
	bx r0	@ 000d9072 0047
