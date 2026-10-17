@ FUN_080ca874  entry 0x080ca874  size 66
.thumb
.org 0xca874
FUN_080ca874:
	push {r4, lr}	@ 000ca874 10b5
.org 0xca876
	adds r4, r0, #0	@ 000ca876 041c
.org 0xca878
	bl 0x1cff0	@ 000ca878 52f7bafb
.org 0xca87c
	ldr r0, [r4, #84]	@ 000ca87c 606d
.org 0xca87e
	ldr r1, [r4, #92]	@ 000ca87e e16d
.org 0xca880
	adds r0, r0, r1	@ 000ca880 4018
.org 0xca882
	str r0, [r4, #84]	@ 000ca882 6065
.org 0xca884
	ldr r0, [r4, #88]	@ 000ca884 a06d
.org 0xca886
	ldr r1, [r4, #96]	@ 000ca886 216e
.org 0xca888
	adds r0, r0, r1	@ 000ca888 4018
.org 0xca88a
	str r0, [r4, #88]	@ 000ca88a a065
.org 0xca88c
	ldr r0, [pc, #40]	@ 000ca88c 0a48
.org 0xca88e
	adds r1, r4, #0	@ 000ca88e 211c
.org 0xca890
	adds r1, #84	@ 000ca890 5431
.org 0xca892
	bl 0x1fb14	@ 000ca892 55f73ff9
.org 0xca896
	movs r1, #192	@ 000ca896 c021
.org 0xca898
	lsls r1, r1, #7	@ 000ca898 c901
.org 0xca89a
	cmp r0, r1	@ 000ca89a 8842
.org 0xca89c
	bls.n 0xca8b0	@ 000ca89c 08d9
.org 0xca89e
	ldr r1, [pc, #28]	@ 000ca89e 0749
.org 0xca8a0
	ldrb r0, [r4, #9]	@ 000ca8a0 607a
.org 0xca8a2
	lsls r0, r0, #2	@ 000ca8a2 8000
.org 0xca8a4
	adds r0, r0, r1	@ 000ca8a4 4018
.org 0xca8a6
	movs r1, #2	@ 000ca8a6 0221
.org 0xca8a8
	str r1, [r4, #12]	@ 000ca8a8 e160
.org 0xca8aa
	ldr r0, [r0, #0]	@ 000ca8aa 0068
.org 0xca8ac
	ldr r0, [r0, #8]	@ 000ca8ac 8068
.org 0xca8ae
	str r0, [r4, #20]	@ 000ca8ae 6061
.org 0xca8b0
	pop {r4}	@ 000ca8b0 10bc
.org 0xca8b2
	pop {r0}	@ 000ca8b2 01bc
.org 0xca8b4
	bx r0	@ 000ca8b4 0047
