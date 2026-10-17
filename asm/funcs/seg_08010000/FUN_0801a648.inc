@ FUN_0801a648  entry 0x0801a648  size 44
.thumb
.org 0x1a648
FUN_0801a648:
	push {lr}	@ 0001a648 00b5
.org 0x1a64a
	movs r0, #193	@ 0001a64a c120
.org 0x1a64c
	bl 0x2624	@ 0001a64c e7f7eaff
.org 0x1a650
	ldr r0, [pc, #32]	@ 0001a650 0848
.org 0x1a652
	ldr r1, [pc, #36]	@ 0001a652 0949
.org 0x1a654
	adds r3, r0, r1	@ 0001a654 4318
.org 0x1a656
	ldrh r1, [r3, #0]	@ 0001a656 1988
.org 0x1a658
	movs r2, #128	@ 0001a658 8022
.org 0x1a65a
	lsls r2, r2, #3	@ 0001a65a d200
.org 0x1a65c
	adds r0, r2, #0	@ 0001a65c 101c
.org 0x1a65e
	ands r0, r1	@ 0001a65e 0840
.org 0x1a660
	cmp r0, #0	@ 0001a660 0028
.org 0x1a662
	beq.n 0x1a66a	@ 0001a662 02d0
.org 0x1a664
	adds r0, r2, #0	@ 0001a664 101c
.org 0x1a666
	eors r0, r1	@ 0001a666 4840
.org 0x1a668
	strh r0, [r3, #0]	@ 0001a668 1880
.org 0x1a66a
	movs r0, #194	@ 0001a66a c220
.org 0x1a66c
	bl 0x2624	@ 0001a66c e7f7daff
.org 0x1a670
	pop {r0}	@ 0001a670 01bc
.org 0x1a672
	bx r0	@ 0001a672 0047
