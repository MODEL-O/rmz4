@ FUN_0809b710  entry 0x0809b710  size 34
.thumb
.org 0x9b710
FUN_0809b710:
	push {r4, lr}	@ 0009b710 10b5
.org 0x9b712
	adds r4, r0, #0	@ 0009b712 041c
.org 0x9b714
	ldr r1, [r4, #40]	@ 0009b714 a16a
.org 0x9b716
	adds r0, #182	@ 0009b716 b630
.org 0x9b718
	ldrb r0, [r0, #0]	@ 0009b718 0078
.org 0x9b71a
	cmp r0, #0	@ 0009b71a 0028
.org 0x9b71c
	beq.n 0x9b726	@ 0009b71c 03d0
.org 0x9b71e
	adds r0, r1, #0	@ 0009b71e 081c
.org 0x9b720
	adds r1, r4, #0	@ 0009b720 211c
.org 0x9b722
	bl 0x66408	@ 0009b722 caf771fe
.org 0x9b726
	adds r0, r4, #0	@ 0009b726 201c
.org 0x9b728
	bl 0x7f8ec	@ 0009b728 e4f7e0f8
.org 0x9b72c
	pop {r4}	@ 0009b72c 10bc
.org 0x9b72e
	pop {r0}	@ 0009b72e 01bc
.org 0x9b730
	bx r0	@ 0009b730 0047
