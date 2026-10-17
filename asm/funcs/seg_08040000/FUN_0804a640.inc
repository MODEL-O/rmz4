@ FUN_0804a640  entry 0x0804a640  size 40
.thumb
.org 0x4a640
FUN_0804a640:
	push {r4, lr}	@ 0004a640 10b5
.org 0x4a642
	adds r4, r0, #0	@ 0004a642 041c
.org 0x4a644
	adds r0, #190	@ 0004a644 be30
.org 0x4a646
	ldrb r0, [r0, #0]	@ 0004a646 0078
.org 0x4a648
	cmp r0, #0	@ 0004a648 0028
.org 0x4a64a
	beq.n 0x4a65c	@ 0004a64a 07d0
.org 0x4a64c
	adds r1, r4, #0	@ 0004a64c 211c
.org 0x4a64e
	adds r1, #84	@ 0004a64e 5431
.org 0x4a650
	movs r0, #1	@ 0004a650 0120
.org 0x4a652
	bl 0xd0c88	@ 0004a652 86f019fb
.org 0x4a656
	movs r0, #53	@ 0004a656 3520
.org 0x4a658
	bl 0x2b10	@ 0004a658 b8f75afa
.org 0x4a65c
	adds r0, r4, #0	@ 0004a65c 201c
.org 0x4a65e
	bl 0x3a8b4	@ 0004a65e f0f729f9
.org 0x4a662
	pop {r4}	@ 0004a662 10bc
.org 0x4a664
	pop {r0}	@ 0004a664 01bc
.org 0x4a666
	bx r0	@ 0004a666 0047
