@ FUN_0811004c  entry 0x0811004c  size 124
.thumb
.org 0x11004c
FUN_0811004c:
	push {r4, lr}	@ 0011004c 10b5
.org 0x11004e
	lsls r0, r0, #24	@ 0011004e 0006
.org 0x110050
	lsrs r4, r0, #24	@ 00110050 040e
.org 0x110052
	movs r0, #160	@ 00110052 a020
.org 0x110054
	lsls r0, r0, #1	@ 00110054 4000
.org 0x110056
	bl 0xa70	@ 00110056 f0f60bfd
.org 0x11005a
	adds r3, r0, #0	@ 0011005a 031c
.org 0x11005c
	cmp r3, #0	@ 0011005c 002b
.org 0x11005e
	beq.n 0x1100c2	@ 0011005e 30d0
.org 0x110060
	ldr r2, [pc, #100]	@ 00110060 194a
.org 0x110062
	movs r1, #200	@ 00110062 c821
.org 0x110064
	lsls r1, r1, #1	@ 00110064 4900
.org 0x110066
	adds r0, r2, r1	@ 00110066 5018
.org 0x110068
	str r3, [r0, #0]	@ 00110068 0360
.org 0x11006a
	movs r0, #202	@ 0011006a ca20
.org 0x11006c
	lsls r0, r0, #1	@ 0011006c 4000
.org 0x11006e
	adds r1, r2, r0	@ 0011006e 1118
.org 0x110070
	ldr r0, [pc, #88]	@ 00110070 1648
.org 0x110072
	str r0, [r1, #0]	@ 00110072 0860
.org 0x110074
	movs r0, #204	@ 00110074 cc20
.org 0x110076
	lsls r0, r0, #1	@ 00110076 4000
.org 0x110078
	adds r1, r2, r0	@ 00110078 1118
.org 0x11007a
	ldr r0, [pc, #84]	@ 0011007a 1548
.org 0x11007c
	str r0, [r1, #0]	@ 0011007c 0860
.org 0x11007e
	ldr r1, [pc, #84]	@ 0011007e 1549
.org 0x110080
	lsls r0, r4, #26	@ 00110080 a006
.org 0x110082
	movs r2, #128	@ 00110082 8022
.org 0x110084
	lsls r2, r2, #23	@ 00110084 d205
.org 0x110086
	adds r0, r0, r2	@ 00110086 8018
.org 0x110088
	lsrs r0, r0, #23	@ 00110088 c00d
.org 0x11008a
	adds r0, r0, r1	@ 0011008a 4018
.org 0x11008c
	movs r1, #0	@ 0011008c 0021
.org 0x11008e
	ldrsh r0, [r0, r1]	@ 0011008e 405e
.org 0x110090
	movs r2, #128	@ 00110090 8022
.org 0x110092
	lsls r2, r2, #1	@ 00110092 5200
.org 0x110094
	adds r0, r0, r2	@ 00110094 8018
.org 0x110096
	lsls r1, r0, #4	@ 00110096 0101
.org 0x110098
	subs r1, r1, r0	@ 00110098 091a
.org 0x11009a
	asrs r1, r1, #5	@ 0011009a 4911
.org 0x11009c
	negs r0, r1	@ 0011009c 4842
.org 0x11009e
	strh r0, [r3, #0]	@ 0011009e 1880
.org 0x1100a0
	strh r1, [r3, #2]	@ 001100a0 5980
.org 0x1100a2
	adds r1, r3, #4	@ 001100a2 191d
.org 0x1100a4
	movs r2, #156	@ 001100a4 9c22
.org 0x1100a6
	ldrh r0, [r3, #0]	@ 001100a6 1888
.org 0x1100a8
	strh r0, [r1, #0]	@ 001100a8 0880
.org 0x1100aa
	adds r1, #4	@ 001100aa 0431
.org 0x1100ac
	subs r2, #2	@ 001100ac 023a
.org 0x1100ae
	cmp r2, #0	@ 001100ae 002a
.org 0x1100b0
	bge.n 0x1100a6	@ 001100b0 f9da
.org 0x1100b2
	adds r1, r3, #6	@ 001100b2 991d
.org 0x1100b4
	movs r2, #156	@ 001100b4 9c22
.org 0x1100b6
	ldrh r0, [r3, #2]	@ 001100b6 5888
.org 0x1100b8
	strh r0, [r1, #0]	@ 001100b8 0880
.org 0x1100ba
	adds r1, #4	@ 001100ba 0431
.org 0x1100bc
	subs r2, #2	@ 001100bc 023a
.org 0x1100be
	cmp r2, #0	@ 001100be 002a
.org 0x1100c0
	bge.n 0x1100b6	@ 001100c0 f9da
.org 0x1100c2
	pop {r4}	@ 001100c2 10bc
.org 0x1100c4
	pop {r0}	@ 001100c4 01bc
.org 0x1100c6
	bx r0	@ 001100c6 0047
