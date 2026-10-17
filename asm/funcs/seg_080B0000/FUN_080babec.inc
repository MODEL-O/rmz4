@ FUN_080babec  entry 0x080babec  size 100
.thumb
.org 0xbabec
FUN_080babec:
	push {r4, r5, lr}	@ 000babec 30b5
.org 0xbabee
	adds r3, r0, #0	@ 000babee 031c
.org 0xbabf0
	ldr r2, [r3, #40]	@ 000babf0 9a6a
.org 0xbabf2
	ldr r0, [pc, #92]	@ 000babf2 1748
.org 0xbabf4
	movs r4, #0	@ 000babf4 0024
.org 0xbabf6
	strh r4, [r0, #0]	@ 000babf6 0480
.org 0xbabf8
	movs r0, #69	@ 000babf8 4520
.org 0xbabfa
	adds r0, r0, r3	@ 000babfa c018
.org 0xbabfc
	mov ip, r0	@ 000babfc 8446
.org 0xbabfe
	ldrb r1, [r0, #0]	@ 000babfe 0178
.org 0xbac00
	movs r0, #13	@ 000bac00 0d20
.org 0xbac02
	negs r0, r0	@ 000bac02 4042
.org 0xbac04
	ands r0, r1	@ 000bac04 0840
.org 0xbac06
	mov r1, ip	@ 000bac06 6146
.org 0xbac08
	strb r0, [r1, #0]	@ 000bac08 0870
.org 0xbac0a
	adds r2, #204	@ 000bac0a cc32
.org 0xbac0c
	ldrh r1, [r2, #0]	@ 000bac0c 1188
.org 0xbac0e
	movs r5, #0	@ 000bac0e 0025
.org 0xbac10
	ldrsh r0, [r2, r5]	@ 000bac10 505f
.org 0xbac12
	cmp r0, #0	@ 000bac12 0028
.org 0xbac14
	beq.n 0xbac1a	@ 000bac14 01d0
.org 0xbac16
	subs r0, r1, #1	@ 000bac16 481e
.org 0xbac18
	strh r0, [r2, #0]	@ 000bac18 1080
.org 0xbac1a
	adds r0, r3, #0	@ 000bac1a 181c
.org 0xbac1c
	adds r0, #140	@ 000bac1c 8c30
.org 0xbac1e
	str r4, [r0, #0]	@ 000bac1e 0460
.org 0xbac20
	adds r0, #4	@ 000bac20 0430
.org 0xbac22
	str r4, [r0, #0]	@ 000bac22 0460
.org 0xbac24
	adds r1, r3, #0	@ 000bac24 191c
.org 0xbac26
	adds r1, #148	@ 000bac26 9431
.org 0xbac28
	movs r0, #0	@ 000bac28 0020
.org 0xbac2a
	strb r0, [r1, #0]	@ 000bac2a 0870
.org 0xbac2c
	ldrb r1, [r3, #10]	@ 000bac2c 997a
.org 0xbac2e
	movs r0, #251	@ 000bac2e fb20
.org 0xbac30
	ands r0, r1	@ 000bac30 0840
.org 0xbac32
	movs r1, #254	@ 000bac32 fe21
.org 0xbac34
	ands r0, r1	@ 000bac34 0840
.org 0xbac36
	strb r0, [r3, #10]	@ 000bac36 9872
.org 0xbac38
	ldr r1, [pc, #24]	@ 000bac38 0649
.org 0xbac3a
	ldrb r0, [r3, #9]	@ 000bac3a 587a
.org 0xbac3c
	lsls r0, r0, #2	@ 000bac3c 8000
.org 0xbac3e
	adds r0, r0, r1	@ 000bac3e 4018
.org 0xbac40
	movs r1, #4	@ 000bac40 0421
.org 0xbac42
	str r1, [r3, #12]	@ 000bac42 d960
.org 0xbac44
	ldr r0, [r0, #0]	@ 000bac44 0068
.org 0xbac46
	ldr r0, [r0, #16]	@ 000bac46 0069
.org 0xbac48
	str r0, [r3, #20]	@ 000bac48 5861
.org 0xbac4a
	pop {r4, r5}	@ 000bac4a 30bc
.org 0xbac4c
	pop {r0}	@ 000bac4c 01bc
.org 0xbac4e
	bx r0	@ 000bac4e 0047
