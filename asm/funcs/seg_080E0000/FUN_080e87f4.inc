@ FUN_080e87f4  entry 0x080e87f4  size 48
.thumb
.org 0xe87f4
FUN_080e87f4:
	push {lr}	@ 000e87f4 00b5
.org 0xe87f6
	adds r2, r0, #0	@ 000e87f6 021c
.org 0xe87f8
	ldrb r0, [r2, #16]	@ 000e87f8 107c
.org 0xe87fa
	cmp r0, #4	@ 000e87fa 0428
.org 0xe87fc
	bhi.n 0xe881a	@ 000e87fc 0dd8
.org 0xe87fe
	adds r0, r2, #0	@ 000e87fe 101c
.org 0xe8800
	adds r0, #115	@ 000e8800 7330
.org 0xe8802
	ldrb r0, [r0, #0]	@ 000e8802 0078
.org 0xe8804
	cmp r0, #3	@ 000e8804 0328
.org 0xe8806
	bne.n 0xe881a	@ 000e8806 08d1
.org 0xe8808
	ldr r1, [pc, #24]	@ 000e8808 0649
.org 0xe880a
	ldrb r0, [r2, #9]	@ 000e880a 507a
.org 0xe880c
	lsls r0, r0, #2	@ 000e880c 8000
.org 0xe880e
	adds r0, r0, r1	@ 000e880e 4018
.org 0xe8810
	movs r1, #2	@ 000e8810 0221
.org 0xe8812
	str r1, [r2, #12]	@ 000e8812 d160
.org 0xe8814
	ldr r0, [r0, #0]	@ 000e8814 0068
.org 0xe8816
	ldr r0, [r0, #8]	@ 000e8816 8068
.org 0xe8818
	str r0, [r2, #20]	@ 000e8818 5061
.org 0xe881a
	adds r0, r2, #0	@ 000e881a 101c
.org 0xe881c
	bl 0x1cff0	@ 000e881c 34f7e8fb
.org 0xe8820
	pop {r0}	@ 000e8820 01bc
.org 0xe8822
	bx r0	@ 000e8822 0047
