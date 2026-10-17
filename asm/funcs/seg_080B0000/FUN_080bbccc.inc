@ FUN_080bbccc  entry 0x080bbccc  size 100
.thumb
.org 0xbbccc
FUN_080bbccc:
	push {r4, r5, lr}	@ 000bbccc 30b5
.org 0xbbcce
	adds r3, r0, #0	@ 000bbcce 031c
.org 0xbbcd0
	ldr r2, [r3, #40]	@ 000bbcd0 9a6a
.org 0xbbcd2
	ldr r0, [pc, #92]	@ 000bbcd2 1748
.org 0xbbcd4
	movs r4, #0	@ 000bbcd4 0024
.org 0xbbcd6
	strh r4, [r0, #0]	@ 000bbcd6 0480
.org 0xbbcd8
	movs r0, #69	@ 000bbcd8 4520
.org 0xbbcda
	adds r0, r0, r3	@ 000bbcda c018
.org 0xbbcdc
	mov ip, r0	@ 000bbcdc 8446
.org 0xbbcde
	ldrb r1, [r0, #0]	@ 000bbcde 0178
.org 0xbbce0
	movs r0, #13	@ 000bbce0 0d20
.org 0xbbce2
	negs r0, r0	@ 000bbce2 4042
.org 0xbbce4
	ands r0, r1	@ 000bbce4 0840
.org 0xbbce6
	mov r1, ip	@ 000bbce6 6146
.org 0xbbce8
	strb r0, [r1, #0]	@ 000bbce8 0870
.org 0xbbcea
	adds r2, #204	@ 000bbcea cc32
.org 0xbbcec
	ldrh r1, [r2, #0]	@ 000bbcec 1188
.org 0xbbcee
	movs r5, #0	@ 000bbcee 0025
.org 0xbbcf0
	ldrsh r0, [r2, r5]	@ 000bbcf0 505f
.org 0xbbcf2
	cmp r0, #0	@ 000bbcf2 0028
.org 0xbbcf4
	beq.n 0xbbcfa	@ 000bbcf4 01d0
.org 0xbbcf6
	subs r0, r1, #1	@ 000bbcf6 481e
.org 0xbbcf8
	strh r0, [r2, #0]	@ 000bbcf8 1080
.org 0xbbcfa
	adds r0, r3, #0	@ 000bbcfa 181c
.org 0xbbcfc
	adds r0, #140	@ 000bbcfc 8c30
.org 0xbbcfe
	str r4, [r0, #0]	@ 000bbcfe 0460
.org 0xbbd00
	adds r0, #4	@ 000bbd00 0430
.org 0xbbd02
	str r4, [r0, #0]	@ 000bbd02 0460
.org 0xbbd04
	adds r1, r3, #0	@ 000bbd04 191c
.org 0xbbd06
	adds r1, #148	@ 000bbd06 9431
.org 0xbbd08
	movs r0, #0	@ 000bbd08 0020
.org 0xbbd0a
	strb r0, [r1, #0]	@ 000bbd0a 0870
.org 0xbbd0c
	ldrb r1, [r3, #10]	@ 000bbd0c 997a
.org 0xbbd0e
	movs r0, #251	@ 000bbd0e fb20
.org 0xbbd10
	ands r0, r1	@ 000bbd10 0840
.org 0xbbd12
	movs r1, #254	@ 000bbd12 fe21
.org 0xbbd14
	ands r0, r1	@ 000bbd14 0840
.org 0xbbd16
	strb r0, [r3, #10]	@ 000bbd16 9872
.org 0xbbd18
	ldr r1, [pc, #24]	@ 000bbd18 0649
.org 0xbbd1a
	ldrb r0, [r3, #9]	@ 000bbd1a 587a
.org 0xbbd1c
	lsls r0, r0, #2	@ 000bbd1c 8000
.org 0xbbd1e
	adds r0, r0, r1	@ 000bbd1e 4018
.org 0xbbd20
	movs r1, #4	@ 000bbd20 0421
.org 0xbbd22
	str r1, [r3, #12]	@ 000bbd22 d960
.org 0xbbd24
	ldr r0, [r0, #0]	@ 000bbd24 0068
.org 0xbbd26
	ldr r0, [r0, #16]	@ 000bbd26 0069
.org 0xbbd28
	str r0, [r3, #20]	@ 000bbd28 5861
.org 0xbbd2a
	pop {r4, r5}	@ 000bbd2a 30bc
.org 0xbbd2c
	pop {r0}	@ 000bbd2c 01bc
.org 0xbbd2e
	bx r0	@ 000bbd2e 0047
