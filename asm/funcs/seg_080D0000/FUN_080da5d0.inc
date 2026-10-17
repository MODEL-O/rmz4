@ FUN_080da5d0  entry 0x080da5d0  size 80
.thumb
.org 0xda5d0
FUN_080da5d0:
	push {lr}	@ 000da5d0 00b5
.org 0xda5d2
	adds r3, r0, #0	@ 000da5d2 031c
.org 0xda5d4
	ldr r2, [pc, #72]	@ 000da5d4 124a
.org 0xda5d6
	ldr r1, [r3, #84]	@ 000da5d6 596d
.org 0xda5d8
	ldr r0, [pc, #72]	@ 000da5d8 1248
.org 0xda5da
	adds r1, r1, r0	@ 000da5da 0918
.org 0xda5dc
	ldr r0, [r2, #44]	@ 000da5dc d06a
.org 0xda5de
	subs r1, r1, r0	@ 000da5de 091a
.org 0xda5e0
	str r1, [r3, #84]	@ 000da5e0 5965
.org 0xda5e2
	ldr r0, [r3, #88]	@ 000da5e2 986d
.org 0xda5e4
	ldr r2, [r2, #48]	@ 000da5e4 126b
.org 0xda5e6
	subs r0, r0, r2	@ 000da5e6 801a
.org 0xda5e8
	str r0, [r3, #88]	@ 000da5e8 9865
.org 0xda5ea
	ldr r0, [pc, #60]	@ 000da5ea 0f48
.org 0xda5ec
	movs r2, #240	@ 000da5ec f022
.org 0xda5ee
	lsls r2, r2, #7	@ 000da5ee d201
.org 0xda5f0
	adds r1, r1, r2	@ 000da5f0 8918
.org 0xda5f2
	ldr r0, [r0, #56]	@ 000da5f2 806b
.org 0xda5f4
	subs r0, r0, r1	@ 000da5f4 401a
.org 0xda5f6
	movs r1, #128	@ 000da5f6 8021
.org 0xda5f8
	lsls r1, r1, #7	@ 000da5f8 c901
.org 0xda5fa
	cmp r0, r1	@ 000da5fa 8842
.org 0xda5fc
	ble.n 0xda61c	@ 000da5fc 0edd
.org 0xda5fe
	ldrb r1, [r3, #10]	@ 000da5fe 997a
.org 0xda600
	movs r0, #254	@ 000da600 fe20
.org 0xda602
	ands r0, r1	@ 000da602 0840
.org 0xda604
	movs r1, #253	@ 000da604 fd21
.org 0xda606
	ands r0, r1	@ 000da606 0840
.org 0xda608
	strb r0, [r3, #10]	@ 000da608 9872
.org 0xda60a
	ldr r1, [pc, #32]	@ 000da60a 0849
.org 0xda60c
	ldrb r0, [r3, #9]	@ 000da60c 587a
.org 0xda60e
	lsls r0, r0, #2	@ 000da60e 8000
.org 0xda610
	adds r0, r0, r1	@ 000da610 4018
.org 0xda612
	movs r1, #3	@ 000da612 0321
.org 0xda614
	str r1, [r3, #12]	@ 000da614 d960
.org 0xda616
	ldr r0, [r0, #0]	@ 000da616 0068
.org 0xda618
	ldr r0, [r0, #12]	@ 000da618 c068
.org 0xda61a
	str r0, [r3, #20]	@ 000da61a 5861
.org 0xda61c
	pop {r0}	@ 000da61c 01bc
.org 0xda61e
	bx r0	@ 000da61e 0047
