@ FUN_080809cc  entry 0x080809cc  size 102
.thumb
.org 0x809cc
FUN_080809cc:
	push {r4, r5, lr}	@ 000809cc 30b5
.org 0x809ce
	adds r5, r0, #0	@ 000809ce 051c
.org 0x809d0
	ldrb r0, [r5, #15]	@ 000809d0 e87b
.org 0x809d2
	cmp r0, #0	@ 000809d2 0028
.org 0x809d4
	bne.n 0x809e6	@ 000809d4 07d1
.org 0x809d6
	movs r1, #192	@ 000809d6 c021
.org 0x809d8
	lsls r1, r1, #5	@ 000809d8 4901
.org 0x809da
	adds r0, r5, #0	@ 000809da 281c
.org 0x809dc
	bl 0x1cf00	@ 000809dc 9cf790fa
.org 0x809e0
	ldrb r0, [r5, #15]	@ 000809e0 e87b
.org 0x809e2
	adds r0, #1	@ 000809e2 0130
.org 0x809e4
	strb r0, [r5, #15]	@ 000809e4 e873
.org 0x809e6
	adds r0, r5, #0	@ 000809e6 281c
.org 0x809e8
	bl 0x1cff0	@ 000809e8 9cf702fb
.org 0x809ec
	adds r0, r5, #0	@ 000809ec 281c
.org 0x809ee
	adds r0, #116	@ 000809ee 7430
.org 0x809f0
	ldr r4, [pc, #64]	@ 000809f0 104c
.org 0x809f2
	adds r1, r5, #0	@ 000809f2 291c
.org 0x809f4
	adds r1, #181	@ 000809f4 b531
.org 0x809f6
	ldrb r3, [r1, #0]	@ 000809f6 0b78
.org 0x809f8
	lsls r3, r3, #2	@ 000809f8 9b00
.org 0x809fa
	ldrb r1, [r5, #30]	@ 000809fa a97f
.org 0x809fc
	lsls r1, r1, #8	@ 000809fc 0902
.org 0x809fe
	adds r2, r5, #0	@ 000809fe 2a1c
.org 0x80a00
	adds r2, #112	@ 00080a00 7032
.org 0x80a02
	ldrb r2, [r2, #0]	@ 00080a02 1278
.org 0x80a04
	orrs r1, r2	@ 00080a04 1143
.org 0x80a06
	ldr r2, [pc, #48]	@ 00080a06 0c4a
.org 0x80a08
	adds r1, r1, r2	@ 00080a08 8918
.org 0x80a0a
	lsls r1, r1, #3	@ 00080a0a c900
.org 0x80a0c
	adds r3, r3, r1	@ 00080a0c 5b18
.org 0x80a0e
	adds r3, r3, r4	@ 00080a0e 1b19
.org 0x80a10
	adds r1, r5, #0	@ 00080a10 291c
.org 0x80a12
	adds r1, #113	@ 00080a12 7131
.org 0x80a14
	ldrb r1, [r1, #0]	@ 00080a14 0978
.org 0x80a16
	lsls r1, r1, #24	@ 00080a16 0906
.org 0x80a18
	asrs r1, r1, #24	@ 00080a18 0916
.org 0x80a1a
	ldr r2, [r3, #0]	@ 00080a1a 1a68
.org 0x80a1c
	lsls r1, r1, #2	@ 00080a1c 8900
.org 0x80a1e
	adds r1, r1, r2	@ 00080a1e 8918
.org 0x80a20
	ldr r1, [r1, #0]	@ 00080a20 0968
.org 0x80a22
	bl 0x5784	@ 00080a22 84f7affe
.org 0x80a26
	adds r0, r5, #0	@ 00080a26 281c
.org 0x80a28
	bl 0x81184	@ 00080a28 00f0acfb
.org 0x80a2c
	pop {r4, r5}	@ 00080a2c 30bc
.org 0x80a2e
	pop {r0}	@ 00080a2e 01bc
.org 0x80a30
	bx r0	@ 00080a30 0047
